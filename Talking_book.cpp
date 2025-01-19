#include "Talking_book.h"

Talking_book::Talking_book() : Book(), Voice_recording(), tapes(0) 
{

}

Talking_book::Talking_book(const string& author, const string& edition, const string& publicationDate, long isbn, const string& speaker, int duration, const string& recordingDate, int tapes)
    : Book(author, edition, publicationDate, isbn), Voice_recording(speaker, duration, recordingDate), tapes(tapes) 
{

}

int Talking_book::getTapes() const 
{
    return tapes;
}

void Talking_book::setTapes(int tapes) 
{ 
    this->tapes = tapes; 
}


void Talking_book::printInfo() const 
{
    Book::printInfo();
    Voice_recording::printInfo();
    cout << "Tapes: " << tapes << "\n";
}
