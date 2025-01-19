#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string edition;
    string publicationDate;
    long isbn;

public:
    Book();
    Book(const string& author, const string& edition, const string& publicationDate, long isbn);

    string getAuthor() const;
    string getEdition() const;
    string getPublicationDate() const;
    long getIsbn() const;

    void setAuthor(const string& author);
    void setEdition(const string& edition);
    void setPublicationDate(const string& publicationDate);
    void setIsbn(long isbn);

    void printInfo() const;
};
