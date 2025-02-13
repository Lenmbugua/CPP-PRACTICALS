#include <iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0, val;
    cout << "Enter the number till which the sum has to be calculated ";
    cin >> val;
    while (count <= val)
    {
        sum += count;/* code */
        count = count + 1;
    }
    cout << "Sum of 1 to " <<val << " = "<<sum <<endl;
    return 0;
}
