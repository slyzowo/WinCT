#include <stdio.h>
#include <math.h> // for maths
#include <time.h> // for random numbers
#include <string.h> // for fgets
#include <windows.h> // for windows functions

int randnum = 0;

void startseq(){
  printf(" _       ___            __\n");
  printf("| |     / (_)___  _____/ /_\n");
  printf("| | /| / / / __ \\/ ___/ __/\n");
  printf("| |/ |/ / / / / / /__/ /_\n");
  printf("|__/|__/_/_/ /_/\\___/\\__/\n");
}

  void winct_lock(){
    if(LockWorkStation() != TRUE){
      printf("Winct could not restart your computer");
    }
    else{
      LockWorkStation();
    }
  }

/*
  /t is time
  /s is shutdown
  /r is restart
  */

  void winct_restart(){
    if(system("c:\\windows\\system32\\shutdown /r /t 1") != TRUE){
      printf("Winct could not restart your computer");
    }
    else{
      system("c:\\windows\\system32\\shutdown /r /t 1");
    }
  }

  void winct_shutdown(){
    if(system("c:\\windows\\system32\\shutdown /s /t 1") != TRUE){
      printf("Winct could not restart your computer");
    }
    else{
      system("c:\\windows\\system32\\shutdown /s /t 1");
    }
  }
  void winct_uptime(){
    int uptime = GetTickCount();
    int uptimeSeconds =  floor(uptime / 1000);
    int uptimeMinutes =  floor(uptimeSeconds / 60);
    int uptimeHours =    floor(uptimeMinutes / 60);
        uptimeMinutes =  uptimeMinutes % 60;

    printf("System Uptime : %d hrs & %d", uptimeHours, uptimeMinutes);
  }

  void coinflip(){
    randnum = rand() % 2;

    switch (randnum){
    case 0:
      printf("Heads\n");
    break;

    case 1:
      printf("Tails\n");
    break;

    default:
      printf("Winct had an error");
    break;
    }

  }

  int diceroll(int dicemax, int dicemin){
    printf("What is the max?\n");
    scanf("%d", &dicemax);
    printf("What is the min?\n");
    scanf("%d", &dicemin);
    randnum = rand() % dicemax + dicemin;
    return randnum;
  }

  void help(){

    printf("System Commands\n");
    printf("winct sys lock\n");
    printf("winct sys restart\n");
    printf("winct sys shutdown\n");
    printf("winct sys uptime\n\n");
    
    printf("Winct Commands\n");
    printf("winct coinflip\n");
    printf("winct diceroll\n");
    printf("winct help\n");
  }

int main(){
  
  // declaring all vars at the top :3
  char userCommand[256];
  int dicemax = 0;
  int dicemin = 0;
  srand(time(NULL)); // seeding current time


  startseq();

  printf("Type in [ winct.help ] for help\n");
  fgets(userCommand, sizeof(userCommand), stdin);

  // Strip trailing newline
  size_t len = strlen(userCommand);
  if (len > 0 && userCommand[len - 1] == '\n') {
      userCommand[len - 1] = '\0';
  }

// system commands

  if (strcasecmp(userCommand, "winct lock") == 0){
    winct_lock();
  }
  
  else if (strcasecmp(userCommand, "winct restart") == 0){
    winct_restart();
  }
  
  else if (strcasecmp(userCommand, "winct shutdown") == 0){
    winct_shutdown();
  }
  
  else if (strcasecmp(userCommand, "winct uptime") == 0){
    winct_uptime();
  }
  
  // WINCT commands
  else if (strcasecmp(userCommand, "winct coinflip") == 0){
    coinflip();
  }
  
  else if (strcasecmp(userCommand, "winct diceroll") == 0){
    diceroll(dicemax, dicemin);
  }

  else if (strcasecmp(userCommand, "winct help") == 0){
    help();
  }

  else{
    printf("User typed %s which was not a valid command", userCommand);
  }

return 0;
}