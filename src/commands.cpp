#include <iostream>
#include <cmath>
#include <windows.h>
#include <ctime>
using std::cout;
using std::cin;

int randnum = 0; // needed to make this global as several functions require this

/*
  how are these organized?

  they're organized like `WINCT > APP > open`
  think of them somewhat like folders
*/

namespace WINCT{

class Sys{
  public:
  /*
    /t is time
    /s is shutdown
    /r is restart
  */

  static void lock(){
    if(LockWorkStation() != true){
      cout << "winct could not lock your workstation" << '\n';
    }
    else{
      LockWorkStation();
    }
  }

  void restart(){
    if(system("c:\\windows\\system32\\shutdown /r /t 1") != true){
      cout << "winct could not lock your workstation" << '\n';
    }
    else{
      system("c:\\windows\\system32\\shutdown /r /t 1");
    }
  }
  
  void shutdown(){
    if(system("c:\\windows\\system32\\shutdown /s /t 1") != true){
      cout << "winct could not lock your workstation" << '\n';
    }
    else{
      system("c:\\windows\\system32\\shutdown /s /t 1");
    }
  }

  void uptime(){
/*
  Uptime is in milliseconds
  Milliseconds -> Seconds -> Minutes -> Hours
*/

    int uptime = GetTickCount();
    int uptimeSeconds =  floor(uptime / 1000);
    int uptimeMinutes =  floor(uptimeSeconds / 60);
    int uptimeHours =    floor(uptimeMinutes / 60);
        uptimeMinutes =  uptimeMinutes % 60;

    cout << "User typed winct system.uptime" << '\n';
    cout << "System Uptime : " << uptimeHours << " Hrs & " << uptimeMinutes << " Mins" << '\n';
  }
};

class Winct{ public:

  void coinflip(){
    randnum = rand() % 2;

    switch (randnum){
    case 0:
      cout << "Heads" << '\n';
    break;

    case 1:
      cout << "Tails" << '\n';
    break;

    default:
      cout << "Error" << randnum << '\n';
    break;
    }
  }

  int diceroll(int dicemax, int dicemin){
    cout << "What is the max?" << '\n';
    cin >> dicemax;
    cout << "What is the min?" << '\n';
    cin >> dicemin;
    randnum = rand() % dicemax + dicemin;
    return randnum;
  }

  void help(){
    cout << "System Commands" << '\n';
    cout << "winct sys.lock" << '\n';
    cout << "winct sys.restart" << '\n';
    cout << "winct sys.shutdown" << '\n';
    cout << "winct sys.uptime" << '\n' << '\n';
    
    cout << "Winct Commands" << '\n';
    cout << "winct.coinflip" << '\n';
    cout << "winct.diceroll" << '\n';
    cout << "winct.help" << '\n';
  }
};}