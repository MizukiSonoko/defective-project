#include <stdio.h>
#include <string.h>

void greeting() {
  printf("Hello Ruby-san! I'm C\n");
}

char* invade() {
  return "Hello! I'm from C\n";
}

char* accept(char* name){
  if(!strcmp(name,"ruby")){
    return "Youkoso!";
  }else{
    return "Ha";
  }
}
