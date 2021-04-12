#include "PalindromeChecker.h"
#include <iostream>

bool PalindromeChecker::isPalindrome(string input, int lower, int upper) {
	
	if (lower == upper){
		return true;
	}

	if (input[lower] != input[upper]) {
		return false;
	}

	if (upper > lower) {
		lower++;
		upper--;
		return isPalindrome(input, lower, upper);
	}

	return true;

}