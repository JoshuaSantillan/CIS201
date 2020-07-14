/*
File: transactions.h
Description: Transaction class decleration
Email: santj96@gmail.com
Date: Nov 9, 2018
*/

#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
#include<iostream>
#include<vector>
#include<string>
#include "statement.h"
class Transactions
{
  int m_day;
  double m_transaction;
  std::string m_description;

public:
  Transactions();
  Transactions(int day, double transaction, std::string description);
  void read();
  int get_day();
  double get_transaction();
  std::string get_description();

};
#endif
