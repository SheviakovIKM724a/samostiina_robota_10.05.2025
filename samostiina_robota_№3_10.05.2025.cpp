#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title, author, genre;
    int year;

public:
    Book(string t, string a, string g, int y) : title(t), author(a), genre(g), year(y) {}

    void printInfo() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nGenre: " << genre << "\nYear: " << year << endl;
    }
};

int main() {
    Book book("1984", "George Orwell", "Dystopian", 1949);
    book.printInfo();

    return 0;
}
