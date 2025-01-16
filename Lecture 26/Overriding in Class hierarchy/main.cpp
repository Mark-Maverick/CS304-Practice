#include <iostream>
using namespace std;

class GrandParent{
    public:
        void print(){
        cout << "GrandParent class" << endl;
       }
};

class Parent : public GrandParent{
    public:
       void print(){
        cout << "Parent class" << endl;
       }
};

class Child: public Parent{
    public:
        void print(){
        cout << "Child class" << endl;
       }
};

int main(){
    Child obj;
    obj.print(); // child's class itself function would be called
    obj.Parent::print(); // Parent class' function would be called
    obj.GrandParent::print(); // GrandParent class's function would be called
    return 0;
}