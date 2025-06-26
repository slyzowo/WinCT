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

class Dir{
  public:
  void del(std::string userCommand){  
    cout << "User also typed " << userCommand << '\n';
  }
  void ls(std::string userCommand){   
    cout << "User also typed " << userCommand << '\n';
  }
  void make(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
  }
  void open(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
  }
  void zip(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
  }
};

class File{
  public:
  void del(std::string userCommand){
    userCommand.erase(0, 14);
    cout << "User also typed " << userCommand << '\n';
  }
  void info(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
  }
  void make(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
  }
  void open(std::string userCommand){
    cout << "User also typed " << userCommand << '\n';
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


int main(){

  // declaring all vars at the top :3
  std::string userCommand;
  std::string userInput;
  int dicemax = 0;
  int dicemin = 0;

  srand(time(NULL)); // seeding current time

// declaring all classes in main
  WINCT::App app;
  WINCT::Dir dir;
  WINCT::File file;
  WINCT::Sys system;
  WINCT::Winct winct;

  cout << "Type in [ winct.help ] for commands" << '\n';
  std::getline(std::cin >> std::ws, userCommand);

// TODO: convert if's to switches

// app commands
  if (userCommand == "winct app.open"){
    app.open();
  }
  
  else if (userCommand == "winct app.uninstall"){
    app.uninstall();
  }


// file commands
  else if (userCommand == "winct file.del"){
    file.del(userCommand);
  }

  else if (userCommand == "winct file.info"){
    file.info(userCommand);
  }

  else if (userCommand == "winct file.make"){
    file.make(userCommand);
  }

  else if (userCommand == "winct file.open"){
    file.open(userCommand);
  }


// folder commands
  else if (userCommand == "winct dir.del"){
    dir.del(userCommand);
  }
  else if (userCommand == "winct dir.ls"){
    dir.ls(userCommand);
  }
  else if (userCommand == "winct dir.make"){
    dir.make(userCommand);
  }
  else if (userCommand == "winct dir.open"){
    dir.open(userCommand);
  }
  else if (userCommand == "winct dir.zip"){
    dir.zip(userCommand);
  }


// system commands
  else if (userCommand == "winct sys.info"){
    system.info();
  }

  else if (userCommand == "winct sys.lock"){
    system.lock();
  }

  else if (userCommand == "winct sys.restart"){
    system.restart();
  }

  else if (userCommand == "winct sys.shutdown"){
    system.shutdown();
  }

  else if (userCommand == "winct sys.sleep"){
    system.sleep();
  }

  else if (userCommand == "winct sys.uptime"){
    system.uptime();
  }

  else if (userCommand == "winct sys.vol"){
    system.vol();
  }


// WINCT commands
  else if (userCommand == "winct.coinflip"){
    winct.coinflip();
  }

  else if (userCommand == "winct.diceroll"){
    winct.diceroll(dicemax, dicemin);
    cout << "You rolled a " << randnum << '\n';
  }

  else if (userCommand == "winct.help"){
    winct.help();
  }

  else if (userCommand == "winct.joke"){
    winct.joke();
  }

  else if (userCommand == "winct.quote"){
    winct.quote();
  }

  else{
    cout << "User Typed \"" << userCommand << "\" which was not valid" << '\n';
  }

return 0;
}