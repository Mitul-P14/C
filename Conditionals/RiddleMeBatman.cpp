#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using std::transform;

int difficulty = 0;
string easyR = " ";
string medR = " ";
string diffR = " ";

int main()
{
  cout << "\nWelcome to The Infamous Riddle Chamber!";
  cout << "\nFor my first act, I will have you choose a riddle difficulty. \n1 for difficult\n2 for medium\n3 for easy\n";
  cin >> difficulty;
  cout << "==============\n";

  if(difficulty == 3)
  {
    cout << "Seriously? Easy. Such a weakling. Alright then, here it comes.\n";
    cout << "\nR: What can you catch but never throw?\n";
    cin.ignore();
    getline(cin, easyR);
    transform(easyR.begin( ), easyR.end( ), easyR.begin( ), ::tolower);

    if(easyR == "a cold" || easyR == "cold" || easyR == "the cold")
    {
      cout << "Congrats. You got the EASY riddle right. Let me move you on to the medium now.";
      cout << "You're a fighter. You did only get the easy one right though. Let\'s see you get the medium difficulty right.";
      cout <<"\n==============";

      cout << "\nR: What 4-letter word can be written forward, backward or upside down, and can still be read from left to right?\n";
      cin.ignore();
      getline(cin, medR);
      transform(medR.begin( ), medR.end( ), medR.begin( ), ::tolower);

      if(medR == "noon"){
        cout << "\'Noon\' was correct! Let\'s move on to the next challenge! Difficult level.";
        cout << "I admire you for having made it this far, BUT you will not leave succesful. AHAHAHHAHAAHAHAHA!";
        cout <<"\n==============";

        cout << "\nR: What word in the English language does the following: the first two letters signify a male, the first three letters signify a female, the first four letters signify a great. What is the word?\n";
        cin.ignore();
        getline(cin, diffR);
        transform(diffR.begin( ), diffR.end( ), diffR.begin( ), ::tolower);

        if(diffR == "heroine" || diffR == "a heroine"){
          cout << "Wow! You managed to finish the riddles! Congrats!";
        }
        else{
          cout << "Wrong. Don\'t feel bad though. I made that one hard on purpose.";
        }
      }
      else{
        cout << "You. Are. Horrible at this!";
      }
    }
    else{
      cout << "Wrong";
    }
  }
  if(difficulty == 2){
    cout << "Ahh so you're a fighter. Some other punk chose easy and got it wrong. Pathetic am I right?";
    cout << "\nR: What 4-letter word can be written forward, backward or upside down, and can still be read from left to right?\n";
    cin.ignore(256, '\n');
    getline(cin, medR);
    transform(medR.begin( ), medR.end( ), medR.begin( ), ::toupper);

    if(medR == "NOON"){
      cout << "\'NOON\' was correct! Go back and move on to the next challenge! Difficult level.";
      cout << "I admire you for having chosen this level, BUT you will not leave succesful. AHAHAHHAHAAHAHAHA!";
      cout << "\n==============";
      cout << "\nR: What word in the English language does the following: the first two letters signify a male, the first three letters signify a female, the first four letters signify a great. What is the word?\n";
      cin.ignore(256, '\n');
      getline(cin, diffR);
      transform(diffR.begin( ), diffR.end( ), diffR.begin( ), ::tolower);

      if(diffR == "heroine" || diffR == "a heroine"){
        cout << "Wow! You managed to finish the riddles! Congrats!";
      }
      else{
        cout << "Wrong. Don\'t feel bad though. I made that one hard on purpose.";
      }
    }
    else{
      cout << "You. Are. Horrible at this!";
    }
   }
  if(difficulty == 1){
    cout << "I admire you for having chosen this level, BUT you will not leave succesful. AHAHAHHAHAAHAHAHA!";
    cout << "\nR: What word in the English language does the following: the first two letters signify a male, the first three letters signify a female, the first four letters signify a great. What is the word?\n";
    cin.ignore(256, '\n');
    getline(cin, diffR);
    transform(diffR.begin( ), diffR.end( ), diffR.begin( ), ::tolower);

    if(diffR == "heroine" || diffR == "a heroine"){
      cout << "Wow! You managed to get it right! Congrats!";
    }
    else{
      cout << "Wrong. Don\'t feel bad though. I made that one hard on purpose.";
    }
  }
}
