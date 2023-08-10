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
#ifndef SDDS_LIBAPP_H
#define SDDS_LIBAPP_H
#include "Menu.h"
#include "Lib.h"
#include "Publication.h"
#include "Book.h"
#include "PublicationSelector.h"
namespace sdds
{
	class LibApp
	{
		bool m_changed = false;

		Menu *m_mainMenu;
		Menu *m_exitMenu;
		Menu *m_selectingMenu;

		char m_fileName[256]{};

		Publication *m_PPA[SDDS_LIBRARY_CAPACITY];
		int m_NOLP = 0;
		int m_LLRN = -1;

		bool confirm(const char *message);
		void load();
		void save();
		int search(int);
		void returnPub();
		void newPublication();
		void removePublication();
		void checkOutPub();

		Publication *getPub(int libRef);

	public:
		LibApp(const char *filename);
		void run();
		~LibApp();
	};
}
#endif
