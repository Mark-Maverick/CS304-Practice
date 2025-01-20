#include <iostream>
using namespace std;

class Person{ // Abstract Class
    int id;
    string name;
    public:
        Person(int i, string n){
            id = i;
            name = n;
        }
        virtual int getId(){
            return id;
        }
        virtual string getName(){
            return name;
        }
        virtual void display() = 0;
};

class Student: public Person{ // Concrete Class
    float marks;
    public:
        Student(int i, string n, float m): Person(i, n){
            marks = m;
        }
        void display(){
            cout << "==== Student Record =====" << endl;
            cout << "Student ID: " << getId() << endl;
            cout << "Student Name: " << getName() << endl;
            cout << "Student Marks: " << marks << endl;
        }
};

class Teacher: public Person{ // Concrete Class
    string qualification;
    public:
        Teacher(int i, string n, string q): Person(i, n){
            qualification = q;
        }
        void display(){
            cout << "==== Teacher Record =====" << endl;
            cout << "Teacher ID: " << getId() << endl;
            cout << "Teacher Name: " << getName() << endl;
            cout << "Teacher Qualification: " << qualification << endl;
        }
};

int main(){
    
    Person*p[2]; // made array because it has to child classes 
    p[0] = new Student(101, "Mark Maverick", 100);
    p[1] = new Teacher(501, "sdjfhjk", "BSCS");
    p[0] -> display();
    p[1] -> display();
    return 0;
}