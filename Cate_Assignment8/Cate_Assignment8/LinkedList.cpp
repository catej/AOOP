#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
	headPtr = NULL;
	tailPtr = NULL;
}

PersonNode* LinkedList::findInsertSpot(PersonNode *nodeToAdd) {
	PersonNode *tempNode;
	PersonNode *previousNode;
	PersonNode *currentNode = headPtr;

	if (headPtr == NULL) {
		//headPtr = nodeToAdd;
		return headPtr;
	}
	else if (nodeToAdd->getLName() < headPtr->getLName()) {
		/*tempNode = headPtr;
		headPtr = nodeToAdd;
		headPtr->setNext(tempNode);*/
		return headPtr;
	}
	else if (headPtr->getNext() == NULL) {
		return headPtr;
	}
	else if (currentNode->getNext()){
		cout << "Something else";
		return headPtr;
	}
	
	/*
	1408  <- add next person then CONTINUE HERE
	
	else if (currentNode->getNext() == NULL) {
		if (currentNode->getLName() < nodeToAdd->getLName()) {
			currentNode->setNext(nodeToAdd);
		}
		else {
			tempNode = headPtr;
			headPtr = nodeToAdd;
			headPtr->setNext(tempNode);
		}
	}
	else {
		while (currentNode->getNext() != NULL)
		{
			previousNode = currentNode;
			currentNode = currentNode->getNext();

			if (currentNode->getNext() != NULL) {

				if (currentNode->getLName() < nodeToAdd->getLName() && 
					nodeToAdd->getLName() < currentNode->getNext()->getLName()) {

					nodeToAdd->setNext(currentNode->getNext());
					previousNode->setNext(currentNode);
					return;
				}
				else if (currentNode->getLName() > nodeToAdd->getLName()) {
					nodeToAdd->setNext(currentNode);
					previousNode->setNext(nodeToAdd);
					return;
				}
			}
			else if (currentNode->getLName() < nodeToAdd->getLName()) {
				currentNode->setNext(nodeToAdd);
				return;
			}
			else if (currentNode->getLName() > nodeToAdd->getLName()) {
				nodeToAdd->setNext(currentNode);
				previousNode->setNext(nodeToAdd);
			}
		}
	}*/
	
}
void LinkedList::addLink(PersonNode *nodeToAdd, PersonNode *insertSpot) {
	PersonNode* tempNode;
	PersonNode* previousNode;
	PersonNode* currentNode = headPtr;

	if (insertSpot == headPtr && 
		headPtr == NULL)
	{
		headPtr = nodeToAdd;
	}
	else if (insertSpot == headPtr && 
			 headPtr != NULL && 
			 nodeToAdd->getLName() < headPtr->getLName()
			) 
	{
		tempNode = headPtr;
		headPtr = nodeToAdd;
		headPtr->setNext(tempNode);
	}
	else if (insertSpot == headPtr &&
			 headPtr != NULL &&
		     headPtr->getNext() != NULL &&
			 nodeToAdd->getLName() > headPtr->getLName()
			) 
	{
		nodeToAdd->setNext(headPtr->getNext());
		headPtr->setNext(nodeToAdd);
	}

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

	PersonNode* insertSpot(node);
	addLink(node, insertSpot);
}

void LinkedList::displayPersonNode(PersonNode *node) {
	cout << "Enter full name   : " << node->getFullName() << endl
		 << "Enter address     : " << node->getAddress() << endl
		 << "Enter phone number: " << node->getPhone() << endl << endl;

}

void LinkedList::displayList() {
	system("cls");
	PersonNode* cur = headPtr;

	cout << "      Contacts     \n"
		 << "~~~~~~~~~~~~~~~~~~~\n";
	
	while (cur != NULL)
	{
		displayPersonNode(cur);
		cur = cur->getNext();
	}
}

PersonNode* LinkedList::getHeadPtr() {
	return headPtr;
}

