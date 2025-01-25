#include <iostream>
using namespace std;

void getNumber(int &a, int &b){
    cout << "Enter 2 numbers:  " ;
    cin >> a >> b;
}

int Quotient(int a, int b){
    if(b == 0){
        cout << "Hey YOU! yes you, you can't put zero in denominator bad boy -:)" << endl;
        exit(0); // YOu might me wondering that this is the same code but it isn't the reason for that in this code we have control over the exit of the program like abnormal termination console windows in't automatically closed instead we've closed tha window.
    }
    return a/b;
}

int main(){
    int a, b;
    getNumber(a, b);
    cout << "a/b = " << Quotient(a, b) << endl;
    return 0;
}

