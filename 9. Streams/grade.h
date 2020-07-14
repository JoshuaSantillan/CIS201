/*
File: grade.h
Name: Joshua Santillan
Description: Grade Header File
Email: santj96@gmail.com
Date: Dec 2, 2018
*/
#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string>

class Grade
{
private:
std::string m_class_name, m_grade;
int m_stu_id;

public:
Grade();
Grade(int stu_id, std::string cname, std::string grade);
int get_student_id();
std::string get_grade();
std::string get_class_name();
};
#endif
