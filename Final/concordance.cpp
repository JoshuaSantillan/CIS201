/*
File: concordance.cpp
Description: Final Project concordance.cpp which parses through alice.txt and holds all of the conrdance class functions. stores the words in the text into vector iterating to find duplicates and their line numbers.
Author: Joshua Santillan
Email: Santj96@gmail.com
Date created: 12/10/2018
*/

#include "concordance.h"
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>


Concordance::Concordance(std::string filename)
{
    m_filename = filename;
    line_counter =1;
}

 // analyszes the text
void Concordance::parse()
{
  std::ifstream file(m_filename.c_str());
  std::string line;
  int line_count = 1; // We start on line one, not line zero.
  while(std::getline(file, line))
  {
      // using getline to read all 24 given lines and the word inside of them while also making words lowercase and removing all punctuation of the words using the algorithm library provided so nicely by stackoverflow and ray-o-mond;
      std::istringstream stream(line);
      std::string word;
      while(stream >> word) 
      {
        // remove puncs
        word.erase (std::remove_if (word.begin(), word.end(), ispunct), word.end()); 
        // lowercase 
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        int word_count = find_word(word);
        // if the word has been found before add 1 to the counter
        if(word_count != -1) 
        {
              m_word[word_count].add_count(1);
              m_word[word_count].add_line(line_count); //adds the line numer the word is on
        }
        else
        {
              Word new_word(word); 
              new_word.add_line(line_count); //adds the current line of (there's 24 of them)
              m_word.push_back(new_word); // if the word hasnt been found push back to vector of words
        }
      }
      // when its done going through looking it adds one line to the counter
      line_count++; 
  }
}
int Concordance::find_word(std::string word) 
{
    //iterating through the vector of Words and returning the index in the vector
    for (int i = 0; i < m_word.size(); i++)
    {
       if (word == m_word[i].get_word())
       {
          return i;
       }
    }
    return -1;
}


void Concordance::add_word(std::string word, int find)
{
  int find_w = -1;
  for(int i = 0; i < m_word.size(); i++)
  {
    // if word at i is equal to word break look
    if (m_word[i].get_word() == word)
    {
      find_w = i;
      break;
    }
  }
      // however if find_w is equal to -q pushback into vector.
    if(find_w == -1)
    {
      Word w_word(word);
      w_word.add_line(find);
      m_word.push_back(w_word);
    }
    else
    {
      m_word[find_w].add_count(1);
      m_word[find_w].add_line(find);
    }
}




bool Concordance::is_whitespace(char c)
{
  // determines what is white space and what isn't
  return (c == ' ' || c == '\n' ||  c == '\t');
}


void Concordance::eat_whitespace(std::ifstream& input)
{
    for(;;)
    {
        char c;
        input.get(c);
        //make everything lower case
        c=tolower(c);
        if(input.eof())
            break;
        // if the following code is not whitespace put the character on the input stream
        if(!is_whitespace(c))
        {
            input.putback(c); 
            break;
        }
        // if there is a new line occurance counter goes up by 1 to track line #
    }
}


std::string Concordance::next_word(std::ifstream& input)
{
    std::string word;
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if(!is_whitespace(c))
        {
          // if the following code is not white space is through a - z word add to c
          if(c >= 'a' && c <= 'z')
            word += c;
            
        }
        else
        {
            //yeet all the whitespace away
            eat_whitespace(input);
            break;
        }
    }
    return word;
}



void Concordance::print() // Prints the vector and the lines.
{

   for (int i = 0; i < m_word.size(); i++)
   {
        // prints in the desired format: word:line #'s it ocurred on
        std::cout << m_word[i].get_word() << " : " << m_word[i].get_count() << " : ";
        m_word[i].print();
        std::cout << std::endl;
   }
}


// below function will remove punctuation from the words for easy printing and iteration
std::string Concordance::no_punc(std::string word)
{
  for(int i = 0; i < word.size(); i++)
  {
    if(ispunct(word[i]))
    word.erase(i--, 1); // if there is puncation it will find word lentghh and remove character from the end (the punctuation)
  }
  return word;
}
