#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value = 0;
    //read until end of file,calculating a running total of all values read
    while ( cin >> value)
    sum += value; //same as sum = sum + value
    cout << "sum = " << sum << endl;    
}