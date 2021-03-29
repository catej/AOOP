#pragma once
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Contact
{
	private:
		char firstName[20];
		char fullName [40];
		char lastName [20];
		char phone [14];

	public:
		Contact();
		char* getFullName();
		char* getFirstName();
		char* getLastName();
		char* getPhone();
		void setFirstName(string);
		void setFullName(string);
		void setLastName(string);
		void setPhone(string);

};

