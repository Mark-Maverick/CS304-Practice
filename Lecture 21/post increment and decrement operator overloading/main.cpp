#include <iostream>
using namespace std;

class Test{
    private:
        int a;
    public:
        Test(){
            a = 0;
        }
        Test(int a){
            this->a = a;
        }
        // Pre Increment Operator
        Test operator ++(int){
            Test obj;
            obj.a = a++;
            return obj;
        }
        // Pre Decrement Operator
        Test operator --(int){
            Test obj;
            obj.a = a--;
            return obj;
        }
        void display(){
            cout << "a: " << a << endl;
        }
}

int main(){
    Test T1(10);
    Test T2 = T1++;
    T2.display();
    T1 = T2--;
    T1.display();
    return 0;
}