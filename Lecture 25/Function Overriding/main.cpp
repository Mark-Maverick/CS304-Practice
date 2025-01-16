#include <iostream>
using namespace std;

class Base{
    public:
        void sum (int a, int b){
            cout << "Sum: " << a + b << endl;
        }
};

class Derived: public Base{
    public:
        void sum(int a, int b){
            Base::sum(a, b);
            cout << "Sum is " << a + b << endl;
        }
};

int main(){
    
    Derived d;
    d.sum(10, 20);
    return 0;
}