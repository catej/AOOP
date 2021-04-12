#include "PalindromeChecker.h"
#include <iostream>

bool PalindromeChecker::isPalindrome(string input, int lower, int upper) {
	
	if (lower == upper){
		return true;
	}

	if (tolower(input[lower]) != tolower(input[upper])) {
		return false;
	}

	if (upper > lower) {
		lower++;
		upper--;
		return isPalindrome(input, lower, upper);
	}

	return true;

}

string PalindromeChecker::getString() {
	string test;
	cout << "input string: ";
	getline(cin, test);
	system("cls");
	return test;
}

void PalindromeChecker::menu() {
	int ans = 0;
	string ansS = "";
	while (ans != 2) {
		cout << "selection option below: " << endl << endl

			 << "1. Check String" << endl
			 << "2. Exit Program" << endl;

		getline(cin, ansS);
		ans = stoi(ansS);
		
		system("cls");

		if (ans == 1)
		{
			string testString = PalindromeChecker::getString();
			bool result = PalindromeChecker::isPalindrome(testString, 0, testString.length() - 1);
			cout << testString << (result ? " is a palindrome." : " is not a palindrome.") << endl << endl;
		}
		else if (ans != 2) {
			cout << "Invalid selection" << endl << endl;
		}
	}
}