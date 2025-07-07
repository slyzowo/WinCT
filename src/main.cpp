#include "commands.cpp" // for our commands
using std::cout;
using std::cin;

void startseq(){
cout << " _       ___            __" << '\n';
cout << "| |     / (_)___  _____/ /_" << '\n';
cout << "| | /| / / / __ \\/ ___/ __/" << '\n';
cout << "| |/ |/ / / / / / /__/ /_" << '\n';
cout << "|__/|__/_/_/ /_/\\___/\\__/" << '\n' << '\n';
}

int main(){
  
  // declaring all vars at the top :3
  std::string userCommand;
  std::string userInput;
  int dicemax = 0;
  int dicemin = 0;

  srand(time(NULL)); // seeding current time

// declaring all classes in main
  WINCT::Sys system;
  WINCT::Winct winct;

  startseq();
  cout << "Type in [ winct.help ] for help" << '\n';
  std::getline(std::cin >> std::ws, userCommand);

// TODO: convert if's to switches
// system commands

  if (userCommand == "winct sys.lock"){
    system.lock();
  }

  else if (userCommand == "winct sys.restart"){
    system.restart();
  }

  else if (userCommand == "winct sys.shutdown"){
    system.shutdown();
  }

  else if (userCommand == "winct sys.uptime"){
    system.uptime();
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

  else{
    cout << "User Typed \"" << userCommand << "\" which was not valid" << '\n';
  }

return 0;
}