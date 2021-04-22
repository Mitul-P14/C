#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::ifstream;
using std::ios;
using std::string;

int main() 
{
    string temp;
    ifstream indianaZips;
    ifstream p7;
    string name;
    string grade;
    int count10 = 0;
    int count11 = 0;

    indianaZips.open("IndianaZip.txt");

    if(indianaZips.is_open() == true) 
    {
        while (indianaZips.eof() == false) 
        {
            string county = " ";
            int zip;

            getline(indianaZips, county, ',');
            cout << county << ",";

            indianaZips >> zip;
            cout << zip;
        }
    }

    else {cout << "An error occured, please try again later" << endl;}
    indianaZips.close();












    indianaZips.open("IndianaZip.txt");

    if(indianaZips.is_open() == true) 
    {
        int inputZip;

        cout << "\n\n\nPlease enter a zip code to find the county assoiciated with it: ";
        cin >> inputZip;

        while (indianaZips.eof() == false) 
        {
            string county = " ";
            int zip;

            getline(indianaZips, county, ',');
            indianaZips >> zip;

            if (inputZip == zip) 
            {temp = county;
            cout << temp << endl; 
            }
        }

        if(temp == "" || temp == " ") {cout << "\nAn unknown error has occured. Please try again later";}
       
    }

    else {cout << "An error occured, please try again later" << endl;}
    indianaZips.close();






















    p7.open("period7.txt");

    if(p7.is_open() == true) 
    {
        while (p7.eof() == false) 
        {
            getline(p7, name, '#');
            cout << name << "#";

            getline(p7, name, '#');
            cout << name << "#";

            p7 >> grade;
            cout << grade;
        }
    }

    else {cout << "An error occured, please try again later" << endl;}
    p7.close();




  




















    p7.open("period7.txt");

    if(p7.is_open() == true) 
    {
        while (p7.eof() == false) 
        {
            getline(p7, name, '#');
            getline(p7, name, '#');

            p7 >> grade;
            if(grade == "10") {count10++;}
            else{count11++;}
        }
    }

    else {cout << "An error occured, please try again later" << endl;}
    cout << endl << "There are " << count10 << " 10th graders\n";
    cout << endl << "      and  " << count11 << " 11th graders";
    p7.close();
}