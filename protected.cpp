#include <iostream>
using namespace std;
class Box {
    protected:
    double width ;
};
class Smallbox:Box {     //smallbox is the derived class
    public:
          void setSmallwidth (double wid);
          double getSmallwidth( void );
};
//member function of child class
double Smallbox::getSmallwidth(void){
    return width;
}
void Smallbox::setSmallwidth (  double wid ){
    width = wid;
}
//main function of the program
int main()
{
    Smallbox box;
    //set box width using member function
    box.setSmallwidth( 5.0 );
    cout << "Width of a box: " << box.getSmallwidth() << endl;
    return 0;
}