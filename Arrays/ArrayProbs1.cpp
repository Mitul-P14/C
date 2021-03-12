#include <iostream>

using namespace std;

int main() {
  //  Displaying odd numbers

  int odds [18] = {23, 45, 78, 77, 41, 40, 52, 55, 78, 61, 10, 21, 17, 15, 60, 31, 32, 50};

  for (int x = 0; x <= 17; x++) {
    if (odds[x]%2 != 0) {
      cout << endl << odds[x];
    }
  }



  //  Days in each month

  int days[ ] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayRequested = 0;

  cout << "\n\n\nWhat month would you like to see the day count of? (enter in number format)\n";
  cin >> dayRequested;

  if (dayRequested < 1 || dayRequested > 12) {
    cout << "\nINVALID MONTH NUMBER";
  }

  else {
    cout << "Number of Days: " << days[dayRequested - 1];
  }



  //  Scores

  int score[ ] {34, 56, 76, 98, 88, 23, 58, 90};
  int y = 1;
  int low = score[0];

  while (y < 7) {
    if (score[y] < low){
      low = score[y];
    }
    y++;
  }
  cout << "\n\n\nLow is " << low << endl;



  //  Prices

  float prices[10] {10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, 0.56, 14.75, 4.78};
  float priceIncrease = 0;

  cout << "\n\n\nBy what prices do you want to increase the rest by? ";
  cin >> priceIncrease;

  for (int z = 0; z <= 9; z++) {
    prices[z] = prices[z] + priceIncrease;

    cout << endl << prices[z];
  }



  //  Test Scores array problem?

  int testScores[] {90, 54, 23, 75, 67, 89, 99, 100, 34, 99, 97, 76, 73, 72, 56, 73, 72, 20, 86, 99};
  int accum = 0;
  int minimum = 0;
  int maximum = 0;

  cout << "\n\n\nEnter a minumum score: ";
  cin >> minimum;
  cout << "Enter a maximum score: ";
  cin >> maximum;

  for (int c = 0; c <= 20; c++) {
    if (testScores[c] >= minimum && testScores[c] <= maximum) {
      accum++;
    }
  }
  cout << "Number of students within the range: " << accum;



  //  Cancer incidents

  int cancerIncidents[] {26027, 2697, 28611, 15702, 164830, 22496, 21362, 5569, 3098, 109123, 47279, 7076, 7643, 66953,
  32848, 17473, 15022, 26550, 24764, 8708, 29041, 37484, 53693, 28790, 15494, 32710, 5588,
  9246,7898, 50734, 8975, 110766, 50009, 3685, 61726, 19245, 20228, 78385, 6347, 25692,
  4312,35175, 103369, 9878, 3674, 37431, 35945, 11383, 31000, 2586
  };
  int high2 = cancerIncidents[0];
  int low2 = cancerIncidents[0];
  int g = 1;
  int totalIncidents = 0;
  float avgIncidents = 0;

  while (g < 49) {
    if(cancerIncidents[g] > high2){
      high2 = cancerIncidents[g];
    }
    g++;
  }
  cout << "\n\n\nThe High is: " << high2;

  g = 0;

  while (g < 49) {
    if (cancerIncidents[g] < low2){
      low = cancerIncidents[g];
    }
    g++;
  }
  cout << "\nThe Low is: " << low2;


  for (int t = 0; t <= 49; t++) {
    totalIncidents = totalIncidents + cancerIncidents[t];
  }
  cout << "\nTotal Incident Count: " << totalIncidents;

  avgIncidents = totalIncidents / 50;
  cout << "\nThe Average of all incidents per year is: " << avgIncidents;

}
