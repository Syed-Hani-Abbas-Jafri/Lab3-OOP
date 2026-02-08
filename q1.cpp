#include <iostream>
using namespace std;

class Book {
public:
    string author;
    string title;
    float price;

    Book() {
        title = "Unknown";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book& b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    Book(string t) {
        title = t;
        author = "Unknown";
        price = 0.0;
    }

    void dis() {
        cout << "Title: " << title
             << " | Author: " << author
             << " | Price: " << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("Naruto", "Kishimoto", 15.5);
    Book b3(b2);
    Book b4("Naruto");

    b1.dis();
    b2.dis();
    b3.dis();
    b4.dis();

    return 0;
}
