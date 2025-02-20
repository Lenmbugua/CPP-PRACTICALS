#include <iostream>
using namespace std;

// Function prototype
int another_func();

int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
    {
        sum = sum + val;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    another_func();
    return 0;
}

int another_func()
{
    cout << "This is another function outside main" << endl;
    return 0;
}
