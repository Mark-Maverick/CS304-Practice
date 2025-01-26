#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    int id = 1234;
    string name = "Mark"; // Keep in mind that we need to write name of one word as i've written mark instead of mark maverick if i write mark maverick then the output would be a infinite loop with name: mark and id : 0
    // Steps for writing in file:
    // 1. Create object of ofstream class but we can use fstream class for both reading and writing
    fstream file;
    // 2. Open file for writing mode
    file.open("mark.txt", ios::out | ios::app); // ios::app is used to append data in file and ios::out is used to write data in file
    // 3. Write in file
    file  << name << " " << id << endl;
    // 4. Close file
    file.close();

    // Steps for reading from file:
    // 1. Create object of ifstream class but we can use fstream class for both reading and writing
    // but as we already have file object so we can use it for reading as well
    // 2. Open file for reading mode
    file.open("mark.txt", ios::in);
    if(!file){
        cout << "File not found" << endl;
    }
    else{
        // 3. Read from file
        file >> name;
        file >> id;
        while (!file.eof()){
            cout << "name: " << name << "  id: " << id << endl;
            file>> name >> id;
        }
        
        // 4. Close file
        file.close();
    }


    return 0;
}