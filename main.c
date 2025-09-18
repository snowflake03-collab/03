#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char i,j;
    
    printf("enter a character: ");
    scanf("%c", &i);
    
   j = i+1;
  
  printf("the next character of (%c) is (%c)", i, j);
  
  system("PAUSE");
  return 0;
}
