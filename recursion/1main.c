//A recursive function in C that prints all natural numbers from 1 to 50

#include <stdio.h>
#include <stdlib.h>

void recursive_print(int);

int main(){
  int num = 1;
  
  recursive_print(num);
  
  return EXIT_SUCCESS;
}

void recursive_print(int n){
  if(n <= 50){
    printf("%d", n);
    recursive_print(n+1);
  }
}
