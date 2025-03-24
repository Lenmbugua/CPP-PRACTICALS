//Create an object called "myObj" and access the attributes:
#include <iostream>
using namespace std;     //The class
class MyClass {          //Access specifier
    public:
       int myNum;       //Attribute (int variable)
       string myString;  //Attribute (string variable)
};
int main() {
    MyClass myobj;      //create ab object of MyClass

    //Access atrributes and set values
    myobj.myNum = 15;
    myobj.myString= "Some text";
    
    //print attribute values
    cout << myobj.myNum << endl;
    cout << myobj.myString << endl;
    return 0;
}