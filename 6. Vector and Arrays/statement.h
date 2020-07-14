/*
File: statement.h
Description: Statement class decleration
Email: santj96@gmail.com
Date: Nov 9, 2018
*/

#ifndef STATEMENT_H
#define STATEMENT_H
#include<iostream>
#include<vector>
#include<string>
#include "transactions.h"
class Statement
{
  const int MAX_DAY = 30;
  const double RATE = .005;
  std::vector<Transactions> transactions;
  std::vector<double> daily_balance;
  std::vector<double> compute_daily_balance;
  double m_balance;
  double m_min_balance;
  double m_average_balance;
  
public:
  Statement();
  void read();
  void print();
  double min_daily_balance(const std::vector<double> &v);
  double average_daily_balance(const std::vector<double> &v);
  std::vector<double> balance(std::vector<Transactions> &v); 
  double sum_total_for_day(int day);
};
#endif
