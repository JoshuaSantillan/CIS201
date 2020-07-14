/*
File: word.h
Description: Final Project word.h which stores includes and function declartions with a little functional boolean magic
Author: Joshua Santillan
Email: Santj96@gmail.com
Date created: 12/10/2018
*/
#ifndef WORD_H
#define WORD_H
#include<vector>
#include<string>
#include<functional>
#include<iostream>


class Word
{
public:
   Word(std::string  word);
   void add_line(int line);
   void add_count(int count);
   std::string get_word();
   int get_count() const;
   void print() const;

private:
   int m_count;
   std::string m_word;
   std::vector<int> m_line;
};

#endif
bool operator >(const Word &a, const Word &b); // thanks Ray-o-Mond
