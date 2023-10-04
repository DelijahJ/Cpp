# include <iostream>
# include <iomanip>
# include <cmath>
# include <string>

using namespace std;

string instructions();
int input();
double subtotal();
double discount();
double totalCost();
int results(int books);

int main ()
{
  cout << instructions();
 int  books = input();
  cout << results(books);
  return 0;
}
string instructions ()
{
  string words = "Barnes and Noble have a deal on ebooks today.\nThere is a discount if you order today.\nThe discount is 15% off your total order.\nEach book costs $8.99.\nEnter the number of books you would like to download:\n";
  return words;
}
int input()
{
  int books;
  cout << "\nBooks to be downloaded:";
  cin >> books;
  return books;
}
double subtotal(int books)
{
  double cost = books*8.99;
  return cost;
}
double discount(int books)
{
  double disc = subtotal(books) * 0.15;
  return disc;
}
double totalCost(int books)
{
  double cost = subtotal(books) - discount(books);
  return cost;
}
int results(int books)
{
  cout << fixed << showpoint;
  cout << setprecision(2) << "Subtotal:   $" << subtotal(books) << " \nDiscount:   $" << discount(books) << "\nTotal Cost: $" << totalCost(books) << "\n";
  return 0;
}

  
 
