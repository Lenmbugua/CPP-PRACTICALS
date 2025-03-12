#include <iostream>
using namespace std;
class MyClass {
    public:
      int a,b;

      //default constructors no arguments
      MyClass() : a(0), b(0) {
          cout << "Default constructor called" << endl;
      }
        // Overloaded constructor with one argument
        MyClass(int x) : a(x), b(0) {
            cout << "Overloaded constructor (1 argument) called" << endl;
         }
      //overloaded constructor with two arguments
      MyClass(int x, int y) : a(x), b(y) {
        cout << "Overloaded constructor(2 arguments) called" <<endl;
      }

      void display(){
        cout << "a: "<< a <<", b: " << b << endl;
      }
};
int main () {
    MyClass obj1;        //calls default constructor
    MyClass obj2(10);    //calls overloaded constructor(1 argument)
    MyClass obj3(10, 20);    //calls overloaded constructor(2 arguments)

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}