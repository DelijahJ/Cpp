#include <iostream>
#include <cmath>

using namespace std;

int multiply(int one, int two);

int main()

  {
    
    int x,y;
    cout << "Input 2 numbers with spaces in between" << endl;
    cin >> x >> y ;
    cout << "These are your 2 numbers! " << x << ", " << y << endl;
    cout << x << " to the power of " << y << ", "  << pow(x,y) << endl;
    cout << x << " times " << y << " is " << multiply(x,y) << endl;
    return 0;
    
  }
int multiply (int one, int two)
{
  int answer;
  answer = one * two;
  return answer;
}
