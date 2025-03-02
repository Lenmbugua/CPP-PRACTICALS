#include <iostream>
using namespace std;

class Cat {
public:
    void setAge(int age);
    int getAge();
    
    void setWeight(int weight);
    int getWeight();

private:
    int itsAge = 0;     // Initial values
    int itsWeight = 0;
};

// Implementation of member functions
void Cat::setAge(int age) {
    itsAge = age;
}

int Cat::getAge() {
    return itsAge;
}

void Cat::setWeight(int weight) {
    itsWeight = weight;
}

int Cat::getWeight() {
    return itsWeight;
}

int main() {
    Cat Felix;

    // Print initial values
    cout << "Initial status of Felix:" << endl;
    cout << "Age: " << Felix.getAge() << " years" << endl;
    cout << "Weight: " << Felix.getWeight() << " kg" << endl;

    // Get new values from user
    int newAge, newWeight;
    cout << "\nEnter new age for Felix: ";
    cin >> newAge;
    cout << "Enter new weight for Felix: ";
    cin >> newWeight;

    // Update values
    Felix.setAge(newAge);
    Felix.setWeight(newWeight);

    // Print updated values
    cout << "\nUpdated status of Felix:" << endl;
    cout << "Age: " << Felix.getAge() << " years" << endl;
    cout << "Weight: " << Felix.getWeight() << " kg" << endl;

    return 0;
}
