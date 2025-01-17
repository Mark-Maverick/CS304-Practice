#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
        int serialNumber;
};
int main(){
    cout << "Lecture 02 => Information Hiding" << endl;
    Student student;
    // cout << "Student Name:" <<student.name << endl; // This will through an error because the information is hidden as we are using private access specifier.
    // cout << "Student Age:" <<student.age << endl; // This will through an error because the information is hidden as we are using private access specifier.
    cout << "Student Serial Number: " << student.serialNumber << endl; // As we haven't stored any value in the serialNumber so it would've a garbage value but it wouldn't through any error as this wasn't the one we made private as we've written it in public access specifier.
    return 0;
}