#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
    ifstream inputFile("example.txt");  //open the file for reading
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
   string word;
   while (inputFile >> word) { //Reads until a whitespace is encountered
    cout << word << endl;
   }
   inputFile.close();    //close the file when done
   return 0;
}