/**
*    Author: Joshua Santillan
*    Description: Determining whether a string function is a valid number 
*    File: main.cpp
*    Date Created: 10/8/2018
**/

#include<iostream>
#include<string>
using namespace std;



bool is_printable(char c);
bool is_digit(char c);
int to_int(char c);
bool is_valid_number(string s);

int main()
{
   string s = "34987534095803498503948509348504395e3";
   if(is_valid_number(s))
   {
      cout << "yes it is valid" << endl;
   }
   else
   {
      cout << "no it is not valid" << endl;
   }
   return 0;
}


bool is_printable(char c)
{
    return (c >= ' ' && c <= '~');
}

bool is_digit(char c)
{
    return c >= '0' && c <= '9';
}
int to_int(char c)
{
    return c - '0';

}

/**
    Finds how long a string is and assigns it a numeric value,
    iterates through each placement of the string to determine if its an interger or not.
    @param uses string s as its string to pass 
    @return returns true all digits are found
    @return returns false IF there is no digit at the corresponding placement

*/
bool is_valid_number(string s)
{

 for (int i = 0; i < s.size(); i++)
   {
      if (!isdigit(s.at(i)))
      return false;
   }
   
   return true;
   

}

