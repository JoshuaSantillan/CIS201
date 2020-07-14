#include "grade.h"
#include<iostream>
#include<string>
Grade::Grade(){

}

Grade::Grade(std::vector<int> gpa){
	for(int i = 0; i < gpa.size(); i++)
	{
		set_grade(gpa[i]);

	}
}


void Grade::print_grade(){
	std::cout << get_average();
	double grade = 0;
	std::string letter;
	if ( grade >= 90 ) {
		letter = "A";
	}
	else if ( get_average() >= 80 && get_average() <= 89.9){
		letter = "B";
	}
	else if ( grade >= 70 && grade <= 79.9){
		letter = "C";
	}
	else if ( grade >= 60 && grade <= 69.9){
		letter = "D";
	}
	else if ( grade < 59) {
		letter = "F";
	}
	
	std::cout << letter << std::endl;
}

void Grade::set_grade(int grade)
{
}
