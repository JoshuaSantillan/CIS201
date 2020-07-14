/*
   File: main.cpp
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#include <iostream>
#include <string>
#include "student.h"
#include "grade.h"

int main()
{
	Student Billy;

	//Billy.add_quiz(45);
	//Billy.add_quiz(66);
	//Billy.add_quiz(75);
	//Billy.add_quiz(94);
	//std::cout << Billy.get_average_score() << '\n'; //This is exercise p5.9
	Billy.add_grade("A");
	Billy.add_grade("A");
	Billy.add_grade("C");
	std::cout << "Billy's GPA is: "; Billy.print_letter_gpa(); '\n';
	return 0;
}
