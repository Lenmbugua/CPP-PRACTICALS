#include <iostream>
using namespace std;
class Ourclass {
    private:
     int y;
     public:
     void inputy(int value) {
        y = value;
     }
     void outputy () {
        cout << "value of y:" << y << endl;
     }
};
int main() {
    Ourclass Myobject;
    Myobject.inputy (10);
    Myobject.outputy ();
    return 0;
}