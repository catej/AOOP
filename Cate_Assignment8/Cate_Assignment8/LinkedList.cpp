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
	else if (headPtr->getNext() == NULL) {
		return headPtr;
	}
	else if (nodeToAdd->getLName() < headPtr->getLName()) 
	{
		return headPtr;
	}
	
	else {
		while (currentNode->getNext() != NULL)
		{
			previousNode = currentNode;
			currentNode = currentNode->getNext();

			if (currentNode->getNext() != NULL) {

				if (currentNode->getLName() < nodeToAdd->getLName() && 
					nodeToAdd->getLName() < currentNode->getNext()->getLName()) {
					return previousNode;
				}
				else if (currentNode->getLName() > nodeToAdd->getLName()) {
					return previousNode;
				}
			}
			else if (currentNode->getLName() < nodeToAdd->getLName()) {
				return currentNode;
			}
			else if (currentNode->getLName() > nodeToAdd->getLName()) {
				return previousNode;
			}
		}
	}
	
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
	else {
		if (insertSpot->getNext() != NULL) {
			nodeToAdd->setNext(insertSpot->getNext());
			insertSpot->setNext(nodeToAdd);
		}
		else {
			insertSpot->setNext(nodeToAdd);
		}
	}

}


void LinkedList::displayPersonNode(PersonNode *node) {
	cout << "Enter full name   : " << node->getFullName() << endl
		 << "Enter address     : " << node->getAddress() << endl
		 << "Enter phone number: " << node->getPhone() << endl << endl;
}

void LinkedList::displayList() {
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

void LinkedList::setHead(PersonNode* node) {
	headPtr = node;
}