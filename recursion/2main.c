//A recursive function in C that count the number of character of a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#DEFINE 20

int count_char(char*);

int main(){
  char str[N];
  
  puts("Isert word");
  scanf("%s", str);
  
  printf("The string contains %d characters\n", count_char(str));

  return EXIT_SUCCESS;
}

int count_char(char* p){
  if(*p == '\0')
    return 0;
  else
    return 1 + count_char(p + 1);
}
