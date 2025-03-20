//To access a private attribute, use public "get" and "set" methods:
#include <iostream>
using namespace std;
class Employee {
    private:
       //private attribute
       int salary;
    public:
      //setter
      void setSalary(int s) {
        salary = s;
      }
      //Getter
      int getSalary() {
        return salary;
      }
};
int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;

}