#include <iostream>
#include <windows.h>
#include <ctime>
using std::cout;
using std::cin;

int randnum = 0; // needed to make this global as several functions require this

namespace WINCT{

class App{
  public:
  void open(){      cout << "User typed winct app.open" << '\n'; }
  void uninstall(){ cout << "User typed winct app.uninstall" << '\n'; }
};

class File{
  public:
  void del(){  cout << "User typed winct file.del" << '\n'; }
  void info(){ cout << "User typed winct file.info" << '\n'; }
  void make(){ cout << "User typed winct file.make" << '\n'; }
  void open(){ cout << "User typed winct file.open" << '\n'; }
};

class Dir{
  public:
  void del(){  cout << "User typed winct dir.del" << '\n'; }
  void ls(){   cout << "User typed winct dir.ls" << '\n'; }
  void make(){ cout << "User typed winct dir.make" << '\n'; }
  void open(){ cout << "User typed winct dir.open" << '\n'; }
  void zip(){  cout << "User typed winct dir.zip" << '\n'; }
};

class System{
  public:
  void info(){        cout << "User typed winct system.info" << '\n'; }

  static void lock(){
    if(LockWorkStation() != true){
      cout << "winct could not lock your workstation" << '\n';
    }
  }

  void restart(){     cout << "User typed winct system.restart" << '\n'; }
  void shutdown(){    cout << "User typed winct system.shutdown" << '\n'; }
  void sleep(){       cout << "User typed winct system.sleep" << '\n'; }
  void uptime(){      cout << "User typed winct system.uptime" << '\n'; }
  void vol(){         cout << "User typed winct system.vol" << '\n'; }
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


int main(){

  // declaring all vars at the top :3
  std::string userinput;
  int dicemax = 0;
  int dicemin = 0;
  
  srand(time(NULL)); // seed uses current time
  WINCT::Winct winct;
  WINCT::App app;

  cout << "Type in [ winct.help ] for commands" << '\n';
  std::getline(std::cin >> std::ws, userinput);

// TODO: convert if's to switches

// app commands
  if (userinput == "winct app.open"){
    WINCT::App::open;
  }

  else if (userinput == "winct app.uninstall"){
    WINCT::App::uninstall;
  }


// file commands
  else if (userinput == "winct file.del"){
    WINCT::File::del;
  }

  else if (userinput == "winct file.info"){
    WINCT::File::info;
  }

  else if (userinput == "winct file.make"){
    WINCT::File::make;
  }

  else if (userinput == "winct file.open"){
    WINCT::File::open;
  }


// folder commands
  else if (userinput == "winct dir.del"){
    WINCT::Dir::del;
  }
  else if (userinput == "winct dir.ls"){
    WINCT::Dir::ls;
  }
  else if (userinput == "winct dir.make"){
    WINCT::Dir::make;
  }
  else if (userinput == "winct dir.open"){
    WINCT::Dir::open;
  }
  else if (userinput == "winct dir.zip"){
    WINCT::Dir::zip;
  }


// system commands
  else if (userinput == "winct sys.info"){
    WINCT::System::info;
  }

  else if (userinput == "winct system.lock"){
    WINCT::System::lock();
  }

  else if (userinput == "winct sys.restart"){
    WINCT::System::restart;
  }

  else if (userinput == "winct sys.shutdown"){
    WINCT::System::shutdown;
  }

  else if (userinput == "winct sys.sleep"){
    WINCT::System::sleep;
  }

  else if (userinput == "winct sys.uptime"){
    WINCT::System::uptime;
  }

  else if (userinput == "winct sys.vol"){
    WINCT::System::vol;
  }


// WINCT commands
  else if (userinput == "winct.coinflip"){
    winct.coinflip();
  }

  else if (userinput == "winct.diceroll"){
    winct.diceroll(dicemax, dicemin);
    cout << "You rolled a " << randnum << '\n';
  }

  else if (userinput == "winct.help"){
    winct.help();
  }

  else if (userinput == "winct.joke"){
    winct.joke();
  }

  else if (userinput == "winct.quote"){
    winct.quote();
  }

  else{
    cout << "User Typed \"" << userinput << "\" which was not valid" << '\n';
  }

return 0;
}