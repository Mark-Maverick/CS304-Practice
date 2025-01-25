#include <iostream>
using namespace std;

template <class T>
class myClass{
    private:
        T a, b;
    public:
        myClass(T num1, T num2){
            a = num1;
            b = num2;
        }
        T sum(){
            return a + b;
        }
};

int main(){
    myClass<int> iObj(10, 20);
    myClass<float> fObj(10.5, 20.5);
    cout << "10 + 20: " << iObj.sum() << endl;
    cout << "10.5 + 20.5: " << fObj.sum() << endl;
    return 0;
}