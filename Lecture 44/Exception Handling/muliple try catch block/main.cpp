#include <iostream>
using namespace std;

int main(){
    
    try{
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if(b == 0){
            throw "Denominator is zero which isn't allowed";
        }
        else if(b < 0){
            throw b;

        }
        else{
            cout << "Division is: " << a/b << endl;
        }
    }
    catch(const char* MyStr){
        cout << MyStr << endl;
    }
    catch(int myNum){
        cout << "Denominator is negative as b = " << myNum << endl;
    }
    return 0;
}