/*
   File: grade.h
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#ifndef GRADE
#define GRADE
#include <iostream>
#include <string>
#include <vector>
class Grade
{
private:
std::string m_letter_grade;
std::vector<Grade> v;

public:
Grade ();
Grade(std::string letter_grade);
std::string get_grade();
int gpa_conversion(std::vector<Grade> v);
};
#endif
