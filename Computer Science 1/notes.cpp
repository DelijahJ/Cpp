#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159265;

int main ()
{
  double radius = 12.67;
  double height = 12.00;

  cout << fixed << showpoint;

  cout << setprecision(2) << "setprecision(2) " << endl;
  cout << "setw(15)" << endl;
  cout << setw(15) << "radius " << radius << endl;
  cout << setw(15) << "height " << height << endl;
  cout << setw(15) << "volume " << PI * pow(radius,2) * height << endl << endl;

  cout << setprecision(3) << "setprecision(3) " << endl;
  cout << "setw(25)" <<endl;
  cout << setw(25) << "radius " << radius << endl;
  cout << setw(25) << "height " << height << endl;
  cout << setw(25) << "volume " << PI * pow (radius,2) * height << endl << endl;

  cout << setprecision(4) << "setprecision(4) " <<endl;
  cout << "radius " << radius << endl;
  cout <<"height " << height <<endl;
  cout << "volume " <<PI * pow (radius,2) * height << endl << endl;
  return 0;
}

