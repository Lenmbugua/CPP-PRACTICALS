#include <iostream>
using namespace std;
class printData {
    public:
       void print(int i) {
        cout << "Printing int: " << i << endl;
       }
       void print(double f) {
        cout << "Printing float:" << f << endl;
       }
       void print( const char* c) {
        cout << "Printing character: " << c << endl;
       }
};
int main() {
    printData pd;
    //call print to print the integer
    pd.print(5);
    //call print to print float
    pd.print(500.263);
    //call print to print character
    pd.print("Hello c++");
    return 0;
}