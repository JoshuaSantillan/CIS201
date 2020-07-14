/*
   File: main.cpp
   Description: 
   Author:
   Email:
*/
#include<iostream>

using namespace std;
#include "student.h"
#include "grade.h"

int main()
{
	Student Josh(100, "Josh");
	Grade Josh_grade;
	Josh.add_quiz(80);
	Josh.add_quiz(70);
        Josh.get_total_score();
	std::cout << Josh.get_average() << std::endl;
	 Josh_grade.print_grade();
	return 0;

}
