// #include <iostream>
// using namespace std;

// // static_cast - base class to derived class - down casting
// // dynamic_cast - derived class to base class - up casting
// // reinterpret_cast - base class to derived class - down casting
// // const_cast - 

// class Base{
//     public:
//         void myFunction(){
//             cout << "Base Class Functioin" << endl;
//         }
// };

// class Derived: public Base{
//     public:
//          void myFunction(){
//             cout << "Derived Class Functioin" << endl;
//         }
// };

// int main(){

//     // // static_cast    
//     // Base *b = new Derived;
//     // b -> myFunction();
//     // Derived *d = static_cast<Derived*>(b);
//     // d -> myFunction();

//     // reinterpret_cast
//     // Base *b = new Derived;
//     // b -> myFunction();
//     // Derived *d = reinterpret_cast<Derived*>(b);
//     // d -> myFunction();

//     // // dynamic_cast
//     // Derived *d = new Derived;
//     // d -> myFunction();
//     // Base *b = dynamic_cast<Base *>(d);
//     // b -> myFunction();



//     return 0;
// }



#include <iostream>
using namespace std;

void print (char * str){
    cout << " " << str;
}

int main(){
    // const_cast
    const char *array = "My Name is Mark";
    print(const_cast<char *>(array));
    return 0;
}