#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <algorithm>

using namespace std;
using std::transform;
using namespace chrono;
using namespace this_thread;

int main() {

  //START problem                                                               ONE

  int den = 0;
  int num = 0;
  int ans = 1;

  while(ans != 0) {
    cout << "\nEnter numerator\n";
    cin >> num;
    cout << "\nEnter denominator\n";
    cin >> den;

    ans = num % den;
    if(ans == 0) {
      cout << "\nYou got it!\n";

      string a = "It was evenly distributed!\n";
      for (char c: a)
      {
        sleep_for(milliseconds(40));
        cout << c << flush;
      }
    }
    else {
      cout << "\nTry again\n";

      string e = "It was not evenly distributed\n";
      for(char c: e)
      {
        sleep_for(milliseconds(40));
        cout << c << flush;
      }
    }
  }


  //END problem                                                               ONE


  //START problem                                                               TWO

  int numD = 0;
  while(numD != -1) {
    cout << "\nIU Basketball Team Roster\nEnter a team member's number for their name: ";
    cin >> numD;

    switch (numD){
      case 0 :
        cout << "\nCooper Bybee\n";
        break;
      case 1 :
        cout << "\nAljami Durham\n";
        break;
      case 2 :
        cout << "\nArmaan Franklin\n";
        break;
      case 3 :
        cout << "\nAnthony Leal\n";
        break;
      case 4 :
        cout << "\nKhristian Lander\n";
        break;
      case 5 :
        cout << "\nMichael Shipp\n";
        break;
      case 10 :
        cout <<"\nRob Phinisee\n";
        break;
      case 14 :
        cout << "\nNathan Childress\n";
        break;
      case 15 :
        cout << "\nSebastien Scott\n";
        break;
      case 21 :
        cout << "\nJerome Hunter\n";
        break;
      case 22 :
        cout << "\nJordan Geronimo\n";
        break;
      case 23 :
        cout << "\nTrayce Jackson-Davis\n";
        break;
      case 25 :
        cout << "\nRace Thompson\n";
        break;
      case 32 :
        cout << "\nTrey Galloway\n";
        break;
      case 50 :
        cout << "\nJoey Brunk\n";
        break;
      case -1 : {
        string a = "\nStopping Program\n";
        for(char c: a)
        {
          sleep_for(milliseconds(60));
          cout << c << flush;
        }
      }
        break;
      default :
        cout << "\nThat number is not associated with any IU Basketball player";
        break;
    }
  }

  //END problem                                                               TWO


  //START problem                                                               THREE

  int bal = 75;
  int pav = 30;
  int lawn = 25;
  int wanted = 0;
  int total = 0;

  while(wanted != -1) {
    cout << "\n\nWhat seat location would you like to purchase (1 for Balcony, 2 for Pavilion, 3 for Lawn): ";
    cin >> wanted;

    if(wanted == 1){
      total = bal + total;
      cout << "Your total is so far $" << total;
    }

    if(wanted == 2) {
      total = pav + total;
      cout << "Your total is so far $" << total;
    }

    if(wanted == 3) {
      total = total + lawn;
      cout << "Your total is so far $" << total;
    }

    if(wanted == -1) {
      string ex = "\nLoop Exited\n";
      for(char c: ex)
      {
        sleep_for(milliseconds(100));
        cout << c << flush;
      }
    }

    if(wanted != -1 && wanted != 1 && wanted != 2 && wanted != 3) {
      string er = "\nERROR\nPlease enter a valid value";
      for(char c: er)
      {
        sleep_for(milliseconds(60));
        cout << c << flush;
      }
    }

  }

  cout << "\nThe total for your order is $" << total << "\n";

  //END problem                                                               THREE


  //START problem                                                               FOUR

  char var = 'a';

  while(var != '#'){

    cout << "\n\nEnter in the letter (one letter at a time) to convert to a number (enter # to stop)\n";
    cin >> var;

    switch (var) {
    case 'a' :
     cout << "2\n";
     break;
    case 'b' :
     cout << "2\n";
     break;
    case 'c' :
     cout << "2\n";
     break;
    case  'd' :
     cout << "3\n";
     break;
    case 'e' :
     cout << "3\n";
     break;
    case 'f' :
     cout << "3\n";
     break;
    case 'g' :
     cout << "4\n";
     break;
    case 'h' :
     cout << "4\n";
     break;
    case 'i' :
     cout << "4\n";
     break;
    case 'j' :
     cout << "5\n";
     break;
    case 'k' :
     cout << "5\n";
     break;
    case 'l' :
     cout << "5\n";
     break;
    case 'm' :
     cout << "6\n";
     break;
    case 'n' :
     cout << "6\n";
     break;
    case 'o' :
     cout << "6\n";
     break;
    case 'p' :
     cout << "7\n";
     break;
    case 'q' :
     cout << "7\n";
     break;
    case 'r' :
     cout << "7\n";
     break;
    case 's' :
     cout << "7\n";
     break;
    case 't' :
     cout << "8\n";
     break;
    case 'u' :
     cout << "8\n";
     break;
    case 'v' :
     cout << "8\n";
     break;
    case 'w' :
     cout << "9\n";
     break;
    case 'x' :
     cout << "9\n";
     break;
    case 'y' :
     cout << "9\n";
     break;
    case 'z' :
     cout << "9\n";
     break;
    case 'A' :
     cout << "2\n";
     break;
    case 'B' :
     cout << "2\n";
     break;
    case 'C' :
     cout << "2\n";
     break;
    case  'D' :
     cout << "3\n";
     break;
    case 'E' :
     cout << "3\n";
     break;
    case 'F' :
     cout << "3\n";
     break;
    case 'G' :
     cout << "4\n";
     break;
    case 'H' :
     cout << "4\n";
     break;
    case 'I' :
     cout << "4\n";
     break;
    case 'J' :
     cout << "5\n";
     break;
    case 'K' :
     cout << "5\n";
     break;
    case 'L' :
     cout << "5\n";
     break;
    case 'M' :
     cout << "6\n";
     break;
    case 'N' :
     cout << "6\n";
     break;
    case 'O' :
     cout << "6\n";
     break;
    case 'P' :
     cout << "7\n";
     break;
    case 'Q' :
     cout << "7\n";
     break;
    case 'R' :
     cout << "7\n";
     break;
    case 'S' :
     cout << "7\n";
     break;
    case 'T' :
     cout << "8\n";
     break;
    case 'U' :
     cout << "8\n";
     break;
    case 'V' :
     cout << "8\n";
     break;
    case 'W' :
     cout << "9\n";
     break;
    case 'X' :
     cout << "9\n";
     break;
    case 'Y' :
     cout << "9\n";
     break;
    case 'Z' :
     cout << "9\n";
     break;
    }
  }

  //END problem                                                               FOUR


  //START problem                                                               FIVE

  float years = 0;
  float vaca = 0;
  float vacaT = 0;
  float emp = 0;
  float x = 0;

  while(years != -1){
    emp = emp + 1;
    cout << "\n\n\n\nHow many year(s) have they worked with the company? (-1 to stop)";
    cin >> years;

    if(years == -1){
      cout << endl;
    }

    if(years == 1){
      cout << "\nthey recieve 1 week of vacation";
      vacaT = vacaT + 1;
    }

    if(years >= 2 && years <= 5){
      cout << "\nthey recieve 2 weeks of vacation";
      vacaT = vacaT + 2;
    }

    if(years >= 6 && years <= 15) {
      cout << "\nthey recieve 3 weeks of vacation";
      vacaT = vacaT + 3;
    }

    if(years > 15){
      cout << "\nthey recieve 4 weeks of vacation";
      vacaT = vacaT + 4;
    }

    if(years == 0 || years < -1){
      cout << "That is not a valid response";
    }
  }
  cout << "\nTotal vacation given was " << vacaT << " weeks";
  emp = emp - 1;
  cout << "\n" << emp << " employees were evluated during this loop";
  x = vacaT / emp;
  cout << "\nThere was an average of " << x << " weeks of vacation per employee";
  //END problem                                                               FIVE
  }
