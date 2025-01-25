
// 1st Method

// #include <iostream>
// using namespace std;

// template <class T>
// class myClass{
//     private:
//         T a, b;
//     public:
//         myClass(T num1, T num2){
//             a = num1;
//             b = num2;
//         }
//         T Sum(){
//             return a + b;
//         }
// };

// int main(){
//     myClass<int> intObj(10, 20);
//     myClass<float> floatObj(10.4, 20.6);
//     cout << "10 + 20 = " << intObj.Sum() << endl;
//     cout << "10.4 + 20.6 = " << floatObj.Sum() << endl;
//     return 0;
// }

// ==============================================================================================================

// 2nd Method

#include <iostream>
using namespace std;

template <class T>
class myClass{
    private:
        T a, b;
    public:
        myClass(T, T);
        T Sum();
};
template <class T>
myClass<T>::myClass(T num1, T num2){
            a = num1;
            b = num2;
        }
template <class T>
T myClass<T>::Sum(){
    return a + b;
}
int main(){
    myClass<int> intObj(10, 20);
    myClass<float> floatObj(10.4, 20.6);
    cout << "10 + 20 = " << intObj.Sum() << endl;
    cout << "10.4 + 20.6 = " << floatObj.Sum() << endl;
    return 0;
}