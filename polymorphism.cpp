#include <iostream>
using namespace std;
//Base class
class Animal {
    public:
      void animalsound() {
        cout << "The animal makes a sound " << endl;
      }
};
//Derived class
class Pig : public Animal {
    public:
      void animalsound() {
        cout << "The pig says: wee wee" << endl;
      }
};
//Derived class
class Dog : public Animal {
    public:
      void animalsound() {
        cout << "The dog says: bow wow" << endl;
      }
};
int main () {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    
    myAnimal.animalsound();
    myPig.animalsound();
    myDog.animalsound();
    return 0;
}