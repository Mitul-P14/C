#include <iostream>

// Scenario 1 Variables
  float balS = 0.00;
  float deposits = 0.00;
  float withdrawn = 0.00;
  float balE = 0.00;

// Scenario 2 Variables
  float typedEnvelopes = 0.00;
  float typedPages = 0.00;
  float perEnvelope = 0.00;
  float perPage = 0.00;
  float priceF = 0.00;

// Scenario 3 Variables
  float lenghR = 0.0;
  float widthR = 0.0;
  float areaR = 0.0;
  float perSQ = 0.0;
  float priceR = 0.0;

using namespace std;

int main()
{


  cout << "Below are the programs that solve the 3 scenarios from my first IPO Charts assignments" << endl << endl;



  cout << "Scenario 1 solution:" << endl;

  // You code here
  cout << "What is your current balance? ";
  cin >> balS;
  cout << "How much was deposited? ";
  cin >> deposits;
  cout << "Now, tell me: How much did you withdraw? ";
  cin >> withdrawn;

  balE = (balS + deposits) - withdrawn;
  cout << "Now your current balance is: $" << balE << endl << endl;



  cout << "Scenario 2 solution:" << endl;

  // You code here
  cout << "Price per each typed envelope is ";
  cin >> perEnvelope;
  cout << "Price per each typed page is ";
  cin >> perPage;
  cout << "How many envelopes did he or she purchase? ";
  cin >> typedEnvelopes;
  cout << "How many pages did he or she purchase? ";
  cin >> typedPages;

  priceF = (typedEnvelopes * perEnvelope) + (typedPages * perPage);
  cout << "He or she needs to pay $" << priceF << endl << endl;



  cout << "Scenario 3 solution:" << endl;

  // You code here
  cout << "What is the desired length? ";
  cin >> lenghR;
  cout << "And the desired width is... ";
  cin >> widthR;
  cout << "What is the price per square feet of the tile? ";
  cin >> perSQ;

  areaR = lenghR * widthR;
  cout << "The area is " << areaR << "feet squared. " << endl << endl;

  priceR = areaR * perSQ;
  cout << "The estimated price is " << priceR << "$ " << endl << endl;


  return 0;
}
