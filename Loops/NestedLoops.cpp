#include <iostream>

using namespace std;

int main() {

// problem 1

  cout << "Problem 1\n";
  for ( int i = 8; i > -1; i=i-1) {
    for (int j = 0; j <= i; j++){
      cout << "*";

    }
    cout << endl;
  }


  cout << "\n\n\nProblem 2\n";
// problem 2
  cout << " " << endl;
  for (int u = 0; u < 5; u++) {
    for (int h = 0; h <= u; h++) {
      cout << "**";
    }
    cout << endl;
  }





  cout << "\n\n\nProblem 3\n";
// problem 3
  int increment = 0;
  int control = 1;

  int rows = 0;

  cout << "How many rows do you want: ";
  cin >> rows;

  cout << "\nWhat is the desired increment value: ";
  cin >> increment;

  cout << " " << endl;
  for(int t = 1; t <= rows; t++) {

    for(int f = 1; f <= t; f++) {

      for (int control =1; control<=increment;control++){
        cout << "*";
      }

    }
    cout << endl;
  }





  cout << "\n\n\nProblem 4\n";
// problem 4
  cout << " " << endl;
  for (int u = 0; u < 15; u++) {
    for (int h = 0; h <= u; h++) {
      cout << " ";
    }
    cout << "*" << endl;
  }

}
