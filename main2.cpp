#include <iostream>
#include "Talking_book.h"

int main() {
    Book book("J.K. Rowling", "1st Edition", "26.06.1997", 9780747532743);
    book.printInfo();
    cout << "----------------------\n";

    Voice_recording recording("Jim Dale", 435, "01.09.2004");
    recording.printInfo();
    cout << "----------------------\n";

    Talking_book talkingBook("J.K. Rowling", "1st Edition", "26.06.1997", 9780747532743, "Jim Dale", 435, "01.09.2004", 7);
    talkingBook.printInfo();
    cout << "----------------------\n";

    return 0;
}
