#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int roomsb;
  int daysb;
  double discount;
  double cost;
  double tax(tax);
  double total;
  cout << "This is a program to calculate discounts on a hotel room.\n Enter the cost of renting one room" << endl;
  cin >> cost;
  cout << "Enter the number of rooms booked." << endl;
  cin >> roomsb;
  cout << "Enter the amount of days booked." << endl;
  cin >> daysb;
  cout << "Enter the sales tax. " << endl;
  cin >> tax;
	  
  if (roomsb > 9 && roomsb < 20)
    {
      discount = .10;
    }
  if (roomsb > 19 && roomsb < 30)
    {
      discount = .20;
    }
  if (roomsb > 29)
    {
      discount = .30;
    }
  if (daysb > 2)
    {
      discount += .5; 
    }
  double tax()
    {
    }
  cout << total = cost * roomsb; 
	  cout << "Cost:     $" << cost << endl;
	  cout << "Discount: $" << discount << endl;
	  cout << "Rooms Booked: " << roomsb << endl;
	  cout << "Total:  " << total <<endl; 
}
