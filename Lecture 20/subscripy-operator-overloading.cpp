#include <iostream>
using namespace std;

class Test{
	private:
		int arr[10];
	public:
		Test(){
			for(int i = 0; i < 10; i++){
				arr[i] = i+2;
			}	
		}
		
		int &operator [](int index){
			if(index > 9){
				cout << "Index out of the bound"<< endl;
			}
			else{
				return arr[index];
			}
		}
		
};

int main(){
	Test T;
	cout << "T[0] = " << T[0];
	cout << "T[25] = " << T[25];
	return 0;
}
