#include <stdio.h>
int main(int argc, char *argv[]){
  if(argc>2){
    printf("Too many args");
  }
  else{
  printf("%d", argc);
  printf("%s", argv[1]);
}


}
