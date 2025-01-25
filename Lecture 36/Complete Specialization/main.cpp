#include <iostream>
using namespace std;

// Complete Specialization
template<class T1, class T2>
class myClass{
    T1 a;
    T2 b;
    public:
        myClass(T1 one, T2 two){
            a = one;
            b = two;
        }
        void sum(){
            cout << "Sum: " << a + b << endl;
        }
};

template<>
class myClass<int, int> {
    int a;
    int b;
public:
    myClass(int one, int two) {
        a = one;
        b = two;
    }
    void sum() {
        cout << "Sum (Specialized for int, int): " << a + b << endl;
    }
};

int main(){
    
    myClass<int, int> obj(10, 30);
    obj.sum();
    return 0;
}