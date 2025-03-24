//Here’s the given example for Reading Binary Files (using read()) −
#include <iostream>
#include <fstream>
using namespace std;
int main () {
ifstream file("example.bin, ios::binary");
//check if the file was succesfully opened
if(!file) {
    cerr << "Error opening file!" << endl;
    return 1;
}
//Get the length of the file
file.seekg(0, ios::end);
streamsize size = file.tellg();
file.seekg(0, ios::beg);

//Read the entire file into a buffer
char* buffer = new char[size];
file.read(buffer,size);

//print raw data (optimal, for demonstration)
for (streamsize i = 0; i < size; ++i) {
    cout << hex << ( 0xFF & buffer[i]) << " ";   //print byte in hex
}
delete[] buffer;
file.close();
return 0;
}