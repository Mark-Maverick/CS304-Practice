// Problem
// #include <iostream>
// using namespace std;

// template<class K>
// void Print(K a, K b){
//     cout << "a+b" << a + b;
// }

// int main(){
    
//     Print(10, 20); // Single Type Argument
//     Print(10, 20.5); // PROBLEM:  In this case the template with single calss wouldn't work so we would need multiple classes in the template
//     return 0;
// }

// Solution
#include <iostream>
using namespace std;

template<class K, class H>
void Print(K a, H b){
    cout << "a+b: " << a + b;
}

int main(){
    
    Print(10, 20.5); 
    return 0;
}