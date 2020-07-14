/*
File: account.cpp
Name: Joshua Santillan
Description:  account class functions 
Email: santj96@gmail.com
Date: Nov 29, 2018
*/
#include<iostream>
#include<string>
#include<vector>
#include "account.h"
#include "ccc_empl.h"

account::account()
{
  
}
account::account(std::string name, double number, double amount)
{
   m_account_number = number;
   m_amount = amount;
   m_account_name = name;
}

std::string account::get_name()
{
   //acount name (last name)
   return m_account_name;
}
double account::get_account()
{
   
   return m_account_number;
}
void account::set_amount(double a)
{
   m_amount += a;
}
double account::get_amount()
{
  
   return m_amount;
}
