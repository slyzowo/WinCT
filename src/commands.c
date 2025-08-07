#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int randum = 0;

// system commands
void lock(){
  if(LockWorkStation() != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    LockWorkStation();
  }
}

void restart(){
  if(system("c:\\windows\\system32\\shutdown /r /t 1") != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    system("c:\\windows\\system32\\shutdown /r /t 1");
  }
}

void shutdown(){
  if(system("c:\\windows\\system32\\shutdown /s /t 1") != true){
    printf("winct could not lock your workstation\n");
  }
  else{
    system("c:\\windows\\system32\\shutdown /s /t 1");
  }
}

void uptime(){
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
int coinflip(){
  srand(time(0));
  randum = (rand() % 1) + 1;
  return randum;
}

int diceroll(int diceMax, int diceMin){
  srand(time(0));
  randum = (rand() % diceMax) + diceMin;
  return randum;
}

int d4(){
  srand(time(0));
  randum = (rand() % 4) + 1;
  return randum;
}

int d6(){
  srand(time(0));
  randum = (rand() % 6) + 1;
  return randum;
}

int d8(){
  srand(time(0));
  randum = (rand() % 8) + 1;
  return randum;
}

int d10(){
  srand(time(0));
  randum = (rand() % 10) + 1;
  return randum;
}

int d12(){
  srand(time(0));
  randum = (rand() % 12) + 1;
  return randum;
}

int d20(){
  srand(time(0));
  randum = (rand() % 20) + 1;
  return randum;
}

void help(){

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