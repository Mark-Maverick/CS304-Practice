// Without Static Variable
// #include <iostream>
// using namespace std;

// template<class T>
// class myClass{
//     public:
//         T data;
//         myClass(){
//             data = 0;
//             data++;
//         }
// };

// int main(){
//     myClass<int> obj[10]; // obj[0], obj[1], obj[2], ... , obj[9]
//     cout << "obj[9].data: " << obj[9].data << endl; // Output would be One because the value of non static variable is not shared among the objects
//     return 0;
// }


// With Static Variable

#include <iostream>
using namespace std;

template<class T>
class myClass{
    public:
        static T data;
        myClass(){
            data++;
        }
};
template<class T>
T myClass<T>::data = 0;

int main(){
    myClass<int> obj[10]; // obj[0], obj[1], obj[2], ... , obj[9]
    cout << "obj[9].data: " << obj[9].data << endl; // Output would be 10 because the value of static variable is shared among the objects
    return 0;
}