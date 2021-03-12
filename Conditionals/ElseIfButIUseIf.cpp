#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using std::transform;

string answer = " ";
int height = 0;
string heart_con = " ";
string DesiredSHAPE = " ";
float pi = 3.1415;
float circle_radius = 0.0;
float circleA = 0.0;
float RECTlength = 0.0;
float RECTwidth = 0.0;
float RECTarea = 0.0;
int daysABSENT = 0;
float gradeAVG = 0.0;
string fever = " ";
string stuffy_nose = " ";
string rash = " ";
int one = 0;
int two = 0;
int three = 0;

int main()
{
  cout << "So I\'m also Mr.Kominowski's T.A. so in study hall I didn\' end up coming becuase I felt I had a duty to serve him in that time. He did need me to do things so I thought it was a higher priority duty for me to stay and help him. When I ended up being able to come, no one was ther (oh well). \n\n\n";

  //SCENARIO    UNO
  cout << "\n\nI need to know your height (inches) in order to access your eligiblity for the roller coaster.\n";
  cin >> height;
  if (height > 54)
  {
    cout << "Nice. You can ride any ride you want unless I see some heels or something. Or if you have a heart condition?\n";
    cin.ignore();
    getline(cin, heart_con);
    transform(heart_con.begin(), heart_con.end(), heart_con.begin(), ::toupper);

    if(heart_con == "Y" || heart_con == "YES" || heart_con == "YE" || heart_con == "YEA" || heart_con == "YA" || heart_con == "YEAH")
    {
      cout << "\nOh shoot! That means that you can\'t ride the Rockin Roller Coaster or the Tunnel of Doom\n";
    }
    else
    {
      cout << "\nYeah ok. You\'re good to go for any ride!\n";
    }
  }
  else
  {
    cout << "Oh... I\'m sorry to disappoint but that means that you can\'t ride the rides.\n";
  }
  cout << "\nPlease press a key followed by enter to continue.";
  cin >> answer;

  //SCENARIO    DOS
  cout << "\n\nI will find the area of something for you. Tell me, do you want the area of a cirle of a rectangle?\n";
  cin.ignore();
  getline(cin, DesiredSHAPE);
  transform(DesiredSHAPE.begin(), DesiredSHAPE.end(), DesiredSHAPE.begin(), ::tolower);
  if(DesiredSHAPE == "a circle" || DesiredSHAPE == "circle" || DesiredSHAPE == "the circle")
  {
    cout << "You have chosen \'" << DesiredSHAPE << "\'\n\n";
    cout << "What is the radius of your circle?\n";
    cin >> circle_radius;

    circleA = pi * (circle_radius * circle_radius);
    cout << "The area of your circle is " << circleA;
  }
  else if(DesiredSHAPE == "the rectangle" || DesiredSHAPE == "a rectangle" || DesiredSHAPE == "rectangle")
  {
    cout << "You have chosen \'" << DesiredSHAPE << "\'\n\n";
    cout << "Please enter the length\n";
    cin >> RECTlength;
    cout << "Please enter the width\n";
    cin >> RECTwidth;

    RECTarea = RECTwidth * RECTlength;
    cout << "The area of your rectangle is " << RECTarea;
  }
  else
        cout << "\nERROR:\nInvalid Input\n\nPlease try again";
  cout << "\nPlease press a key followed by enter to continue.";
  cin >> answer;

  //SCENARIO    TRES
  cout << "\n\nIn order to skip school, you cannot have more than a certain amount of absenses. How many days have you missed?\n";
  cin >> daysABSENT;

  if(daysABSENT <= 2)
  {
    cout << "Thank you. Now your teacher will complete the regestration.\nWhat is your grade average?\n";
    cin >> gradeAVG;

    if(gradeAVG >= 90)
    {
      cout << "There you go! You will not be required to take part in the final.";
    }
    else
    {
      cout << "Ouch! Since your grade average is less than 90%, you will be required to complete the final.";
    }
  }
  else
  {
    cout << "You have missed " << daysABSENT << " days and so do not qualify to not take the final.";
  }
  cout << "\nPlease press a key followed by enter to continue.";
  cin >> answer;

  //SCENARIO    CUATRO
  cout << "\n\nDo you have a fever?\n";
  cin.ignore();
  getline(cin, fever);
  transform(fever.begin(), fever.end(), fever.begin(), ::tolower);
  if(fever == "yes" || fever == "ye" || fever == "yea" || fever == "yeah" || fever == "y")
  {
    cout << "Do you have a rash?\n";
    cin.ignore();
    getline(cin, rash);
    transform(rash.begin(), rash.end(), rash.begin(), ::tolower);

    if(rash == "yes" || rash == "ye" || rash == "yea" || rash == "yeah" || fever == "y")
          cout << "You have the measels";
    else
           cout << "Then you have the flu";
  }
  else
  {
    cout << "You have a stuffy nose?\n";
    cin.ignore();
    getline(cin, stuffy_nose);
    transform(stuffy_nose.begin(), stuffy_nose.end(), stuffy_nose.begin(), ::tolower);
    if(stuffy_nose == "yes" || stuffy_nose == "ye" || stuffy_nose == "yea" || stuffy_nose == "yeah" || stuffy_nose == "y")
          cout << "You have a head cold";
    else
        cout << "You have hypochondria";
  }
  cout << "\nPlease press a key followed by enter to continue.";
  cin >> answer;

  //SCENARIO    CINCO
  cout << "\n\nI give thee permission to enter 3 integers (press enter after each one)\n";
  cin >> one >> two >> three;

  if(one < two && one < three)
        cout << endl << one << " is the smallest number";
  if(two < three && two < one)
        cout << endl << two << " is the smallest number";
  if(three < two && three < one)
        cout << three << " is the smallest number";
}
