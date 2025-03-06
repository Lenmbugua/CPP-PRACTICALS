#include <iostream>
using namespace std;
class Box {
    public:
            static int objectCount;

            //constructor definition
            Box(double l = 2.0, double h = 2.0,double b = 2.0 ){
                cout << "Constructor called. " << endl;
                length = l;
                height = h;
                breadth = b;
                
                //increase every time an object is created
                objectCount++;
            }
            double Volume(){
                return length * breadth * height;
            }
            static int getCount(){
                return objectCount;
            }

            private:
                    double length;
                    double height;
                    double breadth;
};
//initialize static member of the class Box
int Box::objectCount = 0;

int main(void){
//print total number of objects before creating object.
cout << "Initial stage count: "<< Box::getCount() << endl;
Box Box1(3.3, 1.2, 1.5);         //Declare box1
Box Box2(8.5, 6.0, 2.0);

//print total number of objects after creating object.
cout << "Final stage count: " << Box::getCount() << endl;
return 0;
}