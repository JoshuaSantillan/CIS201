/*
   File: student.h
   Description: This is the student and grade class review.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 2/16/2019, 6:14:49 PM
 */
#ifndef STUDENT
#define STUDENT
#include <iostream>
#include <string>
#include <vector>
#include "grade.h"
class Student
{
private:
Grade student_grades;
int m_total_score, m_quizzes_taken_amount;
std::string m_name, m_grade;
std::vector<int> v;
std::vector<Grade> g;

public:
Student();
Student(std::string name, int score);
const std::string get_name();
void add_quiz(int score);
int get_total_score();
const int get_average_score();
void add_grade(std::string grade);
void print_letter_gpa();
};
#endif
