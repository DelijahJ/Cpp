#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int i = 0;
  for (i = 0; i < 10; i++)
    cout << i << " ";
  cout << endl;
  for (i = 1; i <= 5; i++)
    {
      cout << "Hello!" << endl;
      cout << "*" << endl;
    }
  return 0;
}
