#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
using std::transform;

string answer;
string state_sc1;
float GPA_sc2 = 0.0;
int credits_sc2 = 0;
int points_sc3 = 0;
int rebounds_sc3 = 0;
int assists_sc3 = 0;
int age_sc4 = 0;
float paid_sc4 = 0.00;
float weight_sc5 = 0.0;
float miles_sc5 = 0.0;
int speed_sc6 = 0;
int limit_sc6 = 0;
float test1_sc7 = 0.0;
float test2_sc7 = 0.0;
float test3_sc7 = 0.0;
float testf = 0.0;
string HO;

int main() {
  //start scenario 1
  cout << "\nTo find out whether you have one of you stores near you, you must enter the 2-letter abbreviation of you state.\n";
  cout << "The 2-letter abbreviation of my state is ";
  cin >> state_sc1;

  transform(state_sc1.begin( ), state_sc1.end( ), state_sc1.begin( ), ::toupper);

  if(state_sc1 == "IN" || state_sc1 == "IL"){
    cout << "\nWe have a location in your state!";
  }

  else{
    cout << "\nUnfortunately, we do not have a location in your state.";
  }
  //end sceneario 1

  //start scenario 2
  cout << "\n\nIn order to find whether you are eligible for a Honors Diploma, you must enter your GPA and credit hours\n";
  cout << "GPA: ";
  cin >> GPA_sc2;
  cout << "Credit Hours: ";
  cin >> credits_sc2;

  if(GPA_sc2 < 3.5 || credits_sc2 < 70){
    cout << "\nYou are eligible for a Regular Diploma but not a Honors Diploma";
  }

  else{
    cout << "\nYou are eligible for a Honors Diploma";
  }
  cout << "\nIf you wish to move on to the next scenario, press any key followed by enter ";
  cin >> answer;
  //end scenario 2

  //start scenario 3
  cout << "\n\nSo, you think you are a Triple Double, huh? \nI'll be the judge of that.";
  cout << "\nHow many points were scored? ";
  cin >> points_sc3;
  cout << "How many assists were performed? ";
  cin >> assists_sc3;
  cout << "How many rebounds were done? ";
  cin >> rebounds_sc3;

  if(points_sc3 >= 10 && assists_sc3 >= 10 && rebounds_sc3 >= 10){
    cout << "\nWow! You are a Triple Double!";
  }

  else{
    cout << "\nHa! I knew it! You aren't no Triple Double!";
  }
  cout << "\nIf you wish to move on to the next scenario, press any key followed by enter ";
  cin >> answer;
  //end scenario 3

  //start Scenario 4
  cout << "\n\nWhat is your total cost? $ ";
  cin >> paid_sc4;
  cout << "What is your age? ";
  cin >> age_sc4;

  if(age_sc4 <= 5 || age_sc4 >= 65){
    cout << "Congrats! You qualify for our 10% discount! ";

    paid_sc4 = paid_sc4 * 0.9;

    cout << "\nYour new price is " << paid_sc4;
  }

  else{
    cout << "I\'m sorry. You don\'t qualify for our 10% discount.";
  }
  //end scenario 4

  //start scenario 5
  cout << "\n\nWhat is the weight of the freight? ";
  cin >> weight_sc5;
  cout << "What is the miles of the freight? ";
  cin >> miles_sc5;

  if(miles_sc5 < 400 && weight_sc5 < 1000){
    cout << "It will be delivered in 3 to 5 days!";
  }
  else{
    cout << "It will be delivered in 5 to 7 days!";
  }
  //end scenario 5

  //start scenario 6
  cout << "\n\nWhat was the speed limit? ";
  cin >> limit_sc6;
  cout << "What speed were you driving at? ";
  cin >> speed_sc6;

  if((limit_sc6 + 15) <= speed_sc6){
    cout << "You owe 200 dollars and are required to attend traffic school.";
  }
  else{
    if((limit_sc6 + 14) <= speed_sc6){
      cout << "You owe 100 dollars.";
    }
    else{
      cout << "You are all good. Have a nice rest of your day!";
    }
  }
  //end scenario 6

  //start scenario 7
  cout << "\n\nWhat was your score on the first test? ";
  cin >> test1_sc7;
  cout << "What was your score on the second test? ";
  cin >> test2_sc7;
  cout << "What was your score on the third test? ";
  cin >> test3_sc7;

  if(test1_sc7 >= 0 && test2_sc7 >= 0 && test3_sc7 >= 0){
    testf = (test1_sc7 + test2_sc7 + test3_sc7) / 3;
    printf("%.2f", testf);
    cout << " is the average of your three tests.";
  }
  else{
    cout << "You did not enter acceptable values for one (or more) of the test scores. Please try again. ";
  }
  //end scenario 7

  //start scenario 8
  cout << "\n\nWhere are you?\n";
  cin.ignore();
  getline(cin,HO);
  transform(HO.begin(), HO.end(), HO.begin(), ::tolower);

  if(HO == "hawaii" || HO == "oregon")
        cout << "Your shipping fee is then $30";
  else
        cout << "Your shipping fee is then $20";
  //end scenario 8
}

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
using std::transform;

