#include <iostream>
using namespace std;
class Box{
    public:
         double length;     //Length of a box
         double breadth;    //Breadth of a box
         double height;    //height of a box

         //member functions declaration
         double getVolume(void);
         void setLength( double len );
         void setBreadth( double bre );
         void setHeight( double hei );
};
//member functions definitions
double Box::getVolume(void) {
    return length * breadth * height;
}
void Box::setLength( double len ) {
    length = len;
}
void Box::setBreadth( double bre ){
    breadth = bre;
}
void Box::setHeight( double hei ){
    height = hei;
}
//main function of the program
int main(){
    Box Box1;            //Declare Box1 of type Box
    Box Box2;            //Declare Box2 of the type Box
    double volume = 0.0;        //store the volume of the box here
    //Box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);
     //Box 2 specification
     Box2.setLength(12.0);
     Box2.setBreadth(13.0);
     Box2.setHeight(10.0);

    //Volume of the box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : "<< volume <<endl;
    //volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2: " << volume <<endl;
    return 0;    
}