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
string foodName = " ";
int foodRating = 0;
int numEntered;
int product;
int outProduct = 0;
float numMiles = 0;

int main()
{
    /* ofstream outName;
    outName.open("fiel name.txt", ios::app or out)
    cheach with if(outName.is_open() == true){}
    else {}
    outGrade.close();
    */
    

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
        cout << "\n\n\nPlease enter the numbe of miles: ";
        cin >> numMiles;
    }

    else
    {
        cout << "\n\n\nAn error has occured";
    }
}