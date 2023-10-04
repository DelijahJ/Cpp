#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double rate;
  double intrest;
  double ratepercent;
  double principal;
  double xCompounded;
  double amount;

  cout << fixed << showpoint;
  cout << "Enter intrest rate:" ;
  cin >> rate;
  cout << "Enter principal:";
  cin >> principal;
  cout << "Enter Times compouded:";
  ratepercent=rate/100;
  cin >> xCompounded;
  intrest= principal*pow((1+ratepercent/xCompounded),(xCompounded));//intrest formula
  cout << setw(35) << "Intrest Rate          " << setprecision(2) << rate << "%" << endl;
  cout << setw(35) << "Times Compounded      " << setprecision(0) << xCompounded << endl;
  cout << setw(35) << "Principal            $" << setprecision(2) << principal << endl;
  cout << setw(35) << "Intrest              $" << setprecision(2) << intrest-principal  << endl;
  cout << setw(35) << "Amount in Savings    $" << setprecision(2) << amount+intrest  << endl;
  return 0;
}
