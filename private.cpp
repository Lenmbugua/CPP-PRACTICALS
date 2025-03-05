#include <iostream>
using namespace std;
class Box {
    public:
    double length;
    void setWidth( double wid );
    double getWidth( void );

    private:
       double width;
};
//member function definitions
double Box::getWidth( void ){
    return width;
}
void Box::setWidth( double wid ){
    width = wid;
}
//main function of the program
int main(){
    Box box;
    //set box length withoout member function
    box.length = 10.0;      //ok:because length is public
    cout << "Length of Box: " << box.length << endl;
    //set box width without member function
    //box.width = 10;  error because width is  private 
    box.setWidth(10.0);       //use member function to set it
    cout << "Width of a box: " << box.getWidth() << endl;
}