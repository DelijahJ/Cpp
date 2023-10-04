#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int i;
  int j;
  for (i = 5; i >= 0; i--)
    {
      cout << endl;
      for (j = 1; j <= i; j++)
	cout << "*";
    }
  return 0;
}
