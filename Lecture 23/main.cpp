#include <iostream>
using namespace std;

class Base{
    public:
        void getName(){
            cout << "My name is Mark Maverick" << endl;
        }
        // void getMarks(){
        //     cout << "base class function" << endl;
        // }
        // virtual void getMarks() = 0; // Pure virtual function
};

class Derived: public Base{
    public:
        void getRollNo(){
            cout << "My Roll NO is BC123456789" << endl;
        }
        void getMarks(){
            cout << "Derived class function" << endl;
        }
};

int main(){
    Base *p, obj1;
    Derived *d, obj2;
    d = &obj2; // Implicit typecasting
    p = &obj1; // Implicit typecasting
    // p = &d; // Explicit typecasting
    p->getName();
    d->getRollNo(); 
    // p->getMarks(); // If you want virtual function to be called, then you need to declare the function as virtual in the base class like i did above.
    return 0;
}
