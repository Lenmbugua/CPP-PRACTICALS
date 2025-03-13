#include <iostream>
using namespace std;
class Myclass {
    private:
      int value;
    public:
      //constructor
      Myclass(int v) : value(v) {}
      //Explicit copy constructor
      Myclass(const Myclass& other) : value(other.value) {
        cout << "Explicit copy constructor called" << endl;
      }
      void display() const { cout << "Value: " << value << endl; }
};
void processValue(Myclass obj) {
    //implicit copy constructor will be called here
    obj.display();
}
int main() {
    Myclass obj1(10);                //constructor called
    Myclass obj2 = obj1;           //Explicit copy constructor called
    obj1.display();       
    obj2.display();
    processValue(obj1);            //Implicit copy constructor called
    return 0;
}