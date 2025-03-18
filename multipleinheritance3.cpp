// #include <iostream>
// using namespace std;
// class Base {
//     public:
//         void show() {
//             cout << "Base show" << endl;
//         }
// };
// class Derived1 : public Base {};
// class Derived2 : public Base {};

// class Final : public Derived1, public Derived2 {};

// int main () {
//     Final obj;
//     //obj.show(); //this will cause ambiquity
//     return 0;
// }


#include <iostream>
using namespace std;
class Base {
    public:
        void show() {
            cout << "Base show" << endl;
        }
};
class Derived1 : virtual public Base {};    //virtual inheritance
class Derived2 : virtual public Base {};    //virtual inheritance

class Final : public Derived1, public Derived2 {};

int main () {
    Final obj;
    obj.show();
    return 0;
}