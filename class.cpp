#include <iostream>
using namespace std;

class item {
    int number;          // variables declaration
    float cost;          // private by default
  public:
   void getdata(int a, float b);      // functions declaration
   void putdata(void);                // using prototype
};                                    // ends with semicolon

// Function definition
void item::getdata(int a, float b) {
    number = a;
    cost = b;
}

void item::putdata(void) {
    cout << "Number: " << number << "\n";
    cout << "Cost: " << cost << "\n";
}

int main() {
    item obj;   // Create an object of the class
    obj.getdata(5, 500.75);   // Set data
    obj.putdata();   // Display data
    return 0;
}
