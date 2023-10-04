#include <iostream>

using namespace std;

bool isPalindrome (string str);

int main()
{
  string word;
  cout << "Enter a word" << endl;
  cin >> word;
  //cout << isPalindrome(word);
  if (isPalindrome(word) == true)
    cout << "The word is a palindrome." << endl;
  else cout << "Your word is not a palindrome." << endl;
}
bool isPalindrome (string str)
{
  int length = str.length();
  for (int i = 0; i < length / 2; i++)
    if (str[i] != str[length - 1 - i])
      return false;
  return true;
}
