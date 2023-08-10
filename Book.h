/*//////////////////////////////////////////////////////////////////////////
                            MS- 5
Full Name  :   Preet Chakrani
Student ID#:   113115224
Email      :   pchakrani@myseneca.ca
Section    :   NGG

Authenticity Declaration:

I declare ubmission is the result of my own work and has not been
shared with any other student or 3rd party content provider. sbmitted
piece of work is entirely of my own creation.
//////////////////////////////////////////////////////////////////////////*/

#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
#include "Publication.h"
using namespace std;
namespace sdds
{
    class Book : public Publication
    {
        char *m_author{};
        char type() const;

    public:
        Book() : Publication(){};
        virtual ~Book();

        Book &operator=(const Book &other);
        Book(const Book &other);

        istream &read(istream &is);
        ostream &write(ostream &os) const;

        void set(int Member_id);
        operator bool() const;
    };
}
#endif // !SDDS_BOOK_H