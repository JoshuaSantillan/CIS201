/*
File: main.cpp
Description: Final Project main.cpp which pulls from concordance.cpp file including the parse and print function to print all of my hard work, sweat, and tears onto the screen.
Author: Joshua Santillan
Email: Santj96@gmail.com
Date created: 12/10/2018
*/

#include "concordance.h"


int main()
{
   Concordance con("alice.txt");
   con.parse();   
   con.print();

   return 0;
}
