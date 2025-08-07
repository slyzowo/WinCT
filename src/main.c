#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "commands.c"

void startseq(){
  printf(" _       ___            __\n");
  printf("| |     / (_)___  _____/ /_\n");
  printf("| | /| / / / __ \\/ ___/ __/\n");
  printf("| |/ |/ / / / / / /__/ /_\n");
  printf("|__/|__/_/_/ /_/\\___/\\__/\n");
}

int main(){

// declaring all vars at the top
  char userCommand[100];
  int diceMax = 0;
  int diceMin = 0;

// start sequence
  startseq();
  printf("Type in [ winct.command ] for commands\n");
  while (true){
  
  
  fgets(userCommand, 255, stdin);

// system commands
    if (userCommand == "winct sys.lock"){
      WINCTlock();
    }

    else if (userCommand == "winct sys.restart"){
      WINCTrestart();
    }

    else if (userCommand == "winct sys.shutdown"){
      WINCTshutdown();
    }

    else if (userCommand == "winct sys.uptime"){
      WINCTuptime();
    }

// WINCT commands
    else if (userCommand == "winct.coinflip"){
      WINCTcoinflip();
    }

    else if (userCommand == "winct.diceroll"){
      WINCTdiceroll(diceMax, diceMin);
    }

    else if (userCommand == "winct.help"){
      WINCThelp();
    }

    else{
      printf("User Typed %s which was not valid", userCommand);
    }
  }
return 0;
}