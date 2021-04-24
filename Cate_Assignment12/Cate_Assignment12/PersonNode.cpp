#include "PersonNode.h"

PersonNode::PersonNode() {
	address = "";
	fName = "";
	lName = "";
	PersonNode* next = NULL;
	phone = 0;
}

void PersonNode::setFName(string fName) {
	this->fName = fName;
}

void PersonNode::setLName(string lName) {
	this->lName = lName;
}

string PersonNode::getLName() {
	return lName;
}

string PersonNode::getFullName() {
	return fName + " " + lName;
}

void PersonNode::setPhone(string phone) {
	this->phone = stoi(phone);
}

int PersonNode::getPhone() {
	return phone;
}

void PersonNode::setAddress(string address) {
	this->address = address;
}

string PersonNode::getAddress() {
	return address;
}

void PersonNode::setNext(PersonNode* next) {
	this->next = next;
}

PersonNode* PersonNode::getNext() {
	return next;
}
