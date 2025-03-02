#include <iostream>
using namespace std;
class cat 
{
    public:  void setAge (int age);
             int GetAge();
             void setWeight (int weight);
             int Getweight();
    private: int itsAge();
             int itsWeight();
};
int cat::GetAge()
{
    return itsAge;
}
void cat::setAge(int age)
{
    itsAge = age;
}
