#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include<vector>
class Student
{
	public:
	 Student();
	 Student(double m_score, std::string name);
	 void print_grade();
	 std::string get_name();
	 void add_quiz(double score);
	 void get_total_score();
	 double get_average();
	private:
	 double m_score, m_quizzes, m_score_total;
	 std::string m_name, m_grade;
	 std::vector<double> v;
};

#endif
