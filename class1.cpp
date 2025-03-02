#include<iostream>
using namespace std;
class cat 
{
    public:
            int itsAge;
            int itsWeight;
};
int main()
{
    cat frisky;
    frisky.itsAge = 5;  //Assign to the member variable
    cout << "Frisky is a cat who is ";
    cout << frisky.itsAge << " years old" << endl;
    return 0;
}