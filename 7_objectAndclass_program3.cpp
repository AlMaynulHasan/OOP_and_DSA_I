#include<iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    void set(string bookTitle, string bookAuthor, double bookPrice);
    string getTitle() ;
    string getAuthor() ;
    double getPrice() ;
    void display() ;
};

void Book::set(string bookTitle, string bookAuthor, double bookPrice)
{
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

    obj1.set("Fundamentals of E. Circuit", "Alexgendal Sadiku", 10.99);
    obj2.set("English SOS", "Maynul", 8.99);

    cout << "Book 1 Details:" << endl;
    obj1.display();

    cout << "\nBook 2 Details:" << endl;
    obj2.display();

    return 0;
}

