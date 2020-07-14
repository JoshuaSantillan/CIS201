/*
   File: student.cpp
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#include <string>
#include <iostream>
#include "student.h"
#include "grade.h"
Student::Student()
{
	m_name;
	m_total_score = 0;
	m_quizzes_taken_amount = 0;
}
Student::Student(std::string name, int score)
{
	m_name = name;
	int m_score = score;
	v.push_back(m_score);
}
const std::string Student::get_name()
{
	return m_name;
}
void Student::add_quiz(int score)
{
	int m_score = score;

	v.push_back(m_score);
}
int Student::get_total_score()
{
	for (size_t i = 0; i < v.size(); i++) {
		m_total_score += v[i];
	}
	return m_total_score;
}
const int Student::get_average_score()
{
	return (get_total_score() / v.size());
}
void Student::add_grade(std::string grade)
{
  m_grade = grade;
  Grade temp(m_grade);
	g.push_back(temp);
}
void Student::print_letter_gpa()
{
	std::cout << student_grades.gpa_conversion(g) << '\n';
}
