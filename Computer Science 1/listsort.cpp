#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void selectionSort(string list[], int length);

int main()
{
  ifstream inData;
  string bookList[15] = {};
  inData.open("booklist.dat");
  while (inData)
    {
      for (int i = 0; i < 15; i++)
	{
	  inData >> booklist[i];
	}
    }
  
  // selectionSort()
  return 0;
}
void selectionSort(string list[],int length)
{
  int index;
  int smallestIndex;
  int location;
  int temp;

  for (index = 0; index < length - 1; index++)
    {
      smallestIndex = index;
      for (location = index + 1; location < length; location++)
	if (list[location] < list [smallestIndex])
	  smallestIndex = location;
      temp = list[smallestIndex];
      list[smallestIndex] = list [index];
      list[index] = temp;
    }
}
