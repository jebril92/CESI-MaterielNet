#ifndef __STAFFMANAGEMENT__H
#define __STAFFMANAGEMENT__H

#include <Sqlext.h>
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace NS_Composants
{
	ref class StaffManagement
	{
	private:
		int salarieId;
		String^ nentreprise;
	public:
		StaffManagement(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setSalarieID(int);
		void setNEntreprise(String^);
		int getSalarieID(void);
		String^ getNEntreprise(void);
	};
}


#endif