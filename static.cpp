#include <iostream>
using namespace std;
class Box {
    public:
         static int ObjectCount;
         //constructor definition
         Box(double l = 2.0, double b = 2.0, double h = 2.0 ){
            cout << "Constructor called."<<endl;
            length = l;
            breadth = b;
            height = h;
            //increase everytime object is created 
            ObjectCount++;
         }
         private:
                double length; //Length of a box
                double breadth; //breadth of a box
                double height;   //height of a box
};
//initialize static member of a class
int Box::ObjectCount = 0;

int main(void) {
    Box Box1( 3.3, 1.2, 1.5 );    //Declare Box1
    Box Box2( 8.5,6.0,2.0 );      //Declare Box2
    //print total number of objects
    cout << "Total objects: " << Box::ObjectCount << endl;
    return 0;
}