#include <iostream>
using namespace std;
int main() {
    int creditscore;
    cout << "Enter the credit score of the applicant: " << endl;
    cin >> creditscore;
    switch (creditscore) {
        case 3:
        cout << "Amount: 15,000" << endl;
        case 2:
        cout << "Amount: 10,000" << endl;
        case 1:
        cout << "Amount: 0" <<endl;
        break;
        default:
        cout << "invalid credit score entered. " << endl;
    }
    return 0;
}