#include <iostream>
using namespace std;

// static_cast ==> base class to derived class

class Base{
    public:
        void myFunction(){
            cout << "Base Class Function" << endl;
        }
};

class Derived: public Base{
    void myFunction(){
            cout << "Derived Class Function" << endl;
        }
};

int main(){
    
    return 0;
}