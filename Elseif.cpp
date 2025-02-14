#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "Enter any number: ";
    cin >> num;
    if  (num > 10)
            {
                cout << "The number is greater than 10.";
            }
    else if (num <10)
            {
                cout << "The number is less than 10.";
            }
    else    {
                cout << "The number is equal to 10";
            }
    return 0;
       
}