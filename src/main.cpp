#include "commands.cpp" // for our commands
using std::cout;
using std::cin;

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
    cout << "what app would you like to open?" << '\n';
    cin >> userInput;
    app.open(userInput);
  }
  
  else if (userCommand == "winct app.uninstall"){
    cout << "what app would you like to uninstall?" << '\n';
    cin >> userInput;
    app.uninstall(userInput);
  }


// file commands
  else if (userCommand == "winct file.del"){
    file.del(userInput);
  }

  else if (userCommand == "winct file.info"){
    file.info(userInput);
  }

  else if (userCommand == "winct file.make"){
    file.make(userInput);
  }

  else if (userCommand == "winct file.open"){
    file.open(userInput);
  }


// folder commands
  else if (userCommand == "winct dir.del"){
    dir.del(userInput);
  }
  else if (userCommand == "winct dir.ls"){
    dir.ls(userInput);
  }
  else if (userCommand == "winct dir.make"){
    dir.make(userInput);
  }
  else if (userCommand == "winct dir.open"){
    dir.open(userInput);
  }
  else if (userCommand == "winct dir.zip"){
    dir.zip(userInput);
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