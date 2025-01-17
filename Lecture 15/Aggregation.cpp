#include <iostream>
using namespace std;
class Address{
    public:
        string address;
        Address(string adrs){
            address = adrs;
        }
};
class Employee{
    private:
        string name;
        Address *adres;
    public:
        Employee(string n, Address* obj){
            name = n;
            adres = obj;
        }
        void getEmployee(){
            cout << "Name: " << name << endl;
            cout << "Address: " << adres->address << endl;
        }
};

int main(){
    cout << "------------------------------" << endl;
    cout << "  Developed by Mark Maverick  " << endl;
    cout << "------------------------------" << endl;
    Address address1("Pakistan");
    Employee E1("Mark", &address1);
    E1.getEmployee();
    return 0;
}