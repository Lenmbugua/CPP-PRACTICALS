// in the following example we are defining an inline function with the class
#include <iostream>
using namespace std;
class Number {
    private:
        int num1;
        int num2;
    public:
    //function to set the values
    void setValues(int a, int b);
    //function to print values
    void printValues();
    //inline function to add the two values
    inline int addNumbers();
};
    //member function definitions
    void Number::setValues(int a, int b) {
        num1 = a;
        num2 = b;
    }
    void Number::printValues() {
        cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;
    }
    //inline function definition
    inline int Number::addNumbers(){
        return num1 + num2;
    }
    int main() {
        //create an object
        Number n;
        //set the values
        n.setValues(10,20);
        //print the values
        n.printValues();
        //Add the numbers and print the result
        int sum = n.addNumbers();
        cout << "Sum of the numbers: " << sum << endl;
        return 0;
    }