/*
File: statement.cpp
Description: Statementclass functin that uses vectors to push back user read infromation which are numers and used math equations to solve problems
Email: santj96@gmail.com
Date: Nov 9, 2018
*/
#include<iostream>
#include<vector>
#include<string>
#include "statement.h"
#include "transactions.h"

// statement class functions

//constructor
Statement::Statement() 
{

}

// creates the assumed initial balance and reads additional data calling the transactions class storing info a vector
void Statement::read() 
{

   Transactions initial(1, 1143.24, "Initial Balance");
   transactions.push_back(initial);
   bool more = true;
   while (more)
   {
      Transactions t;
      t.read();
      transactions.push_back(t);
      std::cout << "Enter another (Y/N)";
      char response;
      std::cin >> response;
      if (response != 'y' && response != 'Y')
      {
         more = false;
      }
   }

   balance(transactions);
}
//finds the balance for each day and uses pushback to store it
  std::vector<double> Statement::balance(std::vector<Transactions> &v)
{
 // std::vector<double> daily_balance;
     m_balance = 0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      m_balance += sum_total_for_day(i + 1); //v[i] is the same as v.at(i)
   
      daily_balance.push_back(m_balance);
      
   }
   return daily_balance;
}

double Statement::sum_total_for_day(int day)
{
  double total = 0;
  for (int i = 0; i<transactions.size(); i++)
    {
      if (day == transactions[i].get_day())
        {
          total = total + transactions[i].get_transaction();
        }

    }
  return total;
}
// prints statement with the data from transaction classes and the balance
void Statement::print() 
{
   int index = 0;
 
   std::cout << "---STATEMENT---" << std::endl;
   for (int i = 0; i < MAX_DAY; i++)
   {
      while (i+1 == transactions[index].get_day())
      // nested loop to get days
      {
         std::cout << "---------------" << std::endl;
         std::cout << "Day: " << transactions[index].get_day() << std::endl;
         std::cout << "Transaction: " << transactions[index].get_transaction() << std::endl;
         std::cout << "Description: " << transactions[index].get_description() << std::endl;
         std::cout << "---------------" << std::endl;
         index++;
       }
 
    //   std::cout << "Day: " << transactions[i].get_day() << std::endl;
    
       std::cout<< "Balance on day " << i+1 << ": " << daily_balance[i] << std::endl;
       std::cout << "---------------" << std::endl;
   }
    

   std::cout << "Minimum interest: " << min_daily_balance(daily_balance) << std::endl;
   std::cout << "Montly Interest: " << average_daily_balance(daily_balance) << std::endl; 
     
   
   
   
 
}

  

double Statement::min_daily_balance(const std::vector<double> &v) // The lowest monthly interest
{
      double m_min_balance = v[0]; 

   for (int i = 0; i < MAX_DAY; i++)
   {
      if (v[i] < m_min_balance )
        {
         m_min_balance = v[i];
          // if min balance is greater than v at i then its new minumum balance
       }
   }
   return m_min_balance * RATE;
}

double Statement::average_daily_balance(const std::vector<double> &v) // balance divided by 30 (max days) to find the average interest of the month
{
   double sum = 0.0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      sum += v[i];
   // Iterate through the daily ammount to test to see if its work
 //  std::cout << v[i] << "\n" << '\t';
   }
    // adds vector up divides it by the month and then multilies it by the interest
   return (sum / MAX_DAY) * RATE;

}
