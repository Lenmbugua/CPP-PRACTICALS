# include <iostream>
using namespace std;
int main()
{
    int ival = 1024;
    int &refval = ival;
    cout <<"ival = "<<ival <<endl <<"refval = " <<refval;
    refval = 1000;
    cout <<endl<<"New ival = " <<ival <<endl << "New refval = " <<refval;
    return 0;
}
