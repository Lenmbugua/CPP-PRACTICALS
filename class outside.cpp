#include <iostream>
using namespace std;
class Myclass{
    public:
    void myMethod();       //method/function declaration     
};
void Myclass::myMethod() {     //method/function defined inside the class
    cout << "Hello world!";
} 
int main() {
    Myclass myObj;     //create an object of myclass
    myObj.myMethod();   //call the method
    return 0;
}