#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
float a = 57.9999;
double b = 684.006969696;
double c = 45458.22222222;

cout << setprecision(2);
cout << a << " " << b << " " << c << endl;
cout << fixed << showpoint << setprecision(2);
cout << a << " " << b << " " << c << endl;

 cout << setw(5) << "Hello" << endl;
 cout << setw(10) << "world" << endl;
 cout << right << setw(20) << "!!" << endl;
if (a > b)
    cout << "A is greater than B." << endl;
 else 
   cout << "A is less than B " << endl;
/* else
   {
     cout << "A and B must be equal. " << endl;
     }*/
 if (b != c)
   cout << "B and C are not the same." << endl;
 if (b == c)
   cout << "B and C are the same'" << endl;
 cout << "B= " << c << endl;
 cout << "C= " << c << endl;
 char letter;
 cin >> letter;
 switch(letter)
   {
   case 'A':
   cout << "Avocado" << endl;
   break;
   case 'B':
   cout << "Banana" << endl;
   break;
   case 'C':
   cout << "Coconut" << endl;
    break;
   default:
   cout << "Didnt type a valid letter." << endl;
   
   }
   return 0;
}
