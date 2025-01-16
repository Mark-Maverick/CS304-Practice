#include <iostream>
using namespace std;

class Base{
        int a;
    public:
        Base (int a) : a(a){
            cout << "a: " << a << endl;
        }
};

class Derived : public Base{
        int b;
    public:
        Derived(int x, int y) : Base (x), b(y){
            cout << "b: " << b << endl;
        }
};

int main(){

    Derived d(10, 20);    
    return 0;
}