/*
   File: grade.cpp
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#include "grade.h"
Grade::Grade ()
{
	m_letter_grade;
}
Grade::Grade(std::string letter_grade)
{
	m_letter_grade = letter_grade;
}
std::string Grade::get_grade()
{
	return m_letter_grade;
}
int Grade::gpa_conversion(std::vector<Grade> v) // Trouble is here
{
  int m_GPA = 0;
	for (size_t i = 0; i < v.size(); i++)
  {
		if (v[i].get_grade() == "A") {
			m_GPA += 4;
		} else if (v[i].get_grade() == "B") {
			m_GPA += 3;
		} else if (v[i].get_grade() == "C") {
			m_GPA += 2;
		} else if (v[i].get_grade() == "D") {
			m_GPA += 1;
		} else if (v[i].get_grade() == "F") {
			m_GPA += 0;
		}
	}
  	return m_GPA / v.size();
}
