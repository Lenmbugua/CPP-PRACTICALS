#include <iostream>
using namespace std;

class Line {
public:
    int getLength(void);
    Line(int len);  // Constructor
    Line(const Line &obj); // Copy Constructor
    ~Line(); // Destructor

private:
    int *ptr;
};

// Normal constructor
Line::Line(int len) {
    cout << "Normal constructor allocating ptr" << endl;
    ptr = new int;  // Allocate memory
    *ptr = len;
}

// Copy constructor
Line::Line(const Line &obj) {
    cout << "Copy constructor allocating ptr" << endl;
    ptr = new int;  // Allocate new memory
    *ptr = *obj.ptr;  // Copy the value
}

// Destructor
Line::~Line() {
    cout << "Freeing memory!" << endl;
    delete ptr;
}

// Member function definition
int Line::getLength(void) {
    return *ptr;
}

// Function to display the length
void display(Line obj) {
    cout << "Length of line: " << obj.getLength() << endl;
}

// Main function
int main() {
    Line line(10);
    display(line);
    return 0;
}
