#include <iostream>
#include <cmath>
#include <ctime>
#include <math.h>
#include <iomanip>
using namespace std;
using std::pow;
using std::string;

void Correct ();
void Wrong (double);

int main() {

    double userAnswer = 0;
    double correctAnswer = 0;


    //question 1
    srand(int(time(0)));
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
    random = 1 + rand() % (200-1+1);

    cout << "\n\n" << random << "/2 equals what? (round up if needed)\n";
    cin >> userAnswer;

    correctAnswer = random/2;

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}



    //question 4
    cout << "\n\n13/3 equals what? (round down if necesary)\n";
    cin >> userAnswer;

    correctAnswer = floor(13/3);

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}



    //question 5
    random = 1 + rand() % (100-1+1);

    cout << "\n\n" << random << "%2 equals what? (do not round)\n";
    cin >> userAnswer;

    correctAnswer = random%2;

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}



    //question 6
    cout << "13/9 equals what? (round to 2 decimal places)\n";
    cin >> userAnswer;

    correctAnswer = (ceil((13/9)*100))/100;

    if (userAnswer == correctAnswer) {Correct();}
    else {Wrong(correctAnswer);}

}



void Correct(){cout << "\nGreat Job! That was the correct answer!\n";}
void Wrong(double right){cout << "\nSorry but that\'s the wrong answer\nThe correct answer was " << right << "\n";}
