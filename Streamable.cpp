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

#include "Streamable.h"
using namespace std;

namespace sdds
{
    ostream &operator<<(ostream &os, const Streamable &S)
    {
        return S.write(os);
    }
    istream &operator>>(istream &is, Streamable &S)
    {
        return S.read(is);
    }
}