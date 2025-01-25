#include <iostream>
using namespace std;

void getNumber(int &a, int &b){
    cout << "Enter 2 numbers:  ";
    cin >> a >> b;
}

int Quotient(int a, int b){
    return a/b;
}

int main(){
    int a, b;
    getNumber(a, b);
    cout << "a/b = " << Quotient(a, b) << endl;
    return 0;
}

// In normal condition this program would work fine but it would show abnormal termination when you will put abnormal value for example if you put 0 in b then this program would terminate abnormally.