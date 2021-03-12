#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

int main () {
  cout << "\n\n\nProblem One:\n";
//Write a do while loop that will display all of the squares of the numbers 10 to 20.
//NOT square root – squares (so 100, 121, 144…all the way to 400)
  int i = 10;
  int ia = 0;

  do {
    ia = i * i;
    cout << "\nSquare root of " << i << " is " << ia;
    i = i + 1;
  }
  while(i <= 20);



  cout << "\n\n\nProblem Two:\n";
//Write a do while loop that asks the user for their age. If their age is less than 18 display
//the message "Too Young to Vote". If their age is 18 or over display the message "You
//can Vote". Continue the loop as long as the user enters a positive number.
  int age = 1;

  do {
    cout << "\nWhat is your age? ";
    cin >> age;

    if(age <= 0) {
      cout << "\nThat is not a valid age";
    }
    if (age < 18 && age > 0) {
      cout << "\nI\'m sorry but you are too young to vote";
    }
    if(age >= 18) {
      cout << "\nYou are eligible to vote!";
    }

  }

  while (age > 0);



  cout << "\n\n\nProblem Three:";
//Write a do while loop that will ask the user for a positive number. It will then add that
//number to a cumulative sum. Keep asking until the user puts in a negative number.
//Display the sum at the end.
  int s = 0;
  int sum = 0;


  do {
    cout << "\nEnter a positive number to have it added to a cumalative sum (entering a negative will end loop)";
    cin >> s;

    if(s < 0) {
      cout << "\nNegative value entered.\nEXITING LOOP\n";
    }
    else {
      sum = s + sum;
      cout << "The total sum so far is " << sum;
    }
  }
  while(s >= 0);

  cout << "\nThe final sum was " << sum;



  cout << "\n\n\nProblem Four:";
//Teachers in most school districts are paid on a salary schedule that provides a salary
//based on their number of years of teaching experience. Suppose that a beginning teacher
//in ABC School District is paid $42,000 in the first year. For each year of experience
//after this up to 12 years, an 8 % increase is received over the previous year. Write a
//program that displays a salary schedule for teachers in this school for the first 12 years
//(really 13 if you include year 12) .



  float salary = 42000;


  for(int year = 0; year <= 12; year+=1){
    cout << endl << year << "\t" << salary;
    salary = salary * 1.08;
}



}
