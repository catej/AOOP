#pragma once
#include "PersonNode.h"

class LinkedList
{
	private:
		PersonNode* headPtr;
		PersonNode* tailPtr;

	public:
		LinkedList();
		void addLink();
		void findInsertSpot();
		void getHeadPtr();
		void displayList();
		void displayPersonNode();

};

