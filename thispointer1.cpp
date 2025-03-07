#include <iostream>
using namespace std;
class Myclass {
    public:
        Myclass(int val) : data(val) {}
        //const member function (has this pointer,but its with a const pointer)
        void printData() const{
            cout << "Data: " << data <<endl; //'this' points to a const object
            // Uncommenting the next line will cause an error because 'this' is const
            // data = 10;  // Error: cannot modify 'data' in a const member function
        }
        // Static member function (no 'this' pointer, operates on class-level data)
        static void showMessage() {
            cout << "This is a static function!" << endl;
             // Uncommenting the next line will cause an error because static functions can't access instance members
         // std::cout << "Data: " << data << std::endl;  // Error: 'data' is not accessible
        }
        private:
             int data;
};
int main() {
    Myclass obj(5);
    //calling const member function (can access 'this' as const)
    obj.printData();
    //calling static member function (no 'this' pointer available)
    Myclass::showMessage();
    return 0;
}