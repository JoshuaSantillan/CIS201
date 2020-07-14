/**
Description: Gets a string and character from user, using a for loop detects how many time the character was used in the string.
Filename: main.cpp
Author: Joshua Santillan
email: santj96@gmail.com
Date: 10/20/18
*/

#include<iostream>
#include<string>
using namespace std;


string get_string(string prompt);
int char_count(string, char );
char get_char (string prompt);
int main()
{
    string sentance = get_string("Enter a Sentance about anything and everything: ");
    char c = get_char("Enter a character: ");
  
    cout << "The character you picked is: " << "\"" << c << "\"" << endl;
    cout << "That character appeared " << char_count(sentance, c) << " time(s)"; 

   return 0;
}

/*
Prompts user to enter a string value that is then stored and used later for iteration.
@param  prompts user to enter a string value
@return using getline value returns a full string including spaces
*/
string get_string(string prompt)
{
    string value;
    cout << prompt;
    getline(cin,value);    
    return value;
}

/*
Prompts user to enter a character to search for in the string they are also entering. 
@param  prompts user to enter a string value 
@return c returns the value they entered from the prompt
*/
char get_char (string prompt)
{
  char c;
  cout << prompt;
  cin >> c;
  return c;
}

/*
Counts how many times character c was used in a sentance
@param uses string sentance for length and character c with a for loop to see how many times it is found.
@return Count returns the value of times character c was found
*/
int char_count(string sentance, char c)
{
  int count = 0;
  for (int i = 0; i < sentance.size();i++)
  {
    char character = sentance.at(i);    
      if (character == c)
      {
        count ++;
      }       
  }
  return count;
}
