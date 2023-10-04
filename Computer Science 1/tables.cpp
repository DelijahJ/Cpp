#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

void instructions();
void calculate(int people,double &ftotal,double &tax,double &tip,double& sum);
void openfile ();
void output(double sum, double tip, double tax, double ftotal);

int main()
{
 instructions();
 openfile();
 cout << endl;
  return 0;
}

void instructions()
{
  cout <<  "This is a program to calculate the amount owed from customers at tables in a restaurant.\n";
}

void openfile()
{
  ifstream inData;
  ofstream outData;
  string file;
  int people = 0;
  double num;
  double tax,tip;
  double ftotal = 0;
  double sum = 0;
  
  cout << "Enter the name of the data file:\n";
  cin >> file;
  inData.open(file);

  if (!inData)
  {
	cout << "Can't find the file" << endl;
  }
      
while(inData)
   {
	   inData >> people;
	   for (int i = 0; i < people; i++)
	   {
		   inData >> num;
		   sum = sum + num;
	   }
		   calculate(people,ftotal,tax,tip,sum);
		   output(sum,tip,tax,ftotal); 
		   sum = 0;
		   ftotal = 0;
		   
	  if (inData.eof())
		  break;
}
inData.close();
}
void calculate(int people, double &ftotal,double &tax,double &tip,double &sum)
{
  if (people < 5)
    tip = sum * .16;
  else tip = sum * .20;
  tax = sum * .05;
  ftotal = tip + tax + sum;
}
void output(double sum, double tip, double tax, double ftotal)
{
 cout << fixed << showpoint << endl;
 cout << setprecision(2) << "Subtotal: $" << sum << endl;
 cout << "Tip:      $" << tip << endl;
 cout << "Tax:      $" << tax << endl;
 cout << "Total:    $" << ftotal << endl; 
}