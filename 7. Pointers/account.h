/*
File: account.h
Name: Joshua Santillan
Description: account header file
Email: santj96@gmail.com
Date: Nov 29, 2018
*/
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<vector>
#include<iostream>

class account
{
private:
    std::vector<account> accounts;
    double m_account_number, m_amount;
    std::string m_account_name;
public:
    account();
    account(std::string name, double a_number, double a_amount);
    std::string get_name();
    double get_account();
    double get_amount();
    void set_amount(double a);
    };
#endif
