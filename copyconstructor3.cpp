#include <iostream>
using namespace std;
class Myclass {
    private:
    int* data;     //pointer to integer
    public:
    //constructor
    Myclass(int value) {
        data = new int(value);    //allocate memory
    }
    //shallow copy constructor
    Myclass(const Myclass& other) {
        data = other.data; //copy pointer only
    }
    //Destructor
    ~Myclass() {
        delete data;   //free memory
    }
    //display the value
    void showData() const { cout << "Data: " << *data <<endl;}
};
//main program
int main() {
    Myclass obj1(42);         //create an object
    Myclass obj2 = obj1;      //use shallow copy constructor
    obj1.showData();
    obj2.showData();
    return 0;
}