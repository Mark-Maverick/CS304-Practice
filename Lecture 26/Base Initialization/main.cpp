#include <iostream>
using namespace std;

class GrandParent{
    private:
        int gp;
    public:
        GrandParent(): gp(0){
            cout << "GP: " << gp << endl;
        }
};

class Parent : public GrandParent{
    private:
        int p;
    public:
        Parent(): GrandParent(), p(10){
            cout << "p: " << p << endl;
        }
};

class Child: public Parent{
    private:
        int c;
    public:
        Child(): Parent(), c(20){ // Child Class can call direct parent class contructor by the member initialization list of the parent
            cout << "c: " << c;
        }

        // Child(): GrandParent(), c(20){ // but can't call constructor of the grandparent i.e. of indirect parent
        //     cout << "c: " << c;
        // }
};

int main(){
    Child obj;
    return 0;
}