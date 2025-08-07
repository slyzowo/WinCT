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
  printf("Type in [ winct.command ] for commands");
  fgets(userCommand, 255, stdin);

// system commands
    if (userCommand == "winct sys.lock\0"){
      WINCTlock();
    }

    else if (userCommand == "winct sys.restart\0"){
      WINCTrestart();
    }

    else if (userCommand == "winct sys.shutdown\0"){
      WINCTshutdown();
    }

    else if (userCommand == "winct sys.uptime\0"){
      WINCTuptime();
    }

// WINCT commands
    else if (userCommand == "winct.coinflip\0"){
      WINCTcoinflip();
    }

    else if (userCommand == "winct.diceroll\0"){
      WINCTdiceroll(diceMax, diceMin);
    }

    else if (userCommand == "winct.help\0"){
      WINCThelp();
    }

    else{
      printf("User Typed %s which was not valid", userCommand);
    }

return 0;
}