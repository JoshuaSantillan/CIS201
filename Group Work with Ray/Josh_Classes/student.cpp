#include "student.h"

Student::Student()
{
	m_name;
	m_score = 0;
	m_quizzes = 0;
}

Student::Student(double score, std::string name)
{
	m_name = name;
	m_quizzes= 1;
	v.push_back(score);
}

void Student::print_grade()
{

}

std::string Student::get_name()
{
	return m_name;
}

void Student::add_quiz(double score)
{
	

	v.push_back(score);
}

void Student::get_total_score()
{
	for(int i=0; i < v.size(); i++)
	{
		m_score += v[i];
	}

	std::cout << m_score << std::endl;
}


double Student::get_average()
{
	return m_score / v.size();
}


