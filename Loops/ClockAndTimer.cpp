#include <iostream>
#include<thread> //in order to use sleep function
#include <unistd.h> //header for Unix POSIX reference to UTC time

using namespace std;
using namespace std::chrono; //for duration

int main() {

  //in repl.it you have to get time differently than you do in Visual Studio

  typedef duration<int, ratio_multiply<hours::period, ratio<24> >::type> days; system_clock::time_point now = system_clock::now();
  ;
  time_t tt = system_clock::to_time_t(now);

  tm local_tm = *localtime(&tt);

  int h =  local_tm.tm_hour-5; //we are 5 hours behind Greenwich UTC time, hence -5... see this website...https://www.timeanddate.com/time/map/
  int m = local_tm.tm_min;
  int s = local_tm.tm_sec;


    std::cout << h << ':';
    std::cout << m << ':';
    std::cout << s << '\n';


  // You begin coding below this comment

  int a = 1;
  std::cout << "hour : minute : seconds\n";
  while(a == 1) {
    while(h < 25) {

      while(m < 60) {

        while (s < 60) {
          cout << h << ":" << m << ":" << s << endl;
          s++;
          sleep(1);
        }
      m++;
      s = 0;
      }
    h++;
    m = 0;
    }
  h = 0;
  }

int minutes = 0;
int hours = 0;
int seconds = 0;


cout << "\n\nTIMER\n";
cout << "how many hours? ";
cin >> hours;
cout << "\nHow many minutes? ";
cin >> minutes;
cout << "\nHow many seconds? ";
cin >> seconds;



  while(minutes >= 0 && seconds >= 0) {
    while(h >=0) {

      while(m >= 0) {

        while (s >= 0) {
          cout << hours << ":" << minutes << ":" << seconds << endl;
          seconds = seconds - 1;
          if (seconds < 0) {
            seconds = 59;
            minutes = minutes - 1;
          }
          sleep(1);
        }
        minutes = minutes - 1;
        s = 59;
      }
      hours = hours - 1;
      m = 59;
    }
    h = 24;
  }

  cout << "\nTIMES UP";
}
