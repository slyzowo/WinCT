#include <iostream>
#include <windows.h>
using std::cout;
using std::cin;

namespace winct{
class winct{ public:

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
  winct::winct winct;
  std::string userinput;

  cout << "Type in [ winct.help ] for help" << '\n';
  std::getline(std::cin >> std::ws, userinput);
  cout << "DEBUG : " << userinput << '\n';

// app commands
  if (userinput == "winct app.open"){
    cout << "User Typed winct app.open" << '\n';
  }
  else if (userinput == "winct app.uninstall"){
    cout << "User Typed winct app.uninstall" << '\n';
  }

// file commands
  else if (userinput == "winct file.del"){
    cout << "User Typed winct file.del" << '\n';
  }
  else if (userinput == "winct file.info"){
    cout << "User Typed winct file.info" << '\n';
  }
  else if (userinput == "winct file.make"){
    cout << "User Typed winct file.make" << '\n';
  }
  else if (userinput == "winct file.open"){
    cout << "User Typed winct file.open" << '\n';
  }

// folder commands
  else if (userinput == "winct dir.del"){
    cout << "User Typed winct dir.del" << '\n';
  }
  else if (userinput == "winct dir.ls"){
    cout << "User Typed winct dir.ls" << '\n';
  }
  else if (userinput == "winct dir.make"){
    cout << "User Typed winct dir.make" << '\n';
  }
  else if (userinput == "winct dir.open"){
    cout << "User Typed winct dir.open" << '\n';
  }
  else if (userinput == "winct dir.zip"){
    cout << "User Typed winct dir.zip" << '\n';
  }

// system commands
  else if (userinput == "winct sys.info"){
    cout << "User Typed winct sys.info" << '\n';
  }
  else if (userinput == "winct sys.lock"){
    LockWorkStation();
  }
  else if (userinput == "winct sys.restart"){
    cout << "User Typed winct sys.restart" << '\n';
  }
  else if (userinput == "winct sys.shutdown"){
    cout << "User Typed winct sys.shutdown" << '\n';
  }
  else if (userinput == "winct sys.sleep"){
    cout << "User Typed winct sys.sleep" << '\n';
  }
  else if (userinput == "winct sys.uptime"){
    cout << "User Typed winct sys.uptime" << '\n';
  }
  else if (userinput == "winct sys.vol"){
    cout << "User Typed winct sys.vol" << '\n';
  }

// WINCT commands
  else if (userinput == "winct.coinflip"){
    cout << "User Typed winct app.coinflip" << '\n';
  }
  else if (userinput == "winct.diceroll"){
    cout << "User Typed winct.diceroll" << '\n';
  }
  else if (userinput == "winct.help"){
    cout << "User Typed winct.help" << '\n';
  }
  else if (userinput == "winct.fact"){
    cout << "User Typed winct.fact" << '\n';
  }
  else if (userinput == "winct.joke"){
    cout << "User Typed winct.joke" << '\n';
  }
  else if (userinput == "winct.quote"){
    cout << "User Typed winct.quote" << '\n';
  }
  else if (userinput == "winct.update"){
    cout << "User Typed winct.update" << '\n';
  }
  else{
    cout << "User Typed \"" << userinput << "\" which was not valid" << '\n';
  }

return 0;
}