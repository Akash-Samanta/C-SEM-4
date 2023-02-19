//display student info in class object
#include <iostream>
using namespace std;
class student{
    
    char name [100];
    int id;
    float marks;
    
    public:
    void get(){
        
        cout << "Enter Name:" << endl;
        cin >> name;
        cout << "Enter ID and Marks:" << endl;
        cin >> id >> marks;
    }
    
    void display() {
        cout << "Name is " << name << endl << "Id is " << id << endl << "Marks is " << marks;
    }
};

int main() {
    student obj;
    obj.get();
    obj.display();
    
    return 0;
}
