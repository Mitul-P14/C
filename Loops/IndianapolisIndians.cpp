#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <chrono>
#include <thread>
#include <iomanip>

//variables placed here becuase of interferences if inside loop
int foodQuantity = 0;
int rentalFacility = 0;
int foodCost = 0;

using namespace std;
using std::transform;
using namespace chrono;
using namespace this_thread;

int main() {
  // introductory set up
  cout << setw(92);   // used to create consistent sapces when "centering" text / titles
  cout << "Indianapolis Indians Rental Data Calculator\n";
  cout << "#################\n";

  string a1 = "Please Note: A transcript of this information will be displayed at the end";
  for (char c: a1) {
    sleep_for(milliseconds(40));
    cout << c << flush;
  }
  cout << "\n#################\n\n";





  // variables
  string lastName = " ";
  // cin the name with chronodelay added onto it
  string a = "Enter your last name: ";
  for (char c: a) {
    sleep_for(milliseconds(75));
    cout << c << flush;
  }

  cin.ignore();
  getline(cin, lastName);





  // variables for upcoming section
  int peopleNumber = 0;
  // cin the number of people with chronodelay
  string b = "\nNumber of people that will be served at this event: ";
  for (char c: b) {
    sleep_for(milliseconds(75));
    cout << c << flush;
  }

  cin >> peopleNumber;

  if (peopleNumber > 1200) {    // self explanatory : they have too many people and we cant have that
      cout << "There is no capabilities to host your party. I\'m sorry";
      return 0;
  }
  cout << "\n#################\n\n";   // just a divider



  // variables for upcoming section
  int foodYes_No = 0;



  // variables
  int invalidCheck = 0;
  int foodChoice = 0;


  while (invalidCheck == 0) {   // for loop inorder to counteract invalid inputs and allow more chances without program reboot

  // food section with chronodelay
  string c = "Would you like there to be food served at this event? (1 for yes and 0 for no) ";
  for (char c: c) {
    sleep_for(milliseconds(75));
    cout << c << flush;
  }

  cin >> foodYes_No;
    // if statements for whether they want food or not
    if (foodYes_No == 1) {   // yes to food

      // Pre- cautionary while loop (^) cancel
      invalidCheck = 1;



      //  which food to be served with chronodelay
      string d = "\n\nThere are many food choices that can be chosen from.\n";
      for (char c: d) {
        sleep_for(milliseconds(75));
        cout << c << flush;
      }
      cout << "1.\tPerfect Game";
      sleep_for(milliseconds(150));
      cout << "\n2.\tBallpark BBQ";
      sleep_for(milliseconds(150));
      cout << "\n3.\tDouble Play";
      sleep_for(milliseconds(150));
      cout << "\n4.\tSafe at Third";
      sleep_for(milliseconds(150));
      cout << "\n5.\tThe Lead Off\n\n";

      string e = "Please enter the number choice that you would like to order: ";
      for (char c: e) {
        sleep_for(milliseconds(75));
        cout << c << flush;
      }
      cin >> foodChoice;

      // now onto the food quantity to be served
      if (foodChoice == 1) {    // Perfect Game
        string f = "\nYou have chosen the \"Perfect Game\" food choice.\n";
        for (char c: f){
          sleep_for(milliseconds(75));
          cout << c << flush;
        }
      }

      if (foodChoice == 2) {    // Ballpark BBQ
        string g = "\nYou have chosen the \"Ballpark BBQ\" food choice.\n";
        for (char c: g){
          sleep_for(milliseconds(75));
          cout << c << flush;
        }
      }

      if (foodChoice == 3) {    // Double Play
        string h = "\nYou have chosen the \"Double PLay\" food choice.\n";
        for (char c: h){
          sleep_for(milliseconds(75));
          cout << c << flush;
        }
      }

      if (foodChoice == 4) {    // Safe at Third
        string i = "\nYou have chosen the \"Safe at Third\" food choice.\n";
        for (char c: i){
          sleep_for(milliseconds(75));
          cout << c << flush;
        }
      }

      if (foodChoice == 5) {    // The Lead Off
        string j = "\nYou have chosen the \"The Lead Off\" food choice.\n";
        for (char c: j){
          sleep_for(milliseconds(75));
          cout << c << flush;
        }
      }

      // recommended serving
      float recommendedServing = 0;
      recommendedServing = peopleNumber / 8;
      recommendedServing = ceil(recommendedServing);


      cout << "\nQuantity of food to be ordered? One serves 8 people. " << recommendedServing << " is recommended\n";
      cin >> foodQuantity;
      cout << endl << endl;
    }

    if (foodYes_No == 0) {   // No to food
      cout << "\n\nFood will not be served\n\n";
      invalidCheck = 1;
    }

    if (foodYes_No != 0 && foodYes_No != 1) {   // simply to restart loop with an invalid input
      string k = "\nThat was not a valid response\nPlease Try Again\n\n";
      for (char c: k) {
        sleep_for(milliseconds(125));
        cout << c << flush;
      }

      invalidCheck = 0;
    }
  }

  int x = 0;

  while (x == 0) {

    x = 1;

    // rental facility

    string l = "\nOnly rental facilities capable of holding your guest size will be shown  (You may need to scroll to view all options)\n";
    for (char c: l) {
      sleep_for(milliseconds(75));
      cout << c << flush;
    }

    cout << "\n\n##################\n\n";    // divider

    if (peopleNumber <= 125) {    // spaces for only people with less than 125
      cout << "\n1).  The Cove - seated - Capacity: 125";
      cout << "\n\tAll Day Rental: $2,000";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $1,500";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n2).  The Cove - not seated - Capacity: 150";
      cout << "\n\tAll Day Rental: $2,000";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $1,500";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n3).  The Left Picnic Area - seated - Capacity: 500";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n4).  The Cove plus Left Picnic Area - seated - Capacity: 625";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour";


      cout << "\n\n5).  The Left Picnic Area - not seated - Capacity: 1,000";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    if (peopleNumber > 125 && peopleNumber <= 150) {
      cout << "\n\n2).  The Cove - not seated - Capacity: 150";
      cout << "\n\tAll Day Rental: $2,000";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $1,500";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n3).  The Left Picnic Area - seated - Capacity: 500";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n4). The Cove plus Left Picnic Area - seated - Capacity: 625";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour";


      cout << "\n\n5).  The Left Picnic Area - not seated - Capacity: 1,000";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    if (peopleNumber > 150 && peopleNumber <= 500) {
      cout << "\n\n3).  The Left Picnic Area - seated - Capacity: 500";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n4).  The Cove plus Left Picnic Area - seated - Capacity: 625";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour";


      cout << "\n\n5).  The Left Picnic Area - not seated - Capacity: 1,000";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    if (peopleNumber > 500 && peopleNumber <= 625) {
      cout << "\n\n4).  The Cove plus Left Picnic Area - seated - Capacity: 625";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour";


      cout << "\n\n5).  The Left Picnic Area - not seated - Capacity: 1,000";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    if (peopleNumber > 625 && peopleNumber <= 1000) {
      cout << "\n\n5).  The Left Picnic Area - not seated - Capacity: 1,000";
      cout << "\n\tAll Day Rental: $2,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $1,500";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,000";
      cout << "\n\tEach Additional Hour: $500 per hour";


      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    if (peopleNumber > 1000 && peopleNumber <= 1200) {
      cout << "\n\n6).  The Cove plus Left Picnic Area - not seated - Capacity: 1200";
      cout << "\n\tAll Day Rental: $3,500";
      cout << "\n\t3 Hour Business Hour (9am-5pm) Rental: $2,000";
      cout << "\n\t3 Hour Non-Business Hour Rental: $2,500";
      cout << "\n\tEach Additional Hour: $750 per hour\n";
    }

    cin >> rentalFacility;

    if (rentalFacility < 1 || rentalFacility > 6)
         x = 0;

  }



  // variable for if they are valid to get the day discount
  int dayDiscountYes_No = 0;
  int z = 0;
  while(z == 0) {    // used to counteract invalid responses

    z++;    // simplier way to negate loop but keep capabilitiews to also set it to repeat

    string m = "\n\nIs this rental on a Monday, Tuesday, Wednesday, or a Friday?\n";
    for(char c: m) {
      sleep_for(milliseconds(75));
      cout << c << flush;
    }
    cout << "0 for yes and 1 for no  ";

    cin >> dayDiscountYes_No;

    if (dayDiscountYes_No > 1 || dayDiscountYes_No < 0) {
      string n = "\n\nINVALID\n\n";
      for(char c: n) {
        sleep_for(milliseconds(75));
        cout << c << flush;
      }

      z = 0;
    }
  }


  // printed transcript
  for (int i = 0; i < 15; i++) {
    cout << "~\n";
  }
// name
  cout << "\nLast Name: ";
  string b1 = lastName;
  for(char c: b1) {
      sleep_for(milliseconds(125));
      cout << c << flush;
  }


// people attenting
  string b2 = "\n\nYou have ";
  for(char c: b2) {
      sleep_for(milliseconds(125));
      cout << c << flush;
  }
  cout << peopleNumber;
  string b3 = " people attending\n";
  for(char c: b3) {
      sleep_for(milliseconds(125));
      cout << c << flush;
  }




// food yes or no
  string c1 = "\nYou said ";
  for(char c: c1) {
      sleep_for(milliseconds(125));
      cout << c <<flush;
  }
  switch (foodYes_No) {
      case 1:
        cout << "yes ";
        break;
      case 2:
        cout << "no ";
        break;
      default:
        break;
  }
  string c2 = "to food\n";
  for(char c: c2) {
      sleep_for(milliseconds(125));
      cout << c << flush;
  }




  // food choice
  if (foodYes_No == 1) {
      string c3 = "\nYou chose to get ";
      for(char c: c3) {
          sleep_for(milliseconds(125));
          cout << c << flush;
      }
      cout << foodQuantity;
      string d1 = " orders of ";
      for(char c: d1) {
          sleep_for(milliseconds(125));
          cout << c << flush;
      }


// variable for food cost
      switch (foodChoice) {
          case 1:
            cout << "The Perfect Game";
            foodCost = 225 * foodQuantity;
            break;
          case 2:
            cout << "The Ballpark BBQ";
            foodCost = 120 * foodQuantity;
            break;
          case 3:
            cout << "The Double Play";
            foodCost = 125 * foodQuantity;
            break;
          case 4:
            cout << "The Safe at Third";
            foodCost = 120 * foodQuantity;
            break;
          case 5:
            cout << "The Lead Off";
            foodCost = 100 * foodQuantity;
            break;
      }
  }

// i forgot about the time so i implememted it here
  int facilityCost = 0;
  int bussinessHoursYes_No = 0;
  int rentalCostoDiscount = 0;   // with discount
  int rentalCostxDiscount = 0;   // wihtout discount
  int rentalHours = 0;
  int howLong_rental = 0;
  // rental facility
  cout << "\n\nWill your rental be one full day? (1 yes, 0 no) ";
  cin >> howLong_rental;
  if(howLong_rental == 0) {
      cout << "\n\nHow many hours will your rental be?";
      cin >> rentalHours;
      cout << "\n\nWill these hours be during bussiness hours(9AM - 5PM)? (1 yes, 0 no)";
      cin >> bussinessHoursYes_No;
  }
  string d2 = "\n\nYou chose ";
  for( char c: d2) {
      sleep_for(milliseconds(125));
      cout << c << flush;
  }



// evaluating cost
  switch (rentalFacility) {
      case 1:
        cout << "The Cove - seated";
        if(howLong_rental == 1) {
            facilityCost = 2000;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 1000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 1500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }
        }
        break;
      case 2:
        cout << "The Cove - not seated";
        if(howLong_rental == 1) {
            facilityCost = 2000;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 1000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 1500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }
        }
        break;
      case 3:
        cout << "The Left Picnic Area - seated";
        if(howLong_rental == 1) {
            facilityCost = 2500;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 1500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 2000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }
        }
        break;
      case 4:
        cout << "The Cove plus Left Picnic Area - seated";
        if(howLong_rental == 1) {
            facilityCost = 3500;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 2000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (750 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 2500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (7500 * rentalHours);
              }
          }
        }
        break;
      case 5:
        cout << "The Left Picnic Area - not seated";
        if(howLong_rental == 1) {
            facilityCost = 2500;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 1500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 2000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (500 * rentalHours);
              }
          }
        }
        break;
      case 6:
        cout << "The Cove plus Left Picnic Area - not seated";
        if(howLong_rental == 1) {
            facilityCost = 3500;
        }
        if (howLong_rental == 0) {
          if (bussinessHoursYes_No == 1) {
              rentalHours = rentalHours - 3;
              facilityCost = 2000;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (750 * rentalHours);
              }
          }

          if (bussinessHoursYes_No == 0) {
              rentalHours = rentalHours - 3;
              facilityCost = 2500;
              if (rentalHours >= 1) {
                  facilityCost = facilityCost + (750 * rentalHours);
              }
          }
        }
        break;
  }



  //sending out subtotals
  cout << "\n\n=========================================================================================\n\n";
  cout << "Total Food Cost: " << foodCost << endl;
  cout << "\n\nTotal Facilty Cost: " << facilityCost;
  rentalCostxDiscount = foodCost + facilityCost;
  if (dayDiscountYes_No == 0) {
      cout << "\nDisount = 10%";
      rentalCostoDiscount = rentalCostxDiscount * 0.90;
  }
  if (dayDiscountYes_No == 1) {
      cout << "\nDiscount = 0%";
      rentalCostoDiscount = rentalCostxDiscount;
  }

  cout << "\n\n\nTOTAL OWED: " << rentalCostoDiscount;

}
