#include <iostream>
#include "PalindromeChecker.h"

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 11 - Palindromes
*/

using namespace std;

int main()
{
    bool result = PalindromeChecker::isPalindrome("dad", 0, 2);
    bool result = PalindromeChecker::isPalindrome("mom", 0, 2);
    bool result = PalindromeChecker::isPalindrome("radar", 0, 2);
    bool result = PalindromeChecker::isPalindrome("Madam", 0, 2);
    bool result = PalindromeChecker::isPalindrome("1234321", 0, 2);
    cout << result;

    char end = getchar();
}