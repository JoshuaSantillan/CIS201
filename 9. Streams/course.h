/*
File: course.h
Name: Joshua Santillan
Description: course header file
Email: santj96@gmail.com
Date: Dec 2, 2018
*/
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
#include "grade.h"

class Course
{
private:
std::vector<Grade> report;
std::vector<Course> classes;
std::string m_filename, m_course_name;

public:
Course();
Course(std::string name, std::string classname);
void create_classes();
void create_report(int& id);
void print(std::vector<Grade> &c);
std::string get_filename();
std::string get_course_name();
};
#endif 
