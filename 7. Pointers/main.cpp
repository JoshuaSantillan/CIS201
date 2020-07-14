/*
File: main.cpp
Name: Joshua Santillan
Description: Main file for compilation
Email: santj96@gmail.com
Date: Nov 29, 2018
*/
#include<iostream>
#include<string>
#include<vector>
#include "ccc_empl.h"
#include "account.h"

int main()
{
   employee empls;
   empls.read();   
   empls.print(); 
   std::cin.get();
//   empls.~employee();
      
   return 0;
}
