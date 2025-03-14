#include <iostream>
#include <string>
using namespace std;
class Student {
    public:

    //primary constructor
    Student( const string& name, int age, double grade)
    : name(name), age(age), grade(grade) {}
    //Delegating constructor with default grade
    Student(const string& name, int age)
    : Student(name, age, 0.0) {}
    //delegating constructor with default age and grade
    Student( const string& name )
    : Student(name, 18, 0.0 ){}
    void display() const {
        cout << "Name: " << name << ", Age " << age <<",Grade " << grade << endl;
    }
    private:
      string name;
      int age;
      double grade;
};
int main() {
    Student s1("Njeri", 20,90.5);
    Student s2("Hellen", 24);
    Student s3("Mbugua");

    s1.display();
    s2.display();
    s3.display();
    return 0;
}