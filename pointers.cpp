#include <iostream>
using namespace std;
int main()
{
    int ival = 50;
    int *p = &ival;
    cout << "-----------------------------------------------" << endl;
    cout << "ival = " << ival << endl << "p = " << p << endl << "*p = " <<*p;
    *p=51;
    cout << endl << "--------------------------------------" << endl;
    cout << "New ival = " << ival << endl << "New p = " << p << endl << "New *p = " <<*p;
    ival = 52;
    cout << "-----------------------------------------------" << endl;
    cout << "New ival = " << ival << endl << "New p = " << p << endl << "New *p = " <<*p;
    cout << endl << "--------------------------------------" << endl;
    return 0;

}