#include <iostream>
using namespace std;
class car{
    public:
    int speed(int maxspeed);

};
int car::speed(int maxspeed){
    return maxspeed;
}
int main() {
    car Myobj;   //create an object of a car
    cout << Myobj.speed(200);       //call the method with an argument
    return 0;
}