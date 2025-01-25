#include <iostream>
using namespace std;

void getNumber(int &a, int &b){
    cout << "Enter 2 numbers:  " ;
    cin >> a >> b;
}

int Quotient(int a, int b){
    if(b == 0){
        b = 1; // The difference in this file from abnormal termination and graceful termination code is that we have set the value forcefully to other than zero so that if user enters the zero value we'll automatically change it to 1;
    }
    return a/b;
}

int main(){
    int a, b;
    getNumber(a, b);
    cout << "a/b = " << Quotient(a, b) << endl;
    return 0;
}

