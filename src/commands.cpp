#include <iostream>
#include <windows.h>
#include <ctime>
using std::cout;
using std::cin;

int randnum = 0; // needed to make this global as several functions require this

namespace WINCT{

class App{
  public:
  void open(std::string userInput){
    cout << "User typed winct app.open" << '\n';
  }
  void uninstall(std::string userInput){
    cout << "User typed winct app.uninstall" << '\n';
  }
};

class Dir{
  public:
  void del(std::string userInput){  
    cout << "User also typed " << userInput << '\n';
  }
  void ls(std::string userInput){   
    cout << "User also typed " << userInput << '\n';
  }
  void make(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
  void open(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
  void zip(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
};

class File{
  public:
  void del(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
  void info(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
  void make(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
  void open(std::string userInput){
    cout << "User also typed " << userInput << '\n';
  }
};

class Sys{
  public:
  void info(){  cout << "User typed winct system.info" << '\n'; }

  static void lock(){
    if(LockWorkStation() != true){
      cout << "winct could not lock your workstation" << '\n';
    }
    else{
      LockWorkStation();
    }
  }

  void restart(){     cout << "User typed winct system.restart" << '\n'; }
  void shutdown(){    cout << "User typed winct system.shutdown" << '\n'; }
  void sleep(){       cout << "User typed winct system.sleep" << '\n'; }
  void uptime(){      cout << "User typed winct system.uptime" << '\n'; }

  void vol(){
    cout << "User typed winct system.vol" << '\n';
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
    cout << "winct app.open" << '\n';
    cout << "winct app.uninstall" << '\n';
    cout << "winct file.del" << '\n';
    cout << "winct file.info" << '\n';
    cout << "winct file.make" << '\n';
    cout << "winct file.open" << '\n';
    cout << "winct dir.del" << '\n';
    cout << "winct dir.ls" << '\n';
    cout << "winct dir.make" << '\n';
    cout << "winct dir.open" << '\n';
    cout << "winct dir.zip" << '\n';
    cout << "winct sys.info" << '\n';
    cout << "winct sys.lock" << '\n';
    cout << "winct sys.restart" << '\n';
    cout << "winct sys.shutdown" << '\n';
    cout << "winct sys.sleep" << '\n';
    cout << "winct sys.uptime" << '\n';
    cout << "winct sys.vol" << '\n';
    cout << "winct.coinflip" << '\n';
    cout << "winct.diceroll" << '\n';
    cout << "winct.help" << '\n';
    cout << "winct.joke" << '\n';
    cout << "winct.quote" << '\n';
  }
  void joke(){ cout <<  "User typed winct.joke" << '\n'; }
  void quote(){ cout << "User typed winct.quote" << '\n'; }
};}