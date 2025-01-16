#include <iostream>
using namespace std;

class Test{
    private:
        int age;
        string name;
    public:
        Test(){
            age = 0;
            name = "";
        }
        Test(int a, string n){
            age = a;
            name = n;
        }
        Test operator ()(int a, string n){
            Test obj;
            obj.age = a;
            obj.name = n;
            return obj;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

};

int main(){
    
    Test T1(17, "Mark"), T2;
    T1.display();
    T2 = T1(18, "sharam");
    T2.display();
    return 0;
}