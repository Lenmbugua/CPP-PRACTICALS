#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
    {
        sum = sum + val;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}