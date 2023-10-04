#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream inData;
  ofstream outData;
  string msg;
  // while(inData)
    
  inData.open("table1.dat");
  outData.open("prog.out");
  if (!inData)
    {
      cout << "Can't find the file" <<endl;
      return 1;
    }
  inData >> msg;
  cout << msg <<endl;
  
  if(inData.eof())
    {  
      inData.close();
      outData.close();
    }
    
  return 0;
}
