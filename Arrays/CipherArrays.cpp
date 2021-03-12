#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int encode_decode = 0;
  char alphabetLower [26] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  // they were shifted two back so that 'a' becomes 'y'
  char encodedAlpha [26] {'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'};
  char letter_to_encrypt = ' ';
  char letterToDecode = ' ';
  char encryptedLetter = ' ';
  string encryptedWord = " " ;
  string decodedWord = " ";
  int x = 0;
  int a = 0;

  cout << "Do you want to encode (1) or decode (0)?\n";
  cin >> encode_decode;


//  encode
  if (encode_decode == 1) {
    while (a == 0) {
      cout << "\nEnter the single character letter you wish to encrypt (enter * to stop)\n";
      cin >> letter_to_encrypt;

      if (letter_to_encrypt == '*') {
        a = 1;
      }

      else {
        x = 0;
        while (x < 27) {
          if (letter_to_encrypt == alphabetLower[x]) {
            encryptedWord = encryptedWord + encodedAlpha[x];
            cout << "\nThe encrypted letter is: " << encodedAlpha[x] << endl;
          }
          x++;
        }
      }
    }

    cout << "\nThe encrypted word is " << encryptedWord << endl;
  }


//  decode
  else {
    x = 0;
    a = 0;

    while (a == 0) {
      cout << "\nEnter the single letter of the word you wish to decode (enter * to stop\n";
      cin >> letterToDecode;

      if (letterToDecode == '*') {
        a = 1;
      }

      else {
        x = 0;
        while (x < 27) {
          if (letterToDecode == encodedAlpha[x]) {
            decodedWord = decodedWord + alphabetLower[x];
            cout << "\nThe decoded letter is: " << alphabetLower[x] << endl;
          }
          x++;

        }
      }
    }
    cout << "\nThe decoded word is " << decodedWord << endl;
  }
}


  // ENCODE
  /*
      if (encode_decode == 1) {
        cout << "\n\nPlease enter a single lowercase character (enter * to stop): ";
        cin >> letter_to_encrypt;
        encryptedWord = encryptedWord + letter_to_encrypt;
        while (letter_to_encrypt!='*')

          {for (x=0; x<26; x++)
            {if (letter_to_encrypt== alphabetLower[x])
            cout<<encodedAlpha [x];
            cout << "\n\nPlease enter a single lowercase character (enter * to stop): ";
            cin >> letter_to_encrypt;

            if (letter_to_encrypt == '*') {
              for(int b = 0; b < 11; b++) {
                cout << endl << encryptedWord[b] << "\n";
              }
            }
            }
            }


          }




        if (encode_decode == 0){
          cout << "\n\nPlease enter a single lowercase character (enter * to stop): ";
          cin >> encryptedLetter;
          while (encryptedLetter!='*') {
            for (int x=0; x<26; x++)
              {if (encryptedLetter== encodedAlpha[x])
              cout<<alphabetLower[x];
              cout << "\n\nPlease enter a single lowercase character (enter * to stop): ";
              cin >> encryptedLetter;
              }
            }
        }
*/
