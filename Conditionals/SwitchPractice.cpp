#include <iostream>

using namespace std;

//Problem One Variables
double num1 = 0.00;
double num2 = 0.00;
double numF = 0.00;
char oper;
int total = 00;

//Problem Two Variables
int p2 = 0;
char type;

int main() {

  //Problem One
  cout << "Enter in two numbers (each followed by enter)\n";
  cin >> num1 >> num2;
  cout << "What operation would you like to use? (+,-,*,/)\n";
  cin >> oper;

  switch (oper)
  {
  case '+':
    numF = num1 + num2;
    cout << numF << " is the final number";
    break;
  case '-':
    if(num1 > num2)
    {
      numF = num1 - num2;
      cout << numF << " is the final answer";
    }
    else
    {
      numF = num2 - num1;
      cout << numF << " is the final number";
    }
    break;
  case '*':
    numF = num1 *num2;
    cout << numF << " is the final number";
    break;
  case '/':
    if(num1 > num2){
      numF = num1 / num2;
      cout << numF << " is the final number";
    }
    else{
      numF = num2 / num1;
      cout << numF << " is the final number";
    }
    break;
  default:
    cout << "\n\nERROR:\nInvalid Input\nPlease try again";
  }


  //Problem Two
  cout << "\n\n\nHow many credit hours are you taking?\n";
  cin >> p2;

  if(p2 <= 0)
       cout << "Idiot! That\'s not a valid answer!";
  if(p2 > 0)
  {
    cout << "\nWhat type of student are you?\n1. If you are an undergraduate at $500 per hour press a\n2. If you are a graduate at $800 per hour press b\n3. If you are out of state at $650 per hour press c\n4. If you are a special student at $300 per hour press d\n";
    cin >> type;

    switch(type)
    {
      case 'a':
        total = p2 * 500;
        cout << "Your total cost is $" << total;
        break;
      case 'b':
        total = p2 * 800;
        cout << "Your total cost is $" << total;
        break;
      case 'c':
        total = p2 * 650;
        cout << "Your total cost is $" << total;
        break;
      case 'd':
        total = p2 * 300;
        cout << "Your total cost is $" << total;
        break;
      default:
        cout << "\n\nAn ERROR occured\nPlease try again";
    }
  }
}
