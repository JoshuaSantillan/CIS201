/*
File: ccc_emplh.h
Name: Joshua Santillan
Description: employee header file
Email: santj96@gmail.com
Date: Nov 29, 2018
*/

#ifndef CCC_EMPL_H
#define CCC_EMPLOYEE_H
#include "account.h"

#include <string>
#include <vector>


class employee
{
private:
   std::string m_lastname, m_firstname;
   double salary;
   account* acc;
   std::vector<employee> payroll;
public:
   employee();
   employee(std::string lastname, std::string firstname, double initial_salary);
   ~employee();
   void read();
   void create_accounts(std::vector<employee> &v);
   void set_salary(double new_salary);
   double get_salary() const;
   std::string get_firstname() const;
   std::string get_lastname() const;
   void set_account(account* a);
   account get_account();
   void deposit(std::vector<employee> &v);
   void print();

};

#endif
