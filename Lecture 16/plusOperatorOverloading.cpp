// ==> Without Operator Overloading
// #include <iostream>
// using namespace std;
// class Test{
//     public:
//         int a, b;
//         Test( int first,  int second){
//             a = first;
//             b = second;
//         }
//         Test add(Test obj){
//             obj.a += a;
//             obj.b += b;
//             return obj;
//         }
// };
// int main(){
//     cout << "=========================================" << endl;
//     cout << "      **Without Operator Overloading**   " << endl;
//     cout << "=========================================" << endl;
//     Test T1(10, 20),T2(30, 40), T3(50, 60), T4(70, 80);
//     // Test T5 = T1.add(T2);
//     Test T5 = T1.add(T2.add(T3.add(T4)));
//     cout << "Total 'a': " << T5.a << endl;
//     cout << "Total 'b': " << T5.b << endl;
//     return 0;
// }



// ==> With Operator Overloadingc
#include <iostream>
using namespace std;
class Test{
    public:
        int a, b;
        Test( int first,  int second){
            a = first;
            b = second;
        }
        Test operator +(Test &obj){
            obj.a += a;
            obj.b += b;
            return obj;
        }
};
int main(){
    cout << "=========================================" << endl;
    cout << "      **With Operator Overloading**   " << endl;
    cout << "=========================================" << endl;
    Test T1(10, 20),T2(30, 40), T3(50, 60), T4(70, 80);
    // int a = 10;
    // int b = 10;
    // int c = 10;
    // int d = 10;
    // int sum = a+b+c+d;
    // cout << "sum: " << sum << endl;

    Test T5 = T1 + T2 + T3 + T4;

    cout << "Total 'a': " << T5.a << endl;
    cout << "Total 'b': " << T5.b << endl;
    cout << "Made with " << "❤" << " by *Mark Maverick* " << endl;
    return 0;
}