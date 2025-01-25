#include <iostream>
using namespace std;

class B;
template <class T>
class A{
    T data;
    friend class B; // B Class as a friend of class A
};

class B{
    A<int> ib;
    A<float> fb;
    public:
        void setdata(){
            ib.data = 5;
            fb.data = 5.5;
            cout << "ib: " << ib.data << endl << "fb: " << fb.data << endl;
        }
};

int main(){
     B obj;
     obj.setdata();
    return 0;
}