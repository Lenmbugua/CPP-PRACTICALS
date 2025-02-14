#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    cout << "Enter:" << endl << "1 - for coffee." << endl << "2 - for Tea." << endl;
    cin >> choice;
if (choice == 1)
        {
            cout << "Your coffee is on its way. Thankyou.";
        }
else if (choice == 2)
            {
                cout << "Your tea is on its way,Thankyou.";
            }
    else    {
        cout << "You have entered a wrong option.";
            }
    return 0;

}