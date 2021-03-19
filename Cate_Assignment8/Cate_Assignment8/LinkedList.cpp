#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
	headPtr = NULL;
	tailPtr = NULL;
}

void LinkedList::addLink(PersonNode *nodeToAdd) {
	if (headPtr == NULL) {
		headPtr = nodeToAdd;
	}
	else {
		headPtr->setNext(nodeToAdd);
	}
	getchar();
}

void LinkedList::createNode() {
	system("cls");
	cout << "~~~ CREATE NODE ~~~" << endl;
	PersonNode* node = new PersonNode();
	string first, last, phone, address;
	cout << "Enter first name: ";
	cin >> first;
	
	cout << "Enter last name: ";
	cin >> last;

	cout << "Enter phone number: ";
	cin >> phone;

	cout << "Enter address: ";
	cin >> address;
	
	node->setFName(first);
	node->setLName(last);
	node->setAddress(address);
	node->setPhone(phone);

	addLink(node);
}