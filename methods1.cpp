#include <iostream>
using namespace std;
class MyClass { //The class
    public:            //Access specifier
        void myMethod();  //method function\declaration
};
//method/function definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!";
}
int main() {
    MyClass myObj;       //create an object of MyClass
    myObj.myMethod();     //call the method
    return 0;
}