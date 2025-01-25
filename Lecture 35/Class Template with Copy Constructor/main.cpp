#include <iostream>
using namespace std;

template <class T>
class myClass{
    T a,b;
    public:
        myClass(T num1, T num2){
            a = num1;
            b = num2;
        }

        // Explicit copy constructor
        myClass(const myClass &obj){
            a = obj.a;
            b = obj.b;
            cout << "copy constructor" << endl;
        }

        void Sum(){
            cout << "Sum: " << a + b << endl;
        }
};

int main(){ // If you want the copy constructor to work with template class then make sure that the object being copied and the object it is copied to must have the same data type.
    myClass<int> intObj(10, 20);
    intObj.Sum();
    myClass<int> intObj2 = intObj; // compiler would have automatically ran a copy constructor here if we haven't written a explicit copy constructor above 
    intObj2.Sum();
    return 0;
}