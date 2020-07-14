#ifndef GRADE_H
#define GRADE_H
#include<string>
#include<vector>
#include "student.h"

class Grade: public Student
{
	public:
	Grade();
	Grade(std::vector<int> gpa);
	void set_grade(int grade);
	void set_grade(std::string grade);
	void set_gpa();
	void get_gpa();
	void print_grade();
	private:
	std::vector<std::string> m_grade;
	std::vector<double> m_gpa;
	
};

// if grade == A- || A || A+ then GPA = 4.0//

#endif
