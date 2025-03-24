#include <iostream>
using namespace std;
class MyClass {   //The class
    public:      //Access specifier
    MyClass() {  //The constructor
       cout << "Hello World!";  
    }
};
int main () {
    MyClass myObj;            //create an object of the class(This will call the constructor)
    return 0;
}