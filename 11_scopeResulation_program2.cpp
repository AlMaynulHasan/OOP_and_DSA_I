#include<iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    book_info(string bookTitle, string bookAuthor, double bookPrice);

    string getTitle() ;
    string getAuthor() ;
    double getPrice() ;
    void display() ;
};

Book::book_info(string bookTitle, string bookAuthor, double bookPrice) {
    title = bookTitle;
    author = bookAuthor;
    price = bookPrice;
}

string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

double Book::getPrice()
{
    return price;
}

void Book::display()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: $" << price << endl;
}

int main()
{
  Book obj1, obj2;

    obj1.book_info("Paradoxical sajid", "Arif azad", 10.99);
    obj2.book_info("Teach youself","Mohonlal",20);

    cout << "Book 1 Details:" << endl;
    obj1.display();

    cout << "\nBook 2 Details:" << endl;
    obj2.display();

    return 0;
}

