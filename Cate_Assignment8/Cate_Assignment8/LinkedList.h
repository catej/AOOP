#pragma once
#include "PersonNode.h"

class LinkedList
{
	private:
		PersonNode *headPtr;
		PersonNode *tailPtr;

	public:
		LinkedList();
		void addLink(PersonNode*, PersonNode*);
		PersonNode* findInsertSpot(PersonNode*);
		PersonNode* getHeadPtr();
		void displayList();
		void displayPersonNode(PersonNode*);
		void setHead(PersonNode*);
};

