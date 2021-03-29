#include "Contact.h"

Contact::Contact() {

}

void Contact::setFirstName(string firstName) {
	strcpy(this->firstName, firstName.c_str());
}

char* Contact::getFirstName(){
	return firstName;
}

void Contact::setFullName(string fullName) {
	strcpy(this->fullName, fullName.c_str());
}

char* Contact::getFullName() {
	return fullName;
}

void Contact::setLastName(string lastName) {
	strcpy(this->lastName, lastName.c_str());
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
