#include <iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0;
    while (count <= 10)
    {
        sum += count; //same as, sum = sum + count
        count = count + 1;
    }
    cout << "Sum of 1 to 10 = " << sum <<endl;
}