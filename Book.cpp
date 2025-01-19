#include "Book.h"

Book::Book() 
{

}

Book::Book(const string& author, const string& edition, const string& publicationDate, long isbn)
    : author(author), edition(edition), publicationDate(publicationDate), isbn(isbn) 
{

}

string Book::getAuthor() const 
{ 
    return author; 
}

string Book::getEdition() const 
{ 
    return edition; 
}

string Book::getPublicationDate() const 
{ 
    return publicationDate; 
}

long Book::getIsbn() const 
{
    return isbn; 
}

void Book::setAuthor(const string& author) 
{
    this->author = author; 
}

void Book::setEdition(const string& edition) 
{
    this->edition = edition; 
}

void Book::setPublicationDate(const string& publicationDate) 
{
    this->publicationDate = publicationDate; 
}

void Book::setIsbn(long isbn)
{
    this->isbn = isbn; 
}

void Book::printInfo() const 
{
    cout << "Book Info:\n"
        << "Author: " << author << "\n"
        << "Edition: " << edition << "\n"
        << "Publication Date: " << publicationDate << "\n"
        << "ISBN: " << isbn << "\n";
}
