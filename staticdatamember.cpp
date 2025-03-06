#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
          string title;      //Title of the book
          string author;     //Author of the book
          public:
          //static data member to track total number of books in the library
          static int totalbooks;

          //constructor to initialize the book's title and author
          Book(string bookTitle, string bookAuthor){
            title = bookTitle;
            author = bookAuthor;
            totalbooks++;
            //increament total books every time a new book is created
          }
          //static method to display the total number of books
          static void displayTotalBooks(){
            cout << "Total number of books in the library: "<< totalbooks << endl;
          }
          //static method to display information of the book
          void displayBookInfo(){
            cout << "Book Title: "<< title << ",Author: " << author << endl;
          }
};
//initialize the static data member outside the class
int Book::totalbooks = 0;

int main(){
    //creating book objects (Books beind added to the library)
    Book book1("Unplugged", "Jacob Aliet");
    Book book2 ("The let them theory", "Mel Robbins");
    Book book3("It ends with us", "Cooleen Hoover");

    //Display the total number of books using the static method
    Book::displayTotalBooks();

    //Displaying the details of each book
    book1.displayBookInfo();
    book2.displayBookInfo();
    book3.displayBookInfo();

    //Adding more books to the library
    Book book4("It starts with us", "Cooleen Hoover");
    Book book5("The Art of being Alone", "Renuka Garvani");

    //Display the updated total number of books
    Book::displayTotalBooks();

    //Displaying the information of the additional books that have been added
    book4.displayBookInfo();
    book5.displayBookInfo();
    return 0;
}