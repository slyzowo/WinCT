#include <stdio.h>
#include <string.h>

void start_sequence(){
  printf("WinCT is active!\n");
}

void system_lock(){

}

void system_shutdown(){

}

void system_restart(){

}

void system_uptime(){

}

void winct_coinflip(){

}

void winct_diceroll(int dice_max, int dice_min){
  printf("what is the min?\n");
  scanf("%d", dice_min);

  printf("what is the max?\n");
  scanf("%d", dice_max);

  printf("DEBUG : \nDice Max : %d, Dice Min : %d", dice_max, dice_min);
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

// BTW future slyzowo, this will not compile, this is pseudocode
  if(strcmp(user_input, "winct_sys_lock")){
    printf(" you typed %s \n", user_input);
  }

  else if(strcmp(user_input, "winct_sys_restart")){
    printf(" you typed %s \n", user_input);
  }

  else if(strcmp(user_input, "winct_sys_shutdown")){
    printf(" you typed %s \n", user_input);
  }

  else if(strcmp(user_input, "winct_sys_uptime")){
    printf(" you typed %s \n", user_input);
  }

  else if(strcmp(user_input, "winct_coinflip")){
    printf(" you typed %s \n", user_input);
  }

  else if(strcmp(user_input, "winct_diceroll")){
    printf(" you typed %s \n", user_input);
  }

  else{
    printf("%s is not a valid command!", user_input);
  }

return 0;
}