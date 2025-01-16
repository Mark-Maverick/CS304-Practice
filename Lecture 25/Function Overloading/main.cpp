#include <iostream>
using namespace std;

// Function Overloading - Within the same class
// Funciton Overriding  - Within Base and Derived class

class Base{
    public:
        void sum(int a, int b){
            cout << "Sum: " << a + b << endl;
        }
        void sum(int a, int b, int c){
            cout << "Sum: " << a + b + c << endl;
        }
};

int main(){
    
    Base b;
    b.sum(10, 20);
    b.sum(10, 20, 30);
    return 0;
}