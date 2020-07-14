/*
File: concordance.h
Description: Final Project concordance.h. this is where the conordance class sleeps. Declration functions and includes are lsited below. He's been through a lot of editing and half the things in this file were not used afterall, sadly. He's very timid and shy, do not wake.
Author: Joshua Santillan
Email: Santj96@gmail.com
Date created: 12/10/2018
*/

#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include "word.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

class Concordance
{
public:
    Concordance(std::string filename);
    void parse();
    void add_word(std::string word, int find);
    int find_word(std::string word);
    std::string next_word(std::ifstream &input);
    bool is_whitespace(char c);
    void eat_whitespace(std::ifstream &input);
    std::string no_punc(std::string word);
    void print();
private:
    std::vector<Word> m_word;
    std::vector<std::string> word_list;
    std::string m_filename;
    int line_counter;
};

#endif
