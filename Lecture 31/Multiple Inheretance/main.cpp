#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a = 50;
        }
        void functionA(){
            cout << "Function A" << endl;
        }
        void getVlaue(){
            cout << "a: " <<  a << endl;
        }
};
class B{
    int b;
    public:
        B(){
            b = 100;
        }
        void functionB(){
            cout << "Function B" << endl;
        }
        void getVlaue(){
            cout << "b: " <<  b << endl;
        }
};

class C: public A, public B{
    
};


int main(){
    
    C obj;
    // obj.getVlaue(); // this would throw an error as both the classes have the same function name causing abmiguity
    obj.A::getVlaue(); // this would work as we are specifying the class name
    obj.B::getVlaue(); // this would work as we are specifying the class name
    return 0;
}