string answer;
string state_sc1;
float GPA_sc2 = 0.0;
int credits_sc2 = 0;
int points_sc3 = 0;
int rebounds_sc3 = 0;
int assists_sc3 = 0;
int age_sc4 = 0;
float paid_sc4 = 0.00;
float weight_sc5 = 0.0;
float miles_sc5 = 0.0;
int speed_sc6 = 0;
int limit_sc6 = 0;
float test1_sc7 = 0.0;
float test2_sc7 = 0.0;
float test3_sc7 = 0.0;
float testf = 0.0;
string HO;

int main() {
  //start scenario 1
  cout << "\nTo find out whether you have one of you stores near you, you must enter the 2-letter abbreviation of you state.\n";
  cout << "The 2-letter abbreviation of my state is ";
  cin >> state_sc1;

  transform(state_sc1.begin( ), state_sc1.end( ), state_sc1.begin( ), ::toupper);

  if(state_sc1 == "IN" || state_sc1 == "IL"){
    cout << "\nWe have a location in your state!";
  }

  else{
    cout << "\nUnfortunately, we do not have a location in your state.";
  }
  //end sceneario 1

  //start scenario 2
  cout << "\n\nIn order to find whether you are eligible for a Honors Diploma, you must enter your GPA and credit hours\n";
  cout << "GPA: ";
  cin >> GPA_sc2;
  cout << "Credit Hours: ";
  cin >> credits_sc2;

  if(GPA_sc2 < 3.5 || credits_sc2 < 70){
    cout << "\nYou are eligible for a Regular Diploma but not a Honors Diploma";
  }

  else{
    cout << "\nYou are eligible for a Honors Diploma";
  }
  cout << "\nIf you wish to move on to the next scenario, press any key followed by enter ";
  cin >> answer;
  //end scenario 2

  //start scenario 3
  cout << "\n\nSo, you think you are a Triple Double, huh? \nI'll be the judge of that.";
  cout << "\nHow many points were scored? ";
  cin >> points_sc3;
  cout << "How many assists were performed? ";
  cin >> assists_sc3;
  cout << "How many rebounds were done? ";
  cin >> rebounds_sc3;

  if(points_sc3 >= 10 && assists_sc3 >= 10 && rebounds_sc3 >= 10){
    cout << "\nWow! You are a Triple Double!";
  }

  else{
    cout << "\nHa! I knew it! You aren't no Triple Double!";
  }
  cout << "\nIf you wish to move on to the next scenario, press any key followed by enter ";
  cin >> answer;
  //end scenario 3

  //start Scenario 4
  cout << "\n\nWhat is your total cost? $ ";
  cin >> paid_sc4;
  cout << "What is your age? ";
  cin >> age_sc4;

  if(age_sc4 <= 5 || age_sc4 >= 65){
    cout << "Congrats! You qualify for our 10% discount! ";

    paid_sc4 = paid_sc4 * 0.9;

    cout << "\nYour new price is " << paid_sc4;
  }

  else{
    cout << "I\'m sorry. You don\'t qualify for our 10% discount.";
  }
  //end scenario 4

  //start scenario 5
  cout << "\n\nWhat is the weight of the freight? ";
  cin >> weight_sc5;
  cout << "What is the miles of the freight? ";
  cin >> miles_sc5;

  if(miles_sc5 < 400 && weight_sc5 < 1000){
    cout << "It will be delivered in 3 to 5 days!";
  }
  else{
    cout << "It will be delivered in 5 to 7 days!";
  }
  //end scenario 5

  //start scenario 6
  cout << "\n\nWhat was the speed limit? ";
  cin >> limit_sc6;
  cout << "What speed were you driving at? ";
  cin >> speed_sc6;

  if((limit_sc6 + 15) <= speed_sc6){
    cout << "You owe 200 dollars and are required to attend traffic school.";
  }
  else{
    if((limit_sc6 + 14) <= speed_sc6){
      cout << "You owe 100 dollars.";
    }
    else{
      cout << "You are all good. Have a nice rest of your day!";
    }
  }
  //end scenario 6

  //start scenario 7
  cout << "\n\nWhat was your score on the first test? ";
  cin >> test1_sc7;
  cout << "What was your score on the second test? ";
  cin >> test2_sc7;
  cout << "What was your score on the third test? ";
  cin >> test3_sc7;

  if(test1_sc7 >= 0 && test2_sc7 >= 0 && test3_sc7 >= 0){
    testf = (test1_sc7 + test2_sc7 + test3_sc7) / 3;
    printf("%.2f", testf);
    cout << " is the average of your three tests.";
  }
  else{
    cout << "You did not enter acceptable values for one (or more) of the test scores. Please try again. ";
  }
  //end scenario 7

  //start scenario 8
  cout << "\n\nWhere are you?\n";
  cin.ignore();
  getline(cin,HO);
  transform(HO.begin(), HO.end(), HO.begin(), ::tolower);

  if(HO == "hawaii" || HO == "oregon")
        cout << "Your shipping fee is then $30";
  else
        cout << "Your shipping fee is then $20";
  //end scenario 8
}
