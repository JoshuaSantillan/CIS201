/*
File: ccc_empl.cpp
Name: Joshua Santillan
Description:  Employee class functions stores information and uses vectors and pointers 
Email: santj96@gmail.com
Date: Nov 29, 2018
*/
#include<string>
#include<vector>
#include "ccc_empl.h"
#include "account.h"

employee::employee()
{

}

employee::employee(std::string lastname, std::string firstname, double initial_salary)
{
   m_lastname = lastname;
   m_firstname = firstname;
   salary = initial_salary;
   acc = NULL;
}
void employee::read()
{
   payroll.push_back(employee("Smith", "Jane", 35000));
   payroll.push_back(employee("Smith","John", 20000));
   payroll.push_back(employee("Hacker", "Harry", 7000000));
   payroll.push_back(employee("Tester", "Ted", 30000));
   create_accounts(payroll);
}
void employee::create_accounts(std::vector<employee> &v)
{
   for (int i = 0; i < v.size(); i++)
   {
      account *accnt = new account("Checking", 1, 0);
      v[i].set_account(accnt);
   }
   for (int i = 1; i < v.size(); i++)
   {
      // if consesutive last names then share
      if(payroll[i - 1].get_lastname() == payroll[i].get_lastname()) 
     {
        account *acc = new account("Checking", 1, 0);
        payroll[i - 1].set_account(acc);
        payroll[i].set_account(acc);
     }
   }
   deposit(v);
}
void employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double employee::get_salary() const
{
   return salary;
}

std::string employee::get_lastname() const
{
   return m_lastname;
}
std::string employee::get_firstname() const
{
   return m_firstname;
}
void employee::set_account(account* a)
{
   acc = a;

}
account employee::get_account()
{
  return *acc;
}
void employee::deposit(std::vector<employee> &v)
{
   double bonus = 0;
   for (int i = 0; i < v.size(); i++)
   {
      bonus = (v[i].get_salary() / 12.0);
      v[i].acc->set_amount(bonus);
   }
  
}
//iterating through the vector to print account information
void employee::print()
{
   for (int i = 0; i < payroll.size(); i++)
   {
      std::cout << "Name: " << payroll[i].get_lastname() << ", " << payroll[i].get_firstname() << std::endl;
      std::cout << "Available Amount: ";
      if (payroll[i].acc == NULL)
         std::cout << "No Account";
      else
         std::cout << payroll[i].get_account().get_amount() << std::endl; 
    }
   
}


employee::~employee()
{
    return 0;
}
