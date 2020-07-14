/*
 File: main.cpp
 Description: Asks user for a radius and then prints the area, circumfrence, surface are and volume with cin radius.
 Author: Joshua santillan
 Email: Santj96@gmail.com
 Date of Creation: 9/11/18
*/

#include <iostream>
using namespace std;

int main ()
{
   double r, A_circle, C, SA, V; // declaring mult vars
   cout << "Enter a numeric value for radius: ";
   cin >> r; // getting radius from user

   // storing pi in a const double variable
   const double pi = 3.1415;

   
   A_circle = pi * r * 2; // Area circle
   C = 2 * pi * r; //Circumference circle
   SA = 4 * pi * r * r; // Surface Area sphere
   V = (4.0/3.0) * pi * r * r * r; // Volume sphere

   // out puts answers back to user using variables stored with answers
   cout << "The answers below are answered with the radius: " <<  r << endl;
   cout << "The area of a circle is: " << A_circle << endl;
   cout << "The Circumference of a circle is: " << C << endl;
   cout << "The Surface area of a sphere is: " << SA << endl;
   cout << "The Volume of a sphere is: " << V << endl;

   // Declaring new variables for other shapes
   double W, L, A_square, A_rect, Perimiter;
      
   //Asking user for width and lentghh then storing their info in vars
   cout << "enter a width: ";
   cin >> W;
   cout << "enter a lentgh: " ;
   cin >> L;
  
   // putting area of square/rectangle and perimiter in variables
   A_square = W * W;   
   A_rect = W * L;
   Perimiter = 2 * W + L;
   
   // giving answers
   cout
      << "The area of a square is: " << A_square << endl
      << "The Area of a rectangle is: " << A_rect << endl
      << "The Perimiter of a rectangle is: " << Perimiter << endl;
            
   return 0;


}
