#include <iostream>
using namespace std;
//function with a default argument
void printMessage(string message = "Hello, Hellen mbugua") {
    cout << message << endl;
}
int main () {
    //calling the function without an argument
    printMessage();       //prints the default message Hello, Hellen mbugua!
    //calling the function with a custom argument
    printMessage("Hi, there!");     //prints the custom message "Hi, there"
    return 0;
}