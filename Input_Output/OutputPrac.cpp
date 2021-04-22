#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::ofstream;
using std::ios;
using std::string;


ofstream outFood;
ofstream outMultiply;
ofstream outConvert;
ofstream outQuiz;
string foodName = " ";
string userName = " ";
string genderAnswer = " ";
int foodRating = 0;
int numEntered;
int product;
int outProduct = 0;
int ageAnswer;
double numMiles = 0;
double numKilom = 0;

int main()
{

//      SCENARIO ONE
    outFood.open("rr.txt", ios::app);

    if(outFood.is_open() == true)
    {
        cout << "Please enter a Restaurant name: ";
        getline(cin, foodName);

        cout << "\nWhat is your Restaurant's rating on a scale of 1-10: ";
        cin >> foodRating;

        outFood << foodName << "#" << foodRating;
    }

    else {
        cout << "\n\n\nAn Error Has Occured";
    }

    outFood.close();





//          SCENARIO 2
    outMultiply.open("multiply.txt", ios::app);

    if (outMultiply.is_open() == true)
    {
        cout << "\n\n\nEnter an integer: ";
        cin >> numEntered;

        for (int factor = 1; factor < 11; factor++)
        {
            outProduct = numEntered * factor;
            outMultiply << numEntered << "#" << factor << "#" << outProduct << "\n";
        }
    }

    else
    {
        cout << "\n\n\nan error has occured";
    }

    outMultiply.close();







//          SCENARIO 3
    outConvert.open("mileskilo.txt", ios::out);

    if (outConvert.is_open() == true)
    {
        if (outConvert.is_open() == true)
        {
            cout << "\n\n\nPlease enter the number of miles: ";
            cin >> numMiles;
            while (numMiles == 0 || numMiles > 0)
            {
                numKilom = numMiles * 1.60934;
                outConvert << numMiles << ", " << numKilom << endl;
                cout << "\n\n\nPlease enter the number of miles: ";
                cin >> numMiles;

                if (numMiles < 0)
                {
                    cout << "\nLoop has been ended";
                }
            }
        }

        outConvert.close();
    }

    else
    {
        cout << "\n\n\nAn error has occured";
    }








//             SCENARIO 4
    outQuiz.open("quiz.txt", ios::out);

    if (outQuiz.is_open() == true)
    {
        cout << "\n\n\nWhat is your name?\n";
        cin.ignore();
        getline (cin, userName);

        cout << "\nAre you above the age of 18? 1 for no and 2 for yes\n";
        cin >> ageAnswer;

        cout << "\nWhat is your gender?\n";
        cin.ignore();
        getline (cin, genderAnswer);

        outQuiz << userName << "#" << ageAnswer << "#" << genderAnswer;

        outQuiz.close();
    }

    else
    {
        cout << "\n\nAn error has occured. Please try again at a later time";
    }
}