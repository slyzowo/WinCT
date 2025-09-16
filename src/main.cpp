#include "commands.cpp" // for our commands
#include <string>
using std::cout;
using std::cin;
using std::string;

void startseq(){
cout <<  "\033[34m## ##  _       ___            __\033[0m" << '\n'
      << "\033[34m## ## | |     / (_)___  _____/ /_\033[0m" << '\n'
      << "\033[34m      | | | /| / / / __ \\/ ___/ __/\033[0m" << '\n'
      << "\033[34m## ## | |/ |/ / / / / / /__/ /_\033[0m" << '\n'
      << "\033[34m## ## |__/|__/_/_/ /_/\\___/\\__/\033[0m" << '\n' << '\n';

cout << "" << '\n';
}

int main(){
  
  // declaring all vars at the top :3
  string userCommand;
  int dicemax = 0;
  int dicemin = 0;

  srand(time(NULL)); // seeding current time

// declaring all classes in main
  WINCT::Sys system;
  WINCT::Winct winct;

  startseq();
  cout << "Type in [ winct.help ] for help" << '\n';
  while(true){ // adds looping
  std::getline(cin >> std::ws, userCommand);

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
}

return 0;
}