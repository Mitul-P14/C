#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
using std::pow;
using std::string;

void Correct ();
void Wrong (int);

int main() {
    /*
    6 questions total
    Of the 6 questions:
        2 questions use random numbers
         question uses pow
        2 questions must use rounding - 1 that does round to whole number and 1 that does roundf to 2 decimal places
    After they type in their answer to a question tell them if they are right or wrong.
    Example:  You got it right!  It was 3                     or                  Sorry you got it wrong. The answer was 3
    */



    double userAnswer = 0;
    double correctAnswer = 0;


    //question 1
    int random = 1 + rand() % (20-1+1);
    int rand2 = 1 + rand() % (20-1+1);

    cout << "\n\nQuestion 1:\n" << random << "+" << rand2 << " equals what?\n";
    cin >> userAnswer;

    correctAnswer = random + rand2;

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}



    //question 2
    cout << "\n\n(3*4)^2 equals what?\n";
    cin >> userAnswer;

    correctAnswer = pow(12, 2);

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}



    //question 3

}



void Correct()
{
    cout << "\nGreat Job! That was the correct answer!\n";
}

void Wrong(int right)
{
    cout << "\nSorry but that\'s the wrong answer\nThe correct answer was " << right << "\n";
}
