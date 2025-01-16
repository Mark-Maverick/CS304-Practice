#include <iostream>
using namespace std;

class Base{
	protected:
		void getName(){
			cout << "My name is Mark Maverick" << endl;
		}
};

class Derived : public Base{
	
	public:
		void getRollNo(){
			getName();
			cout << "My Roll No. is 123456789" << endl;
		}
	
};

int main(){
	
	Derived b1;
	b1.getRollNo();
	return 0;
}
