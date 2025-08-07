#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int randum = 0;

// system commands
void WINCTlock(){
  if(LockWorkStation() != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    LockWorkStation();
  }
}

void WINCTrestart(){
  if(system("c:\\windows\\system32\\shutdown /r /t 1") != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    system("c:\\windows\\system32\\shutdown /r /t 1");
  }
}

void WINCTshutdown(){
  if(system("c:\\windows\\system32\\shutdown /s /t 1") != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    system("c:\\windows\\system32\\shutdown /s /t 1");
  }
}

void WINCTuptime(){
/*
  Uptime is in milliseconds
  Milliseconds -> Seconds -> Minutes -> Hours
*/

  int uptime = GetTickCount();
  int uptimeSeconds =  floor(uptime / 1000);
  int uptimeMinutes =  floor(uptimeSeconds / 60);
  int uptimeHours =    floor(uptimeMinutes / 60);
      uptimeMinutes =  uptimeMinutes % 60;
  printf("System Uptime : %d hrs & %d minutes\n", uptimeHours, uptimeMinutes);
}

// winct
int WINCTcoinflip(){
  srand(time(0));
  randum = (rand() % 1) + 1;
  return randum;
}

int WINCTdiceroll(int diceMax, int diceMin){
  srand(time(0));
  randum = (rand() % diceMax) + diceMin;
  return randum;
}

int WINCTd4(){
  srand(time(0));
  randum = (rand() % 4) + 1;
  return randum;
}

int WINCTd6(){
  srand(time(0));
  randum = (rand() % 6) + 1;
  return randum;
}

int WINCTd8(){
  srand(time(0));
  randum = (rand() % 8) + 1;
  return randum;
}

int WINCTd10(){
  srand(time(0));
  randum = (rand() % 10) + 1;
  return randum;
}

int WINCTd12(){
  srand(time(0));
  randum = (rand() % 12) + 1;
  return randum;
}

int WINCTd20(){
  srand(time(0));
  randum = (rand() % 20) + 1;
  return randum;
}

void WINCThelp(){

  printf("System Commands\n");
  printf("Winct sys.lock\n");
  printf("Winct sys.restart\n");
  printf("Winct sys.shutdown\n");
  printf("Winct sys.uptime\n");
  
  printf("WinCT Commands\n");
  printf("Winct.coinflip\n");
  printf("Winct.d4\n");
  printf("Winct.d6\n");
  printf("Winct.d8\n");
  printf("Winct.d10\n");
  printf("Winct.d12\n");
  printf("Winct.d20\n");
  printf("Winct.diceroll\n");
  printf("Winct.help\n");
}