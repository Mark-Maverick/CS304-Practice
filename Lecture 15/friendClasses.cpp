#include <iostream>
using namespace std;
class X{
    private:
        friend class Y;
        int x;
    public:
        X(): x(0){}
        int display() const{
            return x;
        }
};
class Y{
    public:
        X obj;
        void setX(){
            obj.x = 10;
        }
};

int main(){
    cout << "------------------------------" <<endl;
    cout << "  Developed by Mark Maverick  " <<endl;
    cout << "------------------------------" <<endl;
    Y object;
    object.setX();
    cout << "x: " << object.obj.display() << endl;
    return 0;
}