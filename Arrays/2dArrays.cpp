#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
  int fries [2][7] {
    {6, 9, 22, 34, 1, 90, 0},
    {39, 2, 4, 5, 7, 44, 21}
  };
  int totalFries = 0;



  // scenario one
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 7; y++) {
      totalFries = totalFries + fries[x][y];
    }
  }

  cout << "The total number of fries is: " << totalFries << endl;





  // scenario two
  string students [5][4] {  {"Kristen", "A", "P", "A"},
                            {"Evan", "P", "A", "P"},
                            {"Rylan", "P", "P", "P"},
                            {"Joe", "A", "P", "P"},
                            {"Collin", "P", "P", "P"} };
  int pCouter = 0;
  int aCounter = 0;


  for (int a = 0; a < 5; a++) {
    for (int b = 0; b < 4; b++) {
      if (students[a][b] == "P")
        pCouter++;
      if (students[a][b] == "A")
        aCounter++;
    }
  }

  cout << "\n\n\nTotal amount of absences: " << aCounter;
  cout << "\nTotal amount of presents: " << pCouter;






  // scenario 3
  int scores [10][2] {  {78, 90},
                        {87, 88},
                        {65, 70},
                        {56, 100},
                        {74, 72},
                        {33, 47},
                        {87, 88},
                        {73, 73},
                        {79, 83},
                        {95, 89}  };
  int highMidterm = scores[0][0];
  int highFinal = scores[0][1];

  for (int a = 0; a < 10; a++) {
    if (scores[a][0] > highMidterm)
      highMidterm = scores [a][0];

    if (scores [a][1] > highFinal)
      highFinal = scores[a][1];

  }

  cout << "\n\n\nHighest midterm score: " << highMidterm;
  cout << "\nHighest final score: " << highFinal;







  // scenario 4
  cout << "\n\n";
  int grades[28][5] { { 14,22,13,24,17 },
                    { 13,22,18,24,18 },
                    { 12,18,18,24,15},
                    { 8,22,18,21, 11},
                    { 9,22,0,23, 0},
                    { 15,22,18,24,18},
                    { 15,22,18,23,20},
                    { 15,22,18,24,19},
                    { 13,22,18,24,19},
                    { 11,22,17,20,19},
                    { 14,0,9,15,14},
                    { 12,0,16,17,10 },
                    { 14,22,18,23,19},
                    { 12,22,18,24,18},
                    { 8,15,14,20,14},
                    { 13,14,18,22,0},
                    { 14,22,16,24,0},
                    { 15,22,18,23,17},
                    { 13,22,16,22,12},
                    { 15,22,18,24,18},
                    { 10,22,18,24,14},
                    { 15,22,18,24,19},
                    { 15,22,18,24,20},
                    { 15,22,0,21,13},
                    { 15,22,18,24,19},
                    { 15,22,18,24,20},
                    { 15,22,18,24,17 },
                    { 14,21,18,24,18 }  };
  float average [28] {};
  int tempAverage = 0;
  float highAverage = average[0];
  int missingCounter = 0;

  for (int a = 0; a < 28; a++) {
    for (int b = 0; b < 5; b++) {
      tempAverage = tempAverage + grades[a][b];
    }
    average[a] = tempAverage / 5.0;
    tempAverage = 0;
    cout << "\nThe number " << a + 1 << " student has an average of " << average[a];
  }
  cout << "\n\n";

  for (int a = 0; a < 28; a++) {
    if (average[a] > highAverage)
      highAverage = average[a];
  }
  cout << "The highest average is " << highAverage;

  for (int a = 0; a < 28; a++) {
    for (int b = 0; b < 5; b++) {
      if (grades[a][b] == 0)
        missingCounter++;
    }
  }
  cout << "\n\nNumber of times that an assignment was marked missing as a whole: " << missingCounter;
}
