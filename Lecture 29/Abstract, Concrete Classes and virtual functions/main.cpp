#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void show(){
            cout << "Shape Class" << endl;
        }
        virtual void draw() = 0; // Pure Virtual Function
};

class Line: public Shape{
    public:
        virtual void draw(){
            cout << "Called from Line Class" << endl;
        }
        void show(){
            cout << "Line Class" << endl;
        }
};


int main(){
    Shape *s;
    s = new Line;
    s -> draw();
    s -> show();
    return 0;
}