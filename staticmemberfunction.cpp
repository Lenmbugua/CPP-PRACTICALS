#include <iostream>
using namespace std;
class Myclass {
    public:
       static void displayMessage(){
        cout << "Hello, world!";
       }
};
int main() {
    //calling static member function
    Myclass::displayMessage();
    return 0;
}