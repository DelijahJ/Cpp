#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

string instructions();
double tax(int total);
double tip(double total,int people);
double total();


int main()
{
  int people = 1;
  int guests;
  double rtotal;
  double subtotal;
  cout << instructions();
  while (people != 0)
  {
  cin >> people;
  guests = people;
 while (guests > 0)
    {
  cout << "Enter a price for person #" << guests << "'s meal ";
     cin >> rtotal;     
     subtotal += rtotal;
  guests--;
    } 
 cout << fixed << showpoint;
 cout << setprecision(2) << "Subtotal: $" << subtotal << endl;
 cout << "Tip:      $" << tip(subtotal,people) << endl;
 cout << "Tax:      $" << tax(subtotal) << endl;
 cout << "Total:    $" << subtotal + tip(subtotal,people) + tax(subtotal) <<endl; 
 cout << "Enter how many people are at the table " <<endl;
   }
  return 0;
}

string instructions()
{
  string ins =  "This is a program to calculate the amount owed from customers at tables in a restaurant.\nEnter how many people are at the table ";
  return ins;
}

double tax(int total)
{
  double tax;
  tax = total * .05;;
  return tax;
}
double tip (double total,int people)
{
  double tip;
  if (people < 5)
    tip = total * .16;
  else tip = total * .20;
  return tip;
}
