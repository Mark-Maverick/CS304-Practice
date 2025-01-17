#include <iostream>
using namespace std;
class X{
    private:
        int x;
    public:
        void display(){
            cout << "x is: " << x << endl;
        }
        friend void someFunction(X &obj);
};
    void someFunction(X &obj){
        obj.x = 10;
    }
int main(){
    cout << "------------------------------" <<endl;
    cout << "  Developed by Mark Maverick  " <<endl;
    cout << "------------------------------" <<endl;
    X obj;
    cout << "Before Running Friend fucntion" << endl;
    obj.display();
    someFunction(obj);
    cout << "After Running Friend fucntion" << endl;
    obj.display();

    return 0;
}