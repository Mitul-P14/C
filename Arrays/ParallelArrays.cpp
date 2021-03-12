#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using std::string;
using std::transform;

int main() {

  string lastName [4] {"Gaff", "Daniels", "Dodson", "Dice"};
  float votes [4] {200, 350, 150, 1300};
  float totalVotes = 0;

  for (int a = 0; a < 4; a++) {
    totalVotes = totalVotes + votes[a];
  }

  for (int b = 0; b < 4; b++) {
    cout << endl << lastName[b] << " had " << votes[b] << " votes";
    cout << "\nThat is " << ((votes[b]/totalVotes)*100) << " percent of the votes";
    cout << endl;
  }

  cout << "\n\n\n\n";






  // Scenario 2!!

  string fullName [6] {"Ardie Savea", "Dane Coles", "Liam Coltman", "Joe Moody", "Ofa Tuungafasi", "George Bridge"};
  string fullNameLower [6] {"ardie savea", "dane coles", "liam coltman", "joe moody", "ofa tuungafasi", "george bridge"};
  float successfulTackles [6] {96, 97, 92, 91, 69, 100};
  int highest = successfulTackles[0];
  int lowest = successfulTackles[0];
  int highSubscript = 0;
  int lowSubscript = 0;
  float avgPercentage = 0;
  int menuSelection = 0;
  int z = 0;
  int az = 0;

  while (z == 0) {
    cout << "1). Display player with the highest stat\n2). Display player with the lowest stat\n3). Display average of the stat\n4). Search for a player by name and get the stat\n5). Show all players and their stats\n6). End program\n";
    cin >> menuSelection;



    if (menuSelection == 1){
      // menu option 1
      for (int c = 1; c < 6; c++) {
        if (highest < successfulTackles[c]) {
          highest = successfulTackles[c];

          highSubscript = c;
        }
      }

      cout << endl << endl << endl;
      cout << fullName[highSubscript] << " has the highest succesful tackle %: " << highest << "%";
      cout << "\n\n";
    }



    if (menuSelection == 2) {
      // menu option 2
      for (int d = 1; d < 6; d++) {
        if(lowest > successfulTackles[d]) {
          lowest = successfulTackles[d];

          lowSubscript = d;
        }
      }

      cout << endl << endl << fullName[lowSubscript] << " has the lowest successful tackle %: " << lowest <<   "%";
      cout << "\n\n";
    }



    if (menuSelection == 3) {
      // menu option 3
      for (int e = 0; e < 6; e++) {
        avgPercentage = avgPercentage + successfulTackles[e];
      }
      avgPercentage = avgPercentage / 6;


      cout << endl << avgPercentage << "% is the average percentage of successful tackles";
      cout << "\n\n";
    }




    if (menuSelection == 4) {
      // menu option 4
      string playerName = "";
      int ab = 0;
      int g = 0;

      cout << "\nEnter the full name of the player whom\'s stats you want to see\n";
      cin.ignore();
      getline(cin, playerName);

      transform(playerName.begin(), playerName.end(), playerName.begin(), ::tolower);

      while (az >= 0 && az < 6) {

        if (playerName == fullNameLower[az]) {
          cout << fullName[az] << " has " << successfulTackles[az] << "% successful tackles";
          g++;
        }

        az++;
      }

      if (g != 1) {
        cout << "\nThere was an error executing your request\n\n";
      }

      cout << "\n\n";
    }




    if (menuSelection == 5) {
      // menu option 5
      for (int f = 0; f < 6; f++) {
        cout << "\n" << fullName[f] << " has " << successfulTackles[f] << "% successful tackles";
        cout << "\n";
      }
      cout << "\n\n";
    }




    if (menuSelection == 6) {
      // menu option 6
      z = 1;
      // just end the larger loop that encompasses this whole scenario
      cout << "\n\n";
    }
  }
}
