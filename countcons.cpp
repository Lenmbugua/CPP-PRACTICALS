#include <iostream>
using namespace std;
int main()
{
    int currval = 0, val = 0; //currval is the number we are counting ;we'll read new values into val
    if (cin >> currval) {    // read the first number and ensure that we have data to process.
        int cnt = 1; //store the count for the current value we're processing
        while (cin >> val) //read the remaining numbers
        if (val == currval) //if the values are the same
        ++cnt; //add 1 to cnt
        else { //otherwise print the count for the previouus value
            cout << currval << " occurs " << cnt << " times " << endl;
            currval = val; //remember the new value
            cnt = 1;

        }//while loop ends here
        //remember to print the count for the last value in the file
        cout << currval << " occurs " << cnt << " times " << endl;
    } //outermost if statement ends here
    return 0;
}