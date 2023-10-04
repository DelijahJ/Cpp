#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void instructions();
void grade();
void output(bool score[20],char test[20]);
bool pass();
int correct(bool score[20]);
int incorrect(bool score[20]);
string pass(bool score[20]);
void wrong(char key[20],char test[20]);


int main()
{
  instructions();
  cout << "          Correct Incorrect Pass? Questions Wrong" << endl; 
  grade();
  cout << endl;
  return 0;
}

void instructions()
{
  cout << "This is a program to Grade the written portion of a drivers test.\n";
}

void grade()
{
  bool score[20] = {};
  char test[20] = {};
  ifstream inData;
  char Key[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
  int student = 1;
  inData.open("driving.dat");
  while(inData)
    {
		
	  for (int i = 0; i < 20; i++)
      {
	inData >> test[i];
	if (test[i] == Key[i])
	  score[i] = true;
	else score[i] = false;
      }
	  if (inData.eof())
	    break;
	  cout << "Student " << student << " ";
	  output(score,test);
		student ++;
    }
  inData.close();
}
void output(bool score[20],char test[20])
	{
	  char key[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
	  cout << "  " << correct(score) << "        ";
	  cout << incorrect(score) << "      ";
	  cout << pass(score) << "     ";
	  wrong(key,test);
	  cout << endl;
    }
	int correct(bool score[20])
	{
		int correct = 0;
		for (int i = 0; i < 20; i++)
      {
		  if (score[i] == true)
			  correct++;
	  }
	 		return correct;
	}
	int incorrect(bool score[20])
	{
		int incorrect = 0;
		for (int i = 0; i < 20; i++)
      {
		  if (score[i] == false)
			  incorrect++;
	  }
	 		return incorrect;
	}
	string pass(bool score[20])
	{
		int correct = 0;
		for (int i = 0; i < 20; i++)
      {
		  if (score[i] == true)
			  correct++;
	  }
		if (correct < 15)
		return "No";
		else
			return "Yes";
	}
	void wrong(char key[20],char test[20])
	{
		for (int i = 0; i < 20; i++)
      {
		  if (test[i] != key[i])
			 cout << i + 1 <<","; 
	  }
	 		
	}
