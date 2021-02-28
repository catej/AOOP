#include "Die.h"
#include <iostream>

Die::Die() {
	Die::roll();
}
void Die::roll() {
	dieValue = rand() % 6 + 1;
}

int Die::getValue() {
	return dieValue;
}

