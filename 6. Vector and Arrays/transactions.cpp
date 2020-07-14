#include<iostream>
#include<vector>
#include<string>
#include "statement.h"
#include "transactions.h"

Transactions::Transactions() // Constructor
{
   m_day = 0;
   m_transaction = 0.0;
   m_description = " ";
}

//Constructor w/ Params
Transactions::Transactions(int day, double transaction, std::string description) 
{
   m_day = day;
   m_transaction = transaction;
   m_description = description;
}

// Reads Data for the day, transaction total, and the description of the transcation
void Transactions::read() 
{
   std::cout << "Day: ";
   std::cin >> m_day;
   std::cout << "Transaction Amount: ";
   std::cin >> m_transaction;
   std::cin.ignore();
   std::cout << "Description of transaction: ";
   std::getline(std::cin, m_description);
}
// returns day
int Transactions::get_day() 
{
   return m_day;
}
// Returns transaction # 
double Transactions::get_transaction() 
{
   return m_transaction;
}
// Returns transaction description
std::string Transactions::get_description() 
{
   return m_description;
}

