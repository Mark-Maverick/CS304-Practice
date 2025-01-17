#include <iostream>
using namespace std;
class Test{
        int a, b;
    public:
        Test(): a(0), b(0){}
        Test (int first, int second){
            a = first;
            b = second;
        }
        friend Test operator +(const Test& obj1,const Test& obj2);
        void getValues() const{
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};
Test operator +(const Test& obj1,const Test& obj2){
    Test obj(0, 0);
    obj.a = obj1.a + obj2.a;
    obj.b = obj1.b + obj2.b;
    return obj;
}
int main(){
    Test obj1(10, 20), obj2(30, 40);
    Test obj3 = obj1+obj2;
    obj3.getValues();
    return 0;
}