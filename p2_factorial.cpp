//factorial of a number and return it to main()

#include <iostream>

using namespace std;

class maths{
    int num;
    
    public:
    
    void get(){
        
        cout << "Enter the num" << endl;
        cin >> num;
    }
    
    int factorial() {
        int pro=1;
        int num1 = num;
        while (num1 != 0){
            pro*= num1;
            num1--;
        }
        
        return pro;
    }
};

int main(){
    
    maths obj;
    obj.get();
    int fac = obj.factorial();
    cout << "Factorial is " << fac << endl;
    
    return 0;
}
