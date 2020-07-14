/*
File: grade.cpp
Name: Joshua Santillan
Description: grade class functions that gets and stores id and grades
Email: santj96@gmail.com
Date: Dec 2, 2018
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "grade.h"

Grade::Grade()
{

}
Grade::Grade(int stu_id, std::string cname, std::string grade)
{
   m_stu_id = stu_id;
   m_class_name = cname;
   m_grade = grade;
}
int Grade::get_student_id()
{
   return m_stu_id;
}
std::string Grade::get_grade()
{
   return m_grade;
}
std::string Grade::get_class_name()
{
   return m_class_name;
}
