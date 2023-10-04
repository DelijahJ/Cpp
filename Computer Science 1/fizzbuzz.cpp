#include <iostream>

using namespace std;

bool mul3(int num);
bool mul5(int num);
int main()
{
  for (int i=1; i<101; i++)
    {
      cout << i;
      if (mul3(i))
	cout << " Fizz";
      if (mul5(i))
	cout << " Buzz";
    cout <<endl;
    }
  return 0;
}
bool mul3(int num)
{
  if (num % 3 == 0)
    return true;
  else
    return false;
}
bool mul5(int num)
{
  if (num % 5 == 0)
    return true;
  else
    return false;
}
