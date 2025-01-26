#include <iostream>
using namespace std;

int main(){
    
    try{
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if(b == 0){
            throw b;
        }
        else{
            cout << "Division is: " << a/b << endl;
        }
    }
    // catch(int myNum){ // if you're confirm with the data type of the exception
    //     cout << "Division by zero is not allowed as b = " << myNum << endl;
    // }
    catch(...){ // if you're not confirm with the data type of the exception
        cout << "Division by zero is not allowed" << endl;
    }
    return 0;
}