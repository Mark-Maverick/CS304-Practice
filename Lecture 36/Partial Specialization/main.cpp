#include <iostream>
using namespace std;

// Partial Specialization
template<class T1, int T2>
class myClass{
    T1 a;
    int b;
    public:
        myClass(T1 one, int two){
            a = one;
            b = two;
        }
        void sum(){
            cout << "Sum: " << a + b << endl;
        }
};


int main(){
    
    myClass<int,30> obj(10, 30);
    obj.sum();
    return 0;
}