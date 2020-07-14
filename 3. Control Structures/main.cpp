/***
    Filename: main.cpp
    Description: Converting Intergers to Roman Numeral
    Auhtor: Joshua Santillan
    DoC: 9/19/2018
***/

#include<iostream>
using namespace std;

int main()
{
    // declaring variables. String is used in for loops for later use
   int Thousands,Hundreds,Tens,Ones,number;
   string Th_Value,H_Value,T_Value,O_Value;

        // trap user in while loop until they enter a correct value
        cout << "Enter an Interger Value Greater Than 1 and up to 3999: ";
        cin >> number;
        while(number < 1 || number > 3999)
            {
            cout << "Invalid Entry! Enter a value between 1 and 3999: ";
            cin >> number; 
            }
        // getting interger values using modulous math
        Thousands= number / 1000 % 10;
        Hundreds = number / 100 % 10;
        Tens = number / 10 % 10;
        Ones = number % 10;


  
        //thousands place     
    
    if(Thousands == 1)
     {
      cout << "M";
     }
    
    else if(Thousands == 2)
        {
         cout << "MM";
        } 
    else if(Thousands == 3)
         {
         cout << "MMM";
         }

       //hundreds place
      if (Hundreds == 4) 
      {
         H_Value = "CD";
      }
      
      else if (Hundreds == 9 )
           {
              H_Value = "CM";
           }
      
      else if (Hundreds  >=1 && Hundreds <4 )
           { 
             for (int i = 0; i<Hundreds; i++)
              { 
                  H_Value += "C";
              }
           }
    
      else if (Hundreds >= 5 && Hundreds < 9) 
           {
         H_Value = "D";
            for(int i = 5; i < Hundreds; i++) 
              {
                H_Value += "C";
              }
           }
         
              cout << H_Value;
        

       // Tens place
      if (Tens == 4) 
      {
         T_Value = "XL";
      }
      else if (Tens == 9 )
           {
              T_Value = "XC";
           } 
      else if (Tens  >=1 && Tens <4 )
           {
             for (int i = 0; i<Tens; i++)
              {
                  T_Value += "X";
              }
           }
    
       else if (Tens >= 5 && Tens < 9) 
            {
              T_Value = "L";
              for(int i = 5;i<Tens; i++) 
               {
                  T_Value += "X";
               }
            }
  
              cout << T_Value;

      //ones place
      if (Ones == 4) 
       {
          O_Value = "IV";
       }
      
      else if (Ones == 9 )
           {
             O_Value = "IX";
           }
      
      else if (Ones >=1  && Ones <4 )
           {
             for (int i = 0; i<Ones; i++)
              {
                 O_Value += "I";
              }
          }
       else if (Ones >= 5 && Ones < 9) 
            {
              O_Value = "V";

             for(int i = 5;i<Ones; i++) 
              {
                  O_Value += "I";
              }
            }
          
            cout << O_Value << endl;
  


           return 0;
}
