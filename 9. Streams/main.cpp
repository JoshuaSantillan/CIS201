/*
File: main.cpp
Name: Joshua Santillan
Description: Program that uses streams to get and print data from text files
Email: santj96@gmail.com
Date: Dec 2, 2018
*/
#include <iostream>
#include <fstream>
#include "course.h"
#include "grade.h"

int main()
{
   Course classes;
   int id = 1;

   std::cout << "Enter your Student ID. (The records only have 11234, 11254, 11324, or 21883): ";
   std::cin >> id;
   classes.create_classes();
   classes.create_report(id);
   return 0;
}
