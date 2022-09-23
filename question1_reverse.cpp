/*1.	1.	Write a program that reverse the given words in a string 
array. Your program must return a new string array with the reverse 
words and print the new string. For example, if one the word in your 
array is car, then your new array will contain the word rac. (10 pts) */

// Inlcude all needed packages
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
 

 
// Driver program
int main()
{
    string words[6] = {"object","oriented","programming","sciences","dedication","commitment"};
 

    cout << "The original word is: " ;
    for(int i = 0; i < 6; i++){
      cout << words[i] << " ";
      
    }
  cout << "The reverse words is: ";
  for (int x = 6 ; x >=0; x--){
      cout <<  words[x];

      }
      

}
