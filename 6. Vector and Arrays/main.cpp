/*
File: main.cpp
Description: Main file for compilation
Email: santj96@gmail.com
Date: Nov 9, 2018
*/

#include <iostream>
#include "statement.h"
#include "transactions.h"

int main()
{
   Statement bank_statement;

   bank_statement.read();
   bank_statement.print();
   return 0;
}
