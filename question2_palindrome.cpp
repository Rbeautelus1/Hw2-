/*2.	2.	Write a program that find if a given string is a Palindrome 
or not. A  palindrome is a word, number, phrase, or other sequence of 
characters which reads the same backward as forward. For example, the 
given words are radar, level, rotor, kayak palindromes. Your program 
will return, for example “Yes, the radar is a palindrome” or “No, 
the word house is not a palindrome”. (10 pts) */

#include <iostream>
#include <algorithm>
using namespace std;


string isPalindrome(string test1)
{
	string  test2 = test1;


	reverse(test2.begin(), test2.end());

	
	if (test1 == test2) {
		
		return "Yes";
	}
	
	else {
		
		return "No";
	}
}


int main()
{
	string test1 = "RADAR";
	cout <<  isPalindrome(test1) << endl;

	return 0;
}