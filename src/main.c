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
  char userCommand[255];
  int diceMax = 0;
  int diceMin = 0;

// start sequence
  startseq();
  printf("Type in [ winct.command ] for commands");
  while(0){

// get line
  fgets(userCommand, 255, stdin);

// system commands
    if (userCommand == "winct sys.lock\0"){
      lock();
    }

    else if (userCommand == "winct sys.restart\0"){
      restart();
    }

    else if (userCommand == "winct sys.shutdown\0"){
      shutdown();
    }

    else if (userCommand == "winct sys.uptime\0"){
      uptime();
    }

// WINCT commands
    else if (userCommand == "winct.coinflip\0"){
      coinflip();
    }

    else if (userCommand == "winct.diceroll\0"){
      diceroll(diceMax, diceMin);
    }

    else if (userCommand == "winct.help\0"){
      help();
    }

    else{
      printf("User Typed %s which was not valid", userCommand);
    }
  }
  



return 0;
}