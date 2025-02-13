#include <iostream>
using namespace std;
int main()
{
    int sum = 0, val;
    cout << "Enter the number till which the sum has to be calculated: ";
    cin >> val;
    for (int i=1; i<=val; i++)
    {
        sum += i; //same as sum = sum + i
    }
    cout << "sum of 1 to "<< val <<" = " <<sum <<endl;
}