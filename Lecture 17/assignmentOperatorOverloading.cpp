// ==> Assignment Operator Overloading
#include <iostream>
using namespace std;
class Test{
    public:
        string name;
        Test (string n){
            name = n;
        }
        Test operator =(Test T2){
            T2.name = name;
            return T2;
        }
        // string operator =(string n){
        //     name = n;
        //     return name;
        // }
};
int main(){
    Test T1("Mark"), T2("Maverick");
    Test T3 = T1 = T2; // Now T3 would've Mark 
    // cout << "T1 = " << T1.name << endl; // Output would be Mark as we stored Mark in it 
    cout << "T3 = " << T3.name << endl; // Output would be Mark because T1 would face operator overloading passing T2 as paramertor to the overloading code and then the logic would store the value of name of  T1 in the name of T2 and this name would be passed to T3's name which would be Mark as said earlier
    // cout << "T2 = " << T2.name << endl; // Output would be Maverick as we stored Maverick in it
    // // string name = T1 = "Mark Maverick";
    // cout << "T1 = " << T1.name << endl; // Output would be Mark Maverick


    // cout << "Made with ♥ by Mark Maverick" << endl; 
    return 0;
}