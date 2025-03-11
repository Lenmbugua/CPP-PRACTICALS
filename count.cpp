#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double initialBalance, interestRate, finalBalance;
    int years;

    // Input: Initial Balance
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Input: Interest Rate
    cout << "Enter interest rate (%): ";
    cin >> interestRate;

    // Input: Number of Years
    cout << "Enter number of years: ";
    cin >> years;

    // Initialize finalBalance with initialBalance
    finalBalance = initialBalance;

    // Output: Table Header
    cout << "Year\tAccount Balance" << endl;

    // Calculate and display balance for each year
    for (int i = 1; i <= years; i++) {
        finalBalance += finalBalance * (interestRate / 100); // Compound interest formula
        cout << i << "\t" << fixed << setprecision(2) << finalBalance << endl;
    }

    // Output: Final Balance
    cout << "Final Balance: " << fixed << setprecision(2) << finalBalance << endl;

    return 0;
}