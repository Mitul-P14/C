#include <iostream>

using namespace std;
  int penny = 0;
  int dollars = 0;
  int quarter = 0;
  int dime = 0;
  int nickel = 0;
  float amountDue = 0.00;
  float amountPaid = 0.00;
  float extraPaid = 0.00;

int main() {

  cout << "Scenario 1 Solution\n";

  //You Code Here
  cout << "How many pennies do you have? ";
  cin >> penny;


  dollars = (penny / 100) - ((penny%100)/100);
  cout << "You will receive " << dollars << " dollar(s)\n";
  penny = penny%100;

  quarter = (penny / 25) - ((penny%25)/25);
  cout << "You will receive " << quarter << " quarter(s)\n";
  penny = penny%25;

  dime = (penny / 10) - ((penny%10)/10);
  cout << "You will receive " << dime << " dime(s)\n";
  penny = penny%10;

  nickel = (penny / 5) - ((penny%5)/5);
  cout << "You will receive " << nickel << " nickel(s)\n";
  penny = penny%5;

  cout << "You will receive " << penny << " penny(ies)\n";

  cout << endl << endl;




  cout << "Scenario 2 Solution\n";

  //You Code Here
  cout << "Amount Due: ";
  cin >> amountDue;
  cout << "He/She Paid: ";
  cin >> amountPaid;


  extraPaid = amountPaid - amountDue;
  cout << "Return Change: $" << extraPaid << "\n";
  penny = extraPaid * 100;
  dollars = (penny / 100) - ((penny%100)/100);
  cout << "You will receive " << dollars << " dollar(s)\n";
  penny = penny%100;

  quarter = (penny / 25) - ((penny%25)/25);
  cout << "You will receive " << quarter << " quarter(s)\n";
  penny = penny%25;

  dime = (penny / 10) - ((penny%10)/10);
  cout << "You will receive " << dime << " dime(s)\n";
  penny = penny%10;

  nickel = (penny / 5) - ((penny%5)/5);
  cout << "You will receive " << nickel << " nickel(s)\n";
  penny = penny%5;

  cout << "You will receive " << penny << " penny(ies)\n";


  cout << endl << endl;
  return 0;
}
