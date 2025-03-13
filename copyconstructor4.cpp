#include <iostream>
using namespace std;
class Myclass {
    private:
      int* data;     //pointer to integer
    public:
    //constructor: Dynamically allocate memory
    //and initialize with value 
    Myclass(int value) { data = new int(value); }
    //Deep copy constructor
    //Allocates new memory and copies the value
    Myclass(const Myclass& other) { data = new int(*other.data);}
    //Destructor to clean up memory
    ~Myclass() { delete data; }
    //Display the value
    void showdata() const { cout << "Data: " << *data <<endl; } 
};
int main() {
    Myclass obj1(42);        //create an object
    Myclass obj2 = obj1;     //use deep copy constructor
    obj1.showdata();         //Display data from obj1
    obj2.showdata();         //Display data from obj2
    return 0;
}