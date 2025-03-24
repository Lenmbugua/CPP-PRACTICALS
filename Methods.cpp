#include <iostream>
using namespace std;
class Myclass {         //The class
      public:
         void myMethod() { //Method defined inside the class
          cout << "Hello World!";
        }
};
int main () {
    Myclass myObj;            //create an object of MyClass
    myObj.myMethod();         //call the method
    return 0;
}