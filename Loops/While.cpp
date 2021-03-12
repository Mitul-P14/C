#include <iostream>
#include <string>

const int EXIT = -1;

using namespace std;

int main() {
    string names[] = { "Cooper Bybee", "Aljami Durham", "Armaan Franklin", "Anthony Leal",
                       "Khristian Lander", "Michael Shipp", "Rob Phinisee", "Nathan Childress",
                       "Sebastien Scott", "Jerome Hunter", "Jordan Geronimo", "Trace Jackson-Davis",
                       "Race Thompson", "Trey Galloway", "Joey Brunk" };
    int input;
    do {
        cout << "\nIU Basketball Team Roster\nEnter a team member's number for their name: ";
        cin >> input;
        if (input != EXIT) {
            cout << '\n' << names[input] << '\n';
        }
    } while (input != EXIT);
    return 0;
}
