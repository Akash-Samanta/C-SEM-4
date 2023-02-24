//area of geometric shape; opt through switch case
#include <iostream>
using namespace std;

class object{
    
    int l,b;
    
    public:
    
    void rectangle(){
        
        int a;
        
        cout << "Enter the length of the rectangle: ";
        cin >> l;
        cout << "Enter the breadth of the rectangle: ";
        cin >> b;
        a = l*b;
        cout << "The area of the rectangle is " << a << endl;
    }
    
    void triangle(){
         int a; 
         cout << "Enter the height of the triangle: ";
         cin >> l;
         cout << "Enter the base of the triangle: ";
         cin >> b;
         a=l*b/2;
         cout << "The area of the triangle is " << a << endl;
    }
    
    void circle(){
        int a;
        cout << "Enter the radius fo the circle: ";
        cin >> l;
        a=3.14*l*l;
        cout << "The area of the circle is " << a << endl;
    }
    
    void square(){
        int a;
        cout << "Enter the length of the square: ";
        cin >> l;
        a=l*l;
        cout << "The area of the square is " << a << endl;
    }
};

int main(){
    object air;
    int num;
    while(1){
        cout << "AREA OF" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Square" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option" << endl;
        
        cin >> num;
        
        switch(num){
            
            case 1: air.rectangle();
            break;
            
            case 2: air.triangle();
            break;
            
            case 3: air.circle();
            break;
            
            case 4: air.square();
            break;
            
            case 5: exit(1);
            break;
            
            default: cout << "Wrong Input";
        }
    }
}
