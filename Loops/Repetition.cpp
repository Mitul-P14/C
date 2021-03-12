
#include <iostream>
using namespace std;

int main() {

  //issue 1
    int n = 15;

    cout << "\n Issue one";

    while(n <= 40) {
        cout << endl << n;
        n = n + 5;
    }

  //issue 2

  int n1 = 30;

  cout << "\n\n\n Issue two";

  while(n1 >= 20) {
      cout << endl << n1;

      n1 = n1 - 2;
  }

  //issue 3

  int n2 = 50;
  int tn2 = 0;

  cout << "\n\n\n Issue three";

  while(n2 > 0) {
      cout << endl << n2;

      n2 = n2 / 2;
      tn2 = n2%2;
      n2 = n2 - tn2;
  }

  //issue 4

  int n3 = 3;

  cout << "\n\n\n Issue four";

  while(n3 <= 6561) {
      cout << endl << n3;

      n3 = n3 * n3;
  }

  //issue 5

  int dec = 1;

  cout << "\n\n\n Issue five";

  while (dec == 1) {
      cout << "\nWould you like to keep this loop going (1 for yes, 2 for no):";
      cin >> dec;

      if(dec == 1){
        cout << "\n\nYay!";
      }
      else{
        cout << "\n\nok\ngoodbye";
      }
}
}
