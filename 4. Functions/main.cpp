/**
    Author: Joshua Santillan
    Description: Solving multiple volumes and surface areas using functions 
    File: main.cpp
    Date Created: 10/1/2018


**/


#include<iostream>
#include<string>
#include<cmath>

using namespace std;


double get_double(string prompt);
double sphere_volume(double r);
double sphere_surface(double r);
double cylinder_volume (double r, double h); 
double cylinder_surface(double r, double h);
double cone_volume (double r, double h);
double cone_surface(double r, double h);

int main()
{

    double radius = get_double ("Please enter the radius: ");
    double height = get_double("Please enter a height: ");
    
    cout << "The Radius is: " << radius << endl
         << "The Height is: " << height << endl
         << "The Sphere Volume is: " << sphere_volume(radius) << endl
         << "The Sphere Surface is: " << sphere_surface(radius) << endl
         << "The cylinder volume is: " << cylinder_volume(radius, height) << endl
         << "The cylinder surfface is: " << cylinder_surface( radius, height) << endl
         << "The cone volume is: " << cone_volume( radius, height) << endl
         << "The cone surface is: " << cone_surface( radius, height) << endl;

    return 0;
}

/**
  Will get a cone surface
  @param r double used to find radius
  @return the math equation value
*/
double sphere_volume(double r)
{

    return 4.0/3.0 * M_PI * pow(r,3); // comma delcares what gets pow
    // dont need a variable can use expression right side of return
}

/**
  Will get a cone surface
  @param r double used to find radius
  @return the math equation value
*/
double sphere_surface(double r)
{
    return 4.0 * M_PI * pow(r,2);

}

/**
  Will get a cone surface
  @param Doubles used to find height and radius
  @return the math equation value
*/
double cylinder_volume (double r, double h)
{
    return M_PI * pow(r,2) * h ;
}

/**
  Will get a cone surface
  @param Doubles used to find height and radius
  @return the math equation value
*/
double cylinder_surface (double r, double h)
{
  return 2.0 * M_PI * r * (r + h);
}

/**
  Will get a cone surface
  @param Doubles used to find height and radius
  @return the math equation value
*/
double cone_volume(double r, double h)
{
  return 1.0/3.0 * M_PI * pow(r,2) * h;
}

/**
  Will get a cone surface
  @param Doubles used to find height and radius
  @return the math equation value
*/
double cone_surface(double r, double h)
{
  return M_PI * r * (r + sqrt(pow(h,2) + pow(r,2)));
}


/**
  Will get a valid double from the user >0
  @param prompt the string prompt
  @return the value that is returned from the user
*/
double get_double(string prompt)
{
    
    double value;

    do 
    { 
       cout << prompt;
       cin >> value;
    
             if (cin.fail()) 
                {
                 cin.clear();
                 cin.ignore(99999999, '\n');
                 cout << "Not a valid Input, try again: ";
                 }
    }
    while(value<=0);
     

    return value;
}
