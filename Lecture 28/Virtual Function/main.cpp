//Problem
// #include <iostream>
// using namespace std;

// class Shape{
//     public:
//         void draw(){
//             cout << "draw function of the Shape class" << endl;
//         }
// };

// class Line: public Shape{
//     public:
//         void draw(){
//             cout << "draw function of the Line class" << endl;
//         }
// };
// class Circle: public Shape{
//     public:
//         void draw(){
//             cout << "draw function of the Circle class" << endl;
//         }
// };
// class Triangle: public Shape{
//     public:
//         void draw(){
//             cout << "draw function of the Triangle class" << endl;
//         }
// };

// int main(){
    
//     Shape *s;
//     s = new Line;
//     s->draw(); // PROBLEM: In this point you might be thinking that the function of the respective class who's address is assigned to s would call it's function but it wouldn't happen like this instead the function of the parent class i.e. Shape class would be called and the same goes for all the three bottom ones.
//     s = new Circle;
//     s->draw();
//     s = new Triangle;
//     s->draw();
//     return 0;
// }







#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){ // SOLUTION: Put virtual keyword in front of draw function in Parent Class
            cout << "draw function of the Shape class" << endl;
        }
};

class Line: public Shape{
    public:
        void draw(){
            cout << "draw function of the Line class" << endl;
        }
};
class Circle: public Shape{
    public:
        void draw(){
            cout << "draw function of the Circle class" << endl;
        }
};
class Triangle: public Shape{
    public:
        void draw(){
            cout << "draw function of the Triangle class" << endl;
        }
};

int main(){
    
    Shape *s;
    s = new Line;
    s->draw();
    s = new Circle;
    s->draw();
    s = new Triangle;
    s->draw();
    return 0;
}