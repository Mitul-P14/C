#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;
using namespace this_thread;
using namespace chrono;

int main() {
  cout << "\nProblem One\n";
  for(int var = 1; var <= 21; var+=2) {
    cout << var << endl;
  }

  cout << "\n\nProblem Two\n";
  for(int var1 = 24; var1 >= 3; var1 /=2) {
    cout << var1 << endl;
  }

  cout << "\n\nProblem Three\n";
  for(int i = 0; i < 26; i +=1) {
    cout << "abcdefghijklmnopqrstuvwxyz"[i] << endl;
  }

  cout << "\n\nProblem Four\n";
  const float num = 1;
  for(float var3 = 2; var3 <= 10; var3 ++) {
    float ans;
    ans = num / var3;
    cout << ans << endl;
  }

  cout << "\n\nProblem Five\n";
  int num1 = 0;
  int sum;
  cout << "enter number";
  cin >> num1;
  for(sum = 0; num1 >= 0; num1 --) {
    sum = num1 + sum;
  }
  cout << sum << endl;

  cout << "\n\nProblem Six\n";
  int store = 1;
  for(int odd = 1; odd <= 13; odd+=2) {
    store = odd * store;
  }
  cout << store << endl;

}
