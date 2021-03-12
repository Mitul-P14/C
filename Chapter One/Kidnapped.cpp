#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string answer;
int lengthDrag = 0;
int widthDrag = 0;
int roomDragA = 0;
int roomDragP = 0;
float carTank = 0.0;
float carMileage = 0.0;
float carDistance = 0.0;
string nameLast;
string nameFirst;
int stationHours = 0;
float stationPay = 0.00;
float stationWage = 0.00;
float gallonCost = 0.00;
int gallonsBought = 0;
float totalGCost = 0.00;
int gallonRoundedCost = 0;
int hours = 0;
int hours_seconds = 0;
int minutes = 0;
int minutes_seconds = 0;
int seconds = 0;
int seconds_TOTAL = 0;
const int ninja_IN_cart = 20;
int ninjaRemainder = 0;
int ninjaGround = 0;
int ninjaNeedcart = 0;
int secondsSEVEN = 0;
int hoursSEVEN = 0;
int minutesSEVEN = 0;

int main() {
  cout << "Scenario 1: The Dragon's Lair!";
  cout << "   \t\t\t\t\t\t    \t\t\t                                             /===-_---~~~~~~~~~------____";
  cout << "\n  \t\t\t  \t\t\t\t\t\t                                            |===-~___                _,-'";
  cout << "\n    \t\t\t  \t\t\t\t\t\t              -==\\\\                         `//~\\\\   ~~~~`---.___.-~~";
  cout << "\n   \t\t\t  \t\t\t\t\t\t           ______-==|                         | |  \\\\           _-~`";
  cout << "\n \t\t\t \t\t\t\t\t\t        __--~~~  ,-/-==\\\\                        | |   `\\        ,\'";
  cout << "\n \t\t\t \t\t\t\t\t\t     _-~       /'    |  \\\\                      / /      \\      /";
  cout << "\n\t\t\t  \t\t\t\t\t\t   .'        /       |   \\\\                   /' /        \\   /'";
  cout << "\n\t\t\t \t\t\t\t\t\t   /  ____  /         |    \\`\\.__/-~~ ~ \\ _ _/'  /          \\/'";
  cout << "\n\t\t\t\t\t\t\t\t\t   /-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`";
  cout << "\n \t\t\t \t\t\t\t\t\t                   \\_|      /        _)   ;  ),   __--~~";
  cout << "\n   \t\t\t \t\t\t\t\t\t                   '~~--_/      _-~/-  / \\   '-~ \\";
  cout << "\n   \t\t\t  \t\t\t\t\t\t                 {\\__--_/}    / \\\\_>- )<__\\      \\";
  cout << "\n   \t\t\t   \t\t\t\t\t\t                /'   (_/  _-~  | |__>--<__|      |";
  cout << "\n   \t\t\t   \t\t\t\t\t\t               |0  0 _/) )-~     | |__>--<__|     |";
  cout << "\n    \t\t\t  \t\t\t\t\t\t               / /~ ,_/       / /__>---<__/      |";
  cout << "\n \t\t\t\t\t\t    \t\t\t               o o _//        /-~_>---<__-~      /";
  cout << "\n  \t\t\t\t\t\t  \t\t\t                (^(~          /~_>---<__-      _-~";
  cout << "\n  \t\t\t\t\t\t  \t\t\t               ,/|           /__>--<__/     _-~";
  cout << "\n   \t\t\t\t\t\t   \t\t\t          ,//('(          |__>--<__|     /                  .----_";
  cout << "\n \t\t\t\t\t\t\t\t\t              ( ( '))          |__>--<__|    |                 /' _---_~\\";
  cout << "\n \t\t\t\t\t\t\t\t\t           `-)) )) (           |__>--<__|    |               /'  /     ~\\`\\";
  cout << "\n \t\t\t  \t\t\t\t\t\t        ,/,'//( (             \\__>--<__\\    \\            /'  //        ||";
  cout << "\n \t\t\t \t\t\t\t\t\t       ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'";
  cout << "\n \t\t\t \t\t\t\t\t\t     `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/";
  cout << "\n \t\t\t \t\t\t\t\t\t   ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~";
  cout << "\n \t\t\t \t\t\t\t\t\t    ;'( ')/ ,)(                              ~~~~~~~~~~";
  cout << "\n\t\t\t  \t\t\t\t\t\t   ' ') '( (/";
  cout << "\n \t\t\t \t\t\t\t\t\t     '   '  `";
  cout << endl;

  //My dragon kidnapper wants to install some carpets. Area and Perimeter calculator;
  cout << "So, you want to add some fire-resistent carpets, ehh? " << endl << "Whole number Length: ";

  cin >> lengthDrag;

  cout << "\nDont be a fool! You have yet to tell me one more crucial piece of information!" << endl << "Whole number Width: ";

  cin >> widthDrag;

  roomDragA = widthDrag * lengthDrag;

  cout << "\nThere, you beast! Here's your room's area!" << endl << "Room's Area = " << roomDragA << endl;

  roomDragP = (widthDrag * 2) + (lengthDrag * 2);

  cout << "This one is your Perimeter" << endl << "Room's Perimeter = " << roomDragP << endl << endl << "May I please go now?" << endl;
  cout << "\tDragon: If you must. You should be grateful! I put up silently with all of your foul words!" << endl << "Sure. Whatever, loser!";
  cout << endl << endl;

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;

  //Scenario 2 gas mileage capabilties

  cout << " _.-.___\\__";
  cout << "\n|  _      _`-";
  cout << "\n'-(_)----(_)--`";

  cout << "\n\n\n\nScenario 2: The Car Dealership!";
  cout << "\nAhh, the glorious Toyaota dealarship!" << endl << "I guess I should \"borrow\" the car with the gas mileage" << endl;
  cout << "Alexa! What car should I take?" << endl << "\tI\'m sorry. I didn\'t quite get that." << endl;
  cout << "Alexa! What car should I take?" << endl << "\tI\'m sorry. I didn\'t quite get that." << endl;
  cout << "ALEXA! What car! Should I! Take!?" << endl << "\tI\'m sorry. I didn\'t quite get that." << endl;
  cout << "I\'m going to disown you Alexa! I\'m going to birth my own computer AI that ISN\'T so incompetant!!" << endl;
  cout << "\tAlexa: How can I be of assitance to you?" << endl;
  cout << "You can\'t. At least not anymore." << endl << "\tComputer: Hello! How can I help you?" << endl;
  cout << "I need to find which car is best for me to \"borrow\"" << endl;
  cout << "\tOne minute, please...  .. .. .. .. .. .." << endl << "\nEnter the car's tank capacity: ";

  cin >> carTank;
  cout << "\nPlease enter the mileage: ";
  cin >> carMileage;

  carDistance = carMileage * carTank;
  cout << "\nAccording to my calculations, this car will travel " << carDistance << " miles before needing fuel";

  cout << "Thank you computer" << "\n\tAlways, Sir";

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;

  //scenario 3
  cout << "\n\n\n\nScenario 3: The Rude Gas Station Employee";
  cout << "\nUgggg. They wouldn't let me take my vlogging camera inside! I still don't get why, but she said that if I want gas...";
  cout << "I would have to WORK for it. I also need to put down a name to get the gas.";
  cout << " Computer! What name should I put. I\'m too scared to use my real name." << "\n\t Anythinng other than ";
  cout << "your real name should work just fine." << " Ok. I knew I could count on you!";

  cout << "\n\nWhat is your first name? ";
  cin >> nameFirst;
  cout << "What is your last name? ";
  cin >> nameLast;
  cout << "How long did you work for, " << nameFirst << " " << nameLast << "?";
  cin >> stationHours;
  cout << "How much were you working for, " << nameFirst << " " << nameLast << "?";
  cin >> stationPay;

  stationWage = stationPay / stationHours;

  cout << endl << endl << nameFirst << " " << nameLast << ", your hourly wage is $" << stationWage;

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;

  //Scenario 4
  cout << "\n\n\n\nScenario 4: Finally Some Gas!";
  cout << "\nAlright! Time for some gas!";

  cout <<"\n\nWhat is the cost per gallon? $";
  cin >> gallonCost;
  cout << "How many gallons did you get? ";
  cin >> gallonsBought;

  totalGCost = gallonCost * gallonsBought;
  cout << "\nYour total cost is $" << totalGCost;

  gallonRoundedCost = round(totalGCost);
  cout << "\nThe rounded cost (Why would you want this\?) is " << gallonRoundedCost;

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;



  //Scenario 5
  cout << "\n\n\n\nScenario 5: Time Calculator!!! MWAHAHA! MMMWWWWWAAAHHAHAHAHA!!";
  cout << "\n\nHey, Computer?" << "\n\tYes, sir?" << "\nCan you write me a program to calculate time in seconds \'cause I\'m bored?";
  cout << "\n\tAs you wish sire. \n\nComputing.. ... .. ... ..\n";
  cout << "\n\tInitiating Project_Time_Calculator.exe";
  cout << "\n\nMode_Select_:_Bored_\n\n";

  cout << "How much time has gone by in hours? ";
  cin >> hours;
  cout << "How much time has gone by in minutes? ";
  cin >> minutes;
  cout << "How much time has gone by in seconds? ";
  cin >> seconds;

  hours_seconds = hours * 3600;
  minutes_seconds = minutes * 60;
  seconds_TOTAL = hours_seconds + minutes_seconds + seconds;

  cout << "The seconds equivalent of the entered time is... " << seconds_TOTAL;

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;


  //Scenario 6
  cout << "\n\n\n\nScenario 6: The Forgotten Turtles!";
  cout << "\nNo way! Someone's just threw out these precious crates of turtles!";
  cout << "Computer! Write a program to know the number of carts we need on the double! Chop Chop!!";
  cout << "\n\tProgramming in session";
  cout << "\n\nComputing.. ... ... ..\n";
  cout << "Initializing....\n\n";

  cout << "How many turtles are there? ";
  cin >> ninjaGround;

  ninjaNeedcart = floor(ninjaGround / ninja_IN_cart);
  ninjaRemainder = ninjaGround % ninja_IN_cart;

  cout << "\nYou will need " << ninjaNeedcart << " carts for the turtles.";
  if (ninjaRemainder == 0)
  {
    cout << "\nNo turtles will go cart-less today because there are no \"remainder-turtles\"!";
  }

  else
  {
    cout << "\nThere will be " << ninjaRemainder << " remainder turtles.";
  }

  cout << "\n\nPress any key followed by enter to continue. ";
  cin >> answer;
  cout << endl;


  //Scenario 7
  cout << "\n\n\n\nScenario 7: The Backwards Time Calculator!!";
  cout << "\nI just had a super fun idea, Computer!";
  cout << "\n\tWhat is this latest stroke of genius?";
  cout << "\nRemeber how you made that time calculator a little bit ago?";
  cout << " How about you make another but its inverted. I say seconds and you say hours and stuff!";
  cout << "\n\tYou wish is my command. I will simply reconfigure the last program ";
  cout << "instead of re-computing and programming. Is that alright?";
  cout << "\nOf course it is!";
  cout << "\n\nIntializing.. ... .. ...\n\n";

  cout << "How many seconds have passed? ";
  cin >> secondsSEVEN;

  hoursSEVEN = floor(secondsSEVEN / 3600);
  secondsSEVEN = secondsSEVEN % 3600;
  minutesSEVEN = floor(secondsSEVEN / 60);
  secondsSEVEN = secondsSEVEN % 60;

  cout << "\nResults: \n";
  cout << hoursSEVEN << " hours have passed\n";
  cout << minutesSEVEN << " minutes have passed\n";
  cout << secondsSEVEN << " seconds have passed\n\n";

}
