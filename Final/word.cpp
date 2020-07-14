/*
File: word.cpp
Description: Final Project word.cpp which uses functional magic and adds a comma after multiple word occurance in new lines. 
Author: Joshua Santillan
Email: Santj96@gmail.com
Date created: 12/10/2018
*/

#include "word.h"
#include<iostream>
#include<string>

Word::Word(std::string  word)
{
   m_word = word;
   m_count = 1;

}

void Word::add_count(int line)
{
   m_count++;   
}

void Word::add_line(int line)
{
  for (int i = 0; i < m_line.size(); i++)
  {
    if (m_line [i] == line)
    return;
  }
     m_line.push_back(line);
}

std::string Word::get_word()
{
  return m_word;
}

int Word::get_count() const
{
  return m_count;
}

void Word::print() const
{
  // if there are more than one of the same word seperate them with commas with code below.
  for (int i = 0; i < m_line.size(); i++)
  {
    std::cout << m_line[i];
    if (i < m_line.size() - 1) 
    {
      std::cout << ",";
    }
  }
}

bool operator >(const Word &a, const Word &b)
{
    return (a.get_count() > b.get_count());
}

