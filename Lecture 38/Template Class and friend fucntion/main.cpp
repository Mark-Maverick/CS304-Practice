#include <iostream>
using namespace std;

void function();
template<class T>

class A{
    T data;
    friend void function(); // function as a friend of class A
};

void function(){
    A<int> id;
    id.data = 5;
    cout << "Id: " << id.data << endl;
    A<string> name;
    name.data = "Mark Maverick";
    cout << "Name: " << name.data << endl;
}

int main(){
    function();
    return 0;
}