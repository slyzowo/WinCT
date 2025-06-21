#include <iostream>
#include <windows.h>
#include <ctime>
using std::cout;
using std::cin;

int randnum = 0;

namespace winct{
class app{public:};
class file{public:};
class dir{public:};
class system{public:};

class winct{ public:

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
    cout << "winct.update" << '\n';
  }
};}


int main(){

// declaring all vars at the top :3
  std::string userinput;
  int dicemax = 0;
  int dicemin = 0;

  srand(time(NULL)); // seed uses current time
  winct::winct winct;

  cout << "Type in [ winct.help ] for help" << '\n';
  std::getline(std::cin >> std::ws, userinput);

// TODO: convert if's to switches

// app commands
  if (userinput == "winct app.open"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct app.uninstall"){
    cout << "User Typed " << userinput << '\n';
  }

// file commands
  else if (userinput == "winct file.del"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct file.info"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct file.make"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct file.open"){
    cout << "User Typed " << userinput << '\n';
  }

// folder commands
  else if (userinput == "winct dir.del"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct dir.ls"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct dir.make"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct dir.open"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct dir.zip"){
    cout << "User Typed " << userinput << '\n';
  }

// system commands
  else if (userinput == "winct sys.info"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct sys.lock"){
    LockWorkStation();
  }
  else if (userinput == "winct sys.restart"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct sys.shutdown"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct sys.sleep"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct sys.uptime"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct sys.vol"){
    cout << "User Typed " << userinput << '\n';
  }

// WINCT commands
  else if (userinput == "winct.coinflip"){
    winct.coinflip();
  }
  else if (userinput == "winct.diceroll"){
    cout << "What is the max?" << '\n';
    cin >> dicemax;
    cout << "What is the min?" << '\n';
    cin >> dicemin;
    winct.diceroll(dicemax, dicemin);
    cout << "You rolled a " << randnum << '\n';
  }
  else if (userinput == "winct.help"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct.fact"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct.joke"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct.quote"){
    cout << "User Typed " << userinput << '\n';
  }
  else if (userinput == "winct.update"){
    cout << "User Typed " << userinput << '\n';
  }
  else{
    cout << "User Typed \"" << userinput << "\" which was not valid" << '\n';
  }

return 0;
}