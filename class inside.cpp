#include <iostream>
using namespace std;
class Myclass{
    public:
    void myMethod(){   //method/function defined inside a class
        cout << "Hello world!";

    }
};
int main(){
    Myclass myObj;        //create an object of Myclass
    myObj.myMethod();     //call the method
    return 0;
}