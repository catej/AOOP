#include "Contact.h"
#pragma warning(disable : 4996)

Contact::Contact() {
}

void Contact::setFirstName(string firstName) {
	strcpy_s(this->firstName, firstName.c_str());
}

char* Contact::getFirstName(){
	return firstName;
}

void Contact::setFullName(string fullName) {
}

char* Contact::getFullName() {
	return fullName;
}

void Contact::setLastName(string lastName) {
	strcpy_s(this->lastName, lastName.c_str());
}

char* Contact::getLastName() {
	return lastName;
}
void Contact::setPhone(string phone) {
	strcpy(this->phone, phone.c_str());
}

char* Contact::getPhone() {
	return phone;
}
