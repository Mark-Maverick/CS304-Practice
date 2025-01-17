// ==> Self Assignment Problem
#include <iostream>
#include <string>
using namespace std;
class Test{
    public:
        string name;
        // Test () : name(""){}
        // Test(const Test& obj) : name(obj.name) {}
        Test (string n) : name(n){}


        // Test (string n){
        //     name = n;
        // }

        Test& operator =(const Test& obj){
            if (this == &obj){
                cout << "=========Alert=========" << endl;
                cout << "Self Assignment Detected" << endl;
                cout << "========================" << endl;
                return *this;
            }
            else{
                this->name = obj.name;
            }
            return *this;
        }
};
int main(){
    Test T1("Mark"), T2("Maverick");
    T1 = T1;
    cout << "Name = " << T1.name << endl;
    T1 = T2;
    cout << "Name = " << T1.name << endl;
    return 0;
}
