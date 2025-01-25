#include <iostream>
using namespace std;

void getNumber(int &a, int &b){
    cout << "Enter 2 numbers:  " ;
    cin >> a >> b;
}

bool Quotient(int a, int b){
    if(b == 0){
        return true; // 
    }
    return false;
}

int main(){
    int a, b;
    getNumber(a, b);
    if(Quotient(a, b)){
        cout << "Denominator Can't be zero" << endl;
        exit(1);
    }
    else{
    cout << "a/b = " << Quotient(a, b) << endl;
    }
    return 0;
}

