#include <stdio.h>
#include <string.h>

void start_sequence(){
  printf("this is a starting phase!  \n");
}

int main(){

  char user_input[] = "";
  int dice_min = 0;
  int dice_max = 0;

  start_sequence();

// BTW future slyzowo, this will not compile, this is semi-pseudocode
  if(user_input == "winct_sys_lock"){
    printf(" you typed %s \n", user_input);
  }

  else if(user_input == "winct_sys_restart"){
    printf(" you typed %s \n", user_input);
  }

  else if(user_input == "winct_sys_shutdown"){
    printf(" you typed %s \n", user_input);
  }

  else if(user_input == "winct_sys_uptime"){
    printf(" you typed %s \n", user_input);
  }

  else if(user_input == "winct_coinflip"){
    printf(" you typed %s \n", user_input);
  }

  else if(user_input == "winct_diceroll"){
    printf(" you typed %s \n", user_input);
  }

  else{
    printf("%s is not a valid command", user_input);
  }

return 0;
}