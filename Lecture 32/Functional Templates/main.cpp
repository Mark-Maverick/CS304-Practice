#include <iostream>
using namespace std;

template <class K>
void Print(K a, K b){
    cout << a << " " << b << endl;
}

int main(){
    
    Print(1, 2);
    Print(1.1, 2.2);
    Print('a', 'b');
    return 0;
}