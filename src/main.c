#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int randnum = 0;

void start_sequence(){
  printf("WinCT is active!\n");
}

void system_lock(){
  if(LockWorkStation() != true){
    printf("WinCT could not lock your workstation");
  }
  else{
    LockWorkStation();
  }
}

void system_shutdown(){
  if(system("c:\\windows\\system32\\shutdown /s /t 1") != true){
    printf("WinCT could not shutdown your workstation");
  }
  else{
    system("c:\\windows\\system32\\shutdown /s /t 1");
  }
}

void system_restart(){
  if(system("c:\\windows\\system32\\shutdown /r /t 1") != true){
    printf("WinCT could not restart your workstation");
  }
  else{
    system("c:\\windows\\system32\\shutdown /r /t 1");
  }
}

void system_uptime(){
  int uptime = GetTickCount();
  int uptimeSeconds =  floor(uptime / 1000);
  int uptimeMinutes =  floor(uptimeSeconds / 60);
  int uptimeHours =    floor(uptimeMinutes / 60);
      uptimeMinutes =  uptimeMinutes % 60;
  printf("System Uptime : %d Hours %d Minutes", uptimeHours, uptimeMinutes);
}

void winct_coinflip(){
  randnum = rand() % 2;

  switch (randnum){
  case 0:
    printf("Heads");
    break;
    
    case 1:
    printf("Tails");
    break;
    
    default:
    printf("Error : %d", randnum);
  break;
  }
}

void winct_diceroll(int dice_max, int dice_min){

}

void winct_help(){
  printf("System Commands \n");
  printf("winct_sys_lock \n");
  printf("winct_sys_restart \n");
  printf("winct_sys_shutdown \n");
  printf("winct_sys_uptime \n");
  printf("winct_sys_vol \n\n");

  printf("WinCT Commands \n");
  printf("winct_coinflip \n");
  printf("winct_diceroll \n");
  printf("winct_help \n");
}

int main(){

  char user_input[255] = "";
  int dice_min = 0;
  int dice_max = 0;

/*
  implement "flags" or "tags"
  like 'winct -uptime' would be way faster than 'winct_sys_uptime'
*/

  start_sequence();

  scanf("%s", &user_input);

  if(strcmp(user_input, "winct_sys_lock")){
    system_lock();
  }

  else if(strcmp(user_input, "winct_sys_restart")){
    system_restart();
  }

  else if(strcmp(user_input, "winct_sys_shutdown")){
    system_shutdown();
  }

  else if(strcmp(user_input, "winct_sys_uptime")){
    system_uptime();
  }

  else if(strcmp(user_input, "winct_coinflip")){
    winct_coinflip();
  }

  else if(strcmp(user_input, "winct_diceroll")){
  printf("what is the min?\n");
  scanf("%d", dice_min);

  printf("what is the max?\n");
  scanf("%d", dice_max);

  winct_diceroll(dice_min, dice_max);
  }

  else if(strcmp(user_input, "winct_help")){
    winct_help();
  }

  else{
    printf("%s is not a valid command!", user_input);
  }

return 0;
}