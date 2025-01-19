#pragma once
#include "Book.h"
#include "Voice_recording.h"

class Talking_book : public Book, public Voice_recording {
private:
    int tapes; // кількість касет

public:
    Talking_book();
    Talking_book(const string& author, const string& edition, const string& publicationDate, long isbn, const string& speaker, int duration, const string& recordingDate, int tapes);

    int getTapes() const;
    void setTapes(int tapes);

    void printInfo() const;
};
