#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() 
{
  srand(time(0));
  int randomNumber = rand() % 100 + 1;

  int guess;
  bool guessedCorrect = false;

  cout << "I am thinking of a number. Guess that number it's in between 1-100" << endl;

  while (!guessedCorrect) 
  {
    cout << "Your guess: ";
    cin >> guess;

    if (guess == randomNumber) 
    {
      cout << "Congratulations! You guessed the number!" << endl;
      guessedCorrect = true;
    } 
    else if (guess > randomNumber) 
    {
      cout << "Too high! Try again." << endl;
    } 
    else 
    {
      cout << "Too low! Try again." << endl;
    }
  }

  return 0;
}
