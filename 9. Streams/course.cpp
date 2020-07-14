/*
File: course.cpp
Name: Joshua Santillan
Description: Goes through text files and stores information in vectors then prints it
Email: santj96@gmail.com
Date: Dec 2, 2018
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
#include "course.h"
#include "grade.h"

//constructor
Course::Course()
{
}

Course::Course(std::string name, std::string coursename)
{
   m_filename = name;
   m_course_name = coursename;
}

//returns filename
std::string Course::get_filename() 
{
   return m_filename;
}
//returns the courses name from the file
std::string Course::get_course_name() 
{
   return m_course_name;
}
//opens up the class list inside the correct folder and  concatenates them together as well as pushing each line inside the file into the vector of classes.
void Course::create_classes() 
{
   std::ifstream courses("./files/classes.txt", std::ios::in);
   if (courses.is_open())
   {
      std::string folder = "./files/";
      std::string readlines;
      std::string txt = ".txt";
      while (std::getline(courses, readlines)) // while theres lines pushback
      {
         std::string filename = folder + readlines + txt;
         classes.push_back(Course(filename, readlines));
      }
      courses.close(); // closes the txt file 
   }
   else
   {
      std::cerr << "Unable to open a file\n"; // if file cannot open
   }
}
void Course::create_report(int &id) // Finds the Student ID and Grade using the instr method and pushes them back into a vector with their corresponding classes. 
{
   for (int i = 0; i < classes.size(); i++)
   {
      std::ifstream classtxt(classes[i].get_filename().c_str(), std::ios::in);
      if (classtxt.is_open())
      {
         std::string line;
         std::string class_name = classes[i].get_course_name();
         while (std::getline(classtxt, line))
         {
            std::istringstream instr(line);
            int class_id;
            std::string class_grade;
            instr >> class_id >> class_grade;
            if (id == class_id)
            {
               report.push_back(Grade(id, class_name, class_grade));
            }
         }
         classtxt.close();
      }
      else {
         std::cerr << "Unable to open here\n";
      }
   }
   print(report);
}
void Course::print(std::vector<Grade> &c) //Prints the student id as well as the grades they revieved in their classes. 
{
   std::cout << "Student ID: " << c[0].get_student_id() << '\n';
   for (int i = 0; i < c.size(); i++)
   {
      std::cout << std::left << std::setw(5) << c[i].get_class_name() << " " << c[i].get_grade() << '\n';
   }
   std::ofstream report("./files/report.txt", std::ios::out);
   if (report.is_open())
   {
   report << "Student ID: " << c[0].get_student_id() << std::endl;
      for (int i = 0; i < c.size(); i++)
      {
         report <<  c[i].get_class_name() << " " << std::right << std::setw(5) <<  c[i].get_grade() << std::endl;
      }
      report.close();
   }
    //  std::cout << classes.size(); // testing to make sure its 5
} 
