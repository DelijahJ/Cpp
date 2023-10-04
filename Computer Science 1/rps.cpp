#include <iostream>

using namespace std;

int gameCount;
int winCount;
int wincount2;
int gamewinner;
char response;
char selection1;
char selection2;
enum objectType {ROCK, PAPER, SCISSORS};
objectType play1;
objectType play2;

void displayRules();
bool validSelection();
retrievePlay();
gameResult();
convertEnum();
wininningObject();
displayResults();

int main()
{
  return 0;
}

void displayRules()
{
	cout << " Welcome to the game of Rock, Paper, and Scissors. \n This is a game for two players. For each game, each player selects one of the objects, Rock, Paper or Scissors,\nThe rules for winning the game are:\n 1 If both players select the same object, it is a tie.\n2. Rock breaks Scissors: so player who selects Rock wins\n3.Paper covers Rock: So player who selects Paper wins.\n4. Scissors cut Paper: So player who selects Scissors wins.\nEnter R or r to select Rock, P or p to select Paper, and S or s to select Scissors.\n";
}
bool validSelection(char selection)
{
	switch (selection)
	{
		case 'R':
		case 'r':
		case 'P':
		case 'p':
		case 'S':
		case 's':
		return true;
		default:
		return false;
	}
}
objectType retrievePlay(char selection)
{
	objectType object;
	switch (selection)
	{
		case 'R':
		case 'r':
		object = Rock;
		break;
		case 'P':
		case 'p':
		object = PAPER;
		break;
		case 'S':
		case 's':
		object = SCISSORS;
	}
	return object;
}
void gameResult(objectType play1, objectType play2, int& winner)
{
	objectTypewinnerObject;
	
	if (play1 == play2)
	{
		winner = 0;
		cout << "Both players selected ";
		convertEnum(play1);
		cout << ".This game is a tie." << endl;
	}
	else
	{
		winnerObject = winningObject (play1,play2);
		
		cout << "Player 1 selected ";
		convertEnum(play1);
		cout << "and player 2 selected ";
		convertEnum (play2); 
		cout << ". ";
		
		if (play1 == winnerObject)
			winner = 1;
		else if (play2 == winnerObject)
			winner = 2;
		
		cout << "Player " << winner << "wins this game." << endl;
}
void convertEnum()
{}
wininningObject()
{}
displayResults()
{}