#pragma once

#include "Account.h"

using namespace std;

class Administrator : public Account
{
	public:
		void registration();
		void deleteAccount();
		friend void readFileInformation();
		
};

