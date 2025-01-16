// Insertion Operator Overloading
//#include <iostream>
//using namespace std;
//
//class Test{
//	public:
//		string name;
//		Test(){
//			name = "Mark";
//		}
//		friend ostream &operator <<(ostream &print, Test &obj){
//			print << "Name: " << obj.name;
//			return print;
//		}
//};
//
//int main(){
//	Test T1;
//	cout << T1;
//	return 0;
//}


// Extraction Operator Overloading
#include <iostream>
using namespace std;

class Test{
	public:
		string name;
		friend istream &operator >>(istream &prompt, Test &obj){
			prompt >> obj.name;
			return prompt;
		}
		friend ostream &operator <<(ostream &print, Test &obj){
			print << "Name: " << obj.name;
			return print;
		}
};

int main(){
	Test T1;
	cout << "Enter Name: ";
	cin >> T1;
	cout << T1;
	return 0;
}
