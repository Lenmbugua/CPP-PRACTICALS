#include <iostream>

using namespace std;

int main() {
    int systolic, diastolic;

    // User input
    cout << "Enter systolic (top) number in mm Hg: ";
    cin >> systolic;
    cout << "Enter diastolic (bottom) number in mm Hg: ";
    cin >> diastolic;

    // If-else ladder to determine blood pressure category
    if (systolic < 120 && diastolic < 80) {
        cout << "Normal blood pressure" << endl;
    } 
    else if (systolic >= 120 && systolic <= 129 && diastolic < 80) {
        cout << "Elevated blood pressure" << endl;
    } 
    else if ((systolic >= 130 && systolic <= 139) || (diastolic >= 80 && diastolic <= 89)) {
        cout << "Stage 1 high blood pressure (hypertension)" << endl;
    } 
    else if (systolic >= 140 || diastolic >= 90) {
        cout << "Stage 2 high blood pressure (hypertension)" << endl;
    } 
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}