#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

string instructions();
double paintCost();
double laborCost();
double totalCost();
int output();
double squareFeet;
double perGallon;

int main()
{
  cout << instructions();
  cin >> squareFeet;
  cout << "Please enter the price per gallon of paint. ";
  cin >> perGallon;
  while (perGallon<10)
    {
      cout << "Price of paint cannot be less than $10\nPlease enter the price per gallon of paint. " ;
      cin >> perGallon;
    }
  cout <<  output(); 
  return 0;
}
string instructions()
{
  string words = " This is a program to calculate the cost of paint and labor for the painting of walls.\n Please enter the amount of square feet to be covered. ";
  return words;
}
double paintCost(double perGallon,double squareFeet)
{
  double gallons;
  double cost;
  gallons = squareFeet / 120;
  cost = gallons * perGallon;
  return cost;
}
double laborCost(double squareFeet)
{
  double gallons;
  double cost;
  double labor;
  gallons = squareFeet / 120;
  labor = gallons * 8;
  cost = labor * 20;
  return cost;
}
double totalCost(int squareFeet, int perGallon)
{
  double cost;
  cost = paintCost(perGallon,squareFeet) + laborCost(squareFeet);
  return cost;
}
int output()
{
  cout << fixed << showpoint;
  cout << setprecision(2) << "Square Feet:    " << squareFeet << "\nCost of Paint: $" << paintCost(perGallon,squareFeet) << "\nCost of labor: $" << laborCost(squareFeet) << "\nTotal Cost:    $" << totalCost(squareFeet,perGallon);
  return 0;
}
 
