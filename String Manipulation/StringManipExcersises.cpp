#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using std::transform;
using std::string;

string input_word = " ";
int length1 = 0;
string lastName1;
string lastName2;
int compare1;
string alphabet = "abcdefghijklmnopqrstuvwxyz";
string inputLetter = " ";
int findResult;
string fiveChar = " ";
string fiveChar2 = " ";
int fiveChar_length;
string item = " ";
string color = " ";
string phoneNum = " ";
int phoneNumhyp;
int a=0;
int main() {

  //  Scenario 1

  cout << "Input a word or more: \n";
  getline (cin, input_word);
  length1 = input_word.length();
  cout << endl;

  while (length1 > 0) {
    cout << "*";
    length1--;
  }



  //  Scenario 2                                 NEEDS SOME WORK

  cout << "\n\n\nEnter your last name:\n";
  getline (cin, lastName1);
  transform(lastName1.begin(), lastName1.end(), lastName1.begin(), ::toupper);
  cout << "\nEnter another last name:\n";
  getline(cin,lastName2);
  transform(lastName2.begin(), lastName2.end(), lastName2.begin(), ::toupper);

  compare1 = lastName1.compare(lastName2);
  switch (compare1){
    case (-1):
      cout << "\n" << lastName1 << " comes before " << lastName2;
      break;
    case (1):
      cout << "\n" << lastName1 << " comes after " << lastName2;
      break;
    case (0):
      cout << "\nThey are both identical.";
      break;
  }




  //  scenrio 3

  for (int a = 0; a == 0;) {

      cout << "\n\n\nEnter a letter: ";
      getline (cin, inputLetter);
      transform(inputLetter.begin(), inputLetter.end(), inputLetter.begin(), ::tolower);
      findResult =  alphabet.find(inputLetter, 0);

      if (findResult == -1) {
            cout << "\nThe letter that you entered is not a valid response\n\nPlease try again";
      }

      else {
            cout << "\nThat letter has the position of " << findResult+1 << " in the English alphabet";
            a++;
      }
  }





  //  scenario 4

  for (int a = 0; a == 0;) {
    cout << "\n\n\nEnter a five-character phrase of your choosing: ";
    getline (cin, fiveChar);
    fiveChar_length = fiveChar.length();

    if (fiveChar_length != 5) {
        cout << "\nWhat you just entered was not a five character input.\nPlease try again";

    }

    else {
        a++;
        fiveChar2 = fiveChar;

        fiveChar = fiveChar.erase(3);
        item = fiveChar;

        fiveChar2 = fiveChar2.erase(0,3);
        color = fiveChar2;


        cout << "\nItem Number: " << item;
        cout << "\nColor ID: " << color;

    }
  }






  //  scenario 5                                                 NEEDS SOME WORK
      cout << "\n\n\nInput a phone number: ";
      getline(cin, phoneNum);
      a= phoneNum.length();
  for (int x = 0; x<=a; x++) {

      phoneNumhyp = phoneNum.find("-", 0);
        if(phoneNumhyp >= 0) {
        phoneNum.erase(phoneNumhyp,1);
      }
  }

  cout << "\nThe phone number without hypens is: " << phoneNum;



}
