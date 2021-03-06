#pragma once
#include <string>

using namespace std;

class PersonNode
{
	private:
		string address;
		string fName;
		string lName;
		PersonNode* next;
		string phone;

	public:
		PersonNode();
		void setAddress(string);
		string getAddress();
		void setFName(string);
		void setLName(string);
		string getLName();
		string getFullName();
		void setNext(PersonNode*);
		void setPhone(string);
		string getPhone();
		PersonNode* getNext();
};

