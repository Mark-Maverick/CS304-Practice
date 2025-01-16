#include <iostream>
using namespace std;

class Base{
    private:
        int a;
    protected:
        int b;
    public:
        void getData(){
            a = 10;
            b = 20;
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }

};

class Derived: public Base{
    public:
        void getData(){
            Base::getData();
        }
};

int main(){
    Derived d;
    d.getData();
    return 0;
}