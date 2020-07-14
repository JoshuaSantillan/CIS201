/*
  Filename: main.cpp
  Auhtor: Joshua Santillan
  Email: santj96@gmail.com
  Description: An email like object that prompts user to enter the recipient names, the addresses name, and the message being sent. 
*/


#include<iostream>
#include<string>
#include<ctime>


class Message
{
private:
   std::string m_recipient, m_sender, m_body, m_email;
   time_t timest;
  
public:
   Message();
   Message(std::string recipient, std::string sender); // blank constructor
   void append(std::string b); // takes and gets input member
   void print(); // prints everything member
   void to_string();
};

Message::Message()
{

}

Message::Message(std::string recipient, std::string sender)
{
   m_recipient = recipient;
   m_sender = sender;
   m_body = "";
   time(&timest);
   
}

void Message::append(std::string b)
{  
  m_body += b +"\nMessage sent at:" + ctime(&timest) + "\n"; 
  
}

void Message::to_string()
{
   m_email = "From: " + m_sender + "\n" + "To: " +m_recipient +"\n\n" + m_body;
  
}
void Message::print() // Cocatinate the entire thing to one string email
{

   std::cout << m_email;
   //std::cout << "Message sent at: "; std::cout << ctime(&timest); // displays time when sent.

}


int main()
{
  
   Message mail("Harry Hacker","Rudolph Reindeer");
   mail.append("This is my First Message"); 
   mail.append("This is my Second Message"); 
   mail.append("This is my Third Message"); 
   mail.to_string();
   mail.print();
  
   

   return 0;
}
