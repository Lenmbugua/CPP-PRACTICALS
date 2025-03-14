#include <iostream>
#include <string>
using namespace std;
class Student {    
public:
Student(const string& name, int age) :name(name), age(age) {}
void display() const {
 cout << "Name: " << name << ",Age: " << age << endl;
}
   private:
   string name;
   int age;
};
int main() {
    Student s("Moses", 30);
    s.display();
    return 0;
}

