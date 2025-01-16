#include <iostream>
using namespace std;

class Test{
    private:
        int a,b;
    public:
        Test(){
            a = 0;
            b = 0;
        }
        Test(int a, int b){
            this-> a = a;
            this-> b = b;
        }

        Test operator -(){
            a = -a;
            b = -b;
            return Test(a,b);
        }

        void display(){
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }

};

int main(){
    
    Test T1(10, 20), T2(-20, -10);
    -T1;
    T1.display();
    -T2;
    T2.display();
    return 0;
}