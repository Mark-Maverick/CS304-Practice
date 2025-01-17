#include <iostream>
using namespace std;
class Screen{
    public:
        Screen(){
            cout << "Screen Constructor" << endl;
        }
        void Display(){
            cout << "Screen Display" << endl;
        }
        ~Screen(){
            cout << "Screen Destructor" << endl;
        }
};
class Keyboard{
    public:
        Keyboard(){
            cout << "Keyboard Constructor" << endl;
        }
        void Typing(){
            cout << "Keyboard Typing" << endl;
        }
        ~Keyboard(){
            cout << "Keyboard Destructor" << endl;
        }
};
class Laptop{
    public:
        Screen S;
        Keyboard K;
        Laptop(){
            cout << "Laptop Constructor" << endl;
        }
        void startOs(){
            cout << "Laptop startOs" << endl;
        }
        ~Laptop(){
            cout << "--------------------------------" << endl << "Laptop Destructor" << endl;
        }
};
int main(){
    cout << "--------------------------------" << endl << "   Developed by Mark Maverick   " << endl << "--------------------------------" << endl;
    Laptop L;
    cout << "--------------------------------" << endl;
    L.S.Display();
    L.K.Typing();
    L.startOs();
    return 0;
}
