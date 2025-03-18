#include <iostream>
using namespace std;
class Base1 {
    public:
         void show() {
            cout << "Base1 show" << endl;
         }
};
class Base2 {
    public:
    void show() {
        cout << "Base2 show" << endl;
    }
};
class Derived : public Base1, public Base2 {
    public:
      void show() {
        //Ambiguity occurs here because both Base1 and Base2 have a show() method
        Base1::show();     //Explicitly calls Bases1's show
        Base2::show();     //Explicitly calls Bases2's show
      }
};
int main() {
    Derived obj;
    obj.show();               //calls derived show() method,which resolves ambiguity
    return 0;
}