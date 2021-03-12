#include <iostream>
#include <string>

using namespace std;

//variables
char enter;
int age_sc1 = 0;
float hours_sc2 = 0.0;
string name_sc3 = " ";
int num_sc4;
int band_sc4 = 0;
int work_sc4 = 0;

int main() {
  //Partner Problem 1
  cout << "\nParter Problem #1";
  cout << "\n\nWhat is your age? ";
  cin >> age_sc1;

  if(age_sc1 < 18 && age_sc1 > 14){
    cout << "You are probably a high school student";
  }

  else{
    cout << "You are probably not a high school student";
  }
  cout << "\n\nPress a single alphabetical key followed by enter to continue";
  cin >> enter;

  //partner problem 2
  cout << "\n\nPartner Problem #2";
  cout << "\n\nHow many hours did you work? ";
  cin >> hours_sc2;

  if(hours_sc2 > 40){
    cout << "\nYou get overtime!";
  }

  else{
    cout << "\nYou don't get overtime";
  }

  cout << "\n\nPress a single alphabetical key followed by enter to continue";
  cin >> enter;

  //partner problem 3
  cout << "\n\nPartner Problem #3";
  cout << "C++ string on repl.it is bad and faualty and soy muy mal so no trabajar en numero tres >(";
  cout << "\n\nWhat is your name? ";
  cin >> name_sc3;

  cout << "\n\nPress a single alphabetical key followed by enter to continue";
  cin >> enter;

  //Partener prob 4
  cout << "\n\nPartner Problem #4";
  cout << "\n\nDo you have to work(1 for yes and 2 for no)? ";
  cin >> work_sc4;
  cout << "Does your friend have band(1 for yes and 2 for no)? ";
  cin >> band_sc4;

  if(work_sc4 == 1 || band_sc4 == 1){
    cout << "You cannot go today";
  }
  else{
    cout << "OK. You can go today";
  }


  //partner problem 5
  cout << "\n\nPartner Problem #5";
  cout << "\n\nEnter a whole number ";
  cin >> num_sc4;
  if(num_sc4 % 2 == 0){
    cout << "\n\nThat is an even number";
  }

  else{
    cout << "\n\nThat is an odd number";
  }
  cout << "\n\nYou have reached the end!";

}
