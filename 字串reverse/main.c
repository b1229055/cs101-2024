#include <stdio.h>
#include <string.h>

void reverse(char *str) {
	if(*str == '\0'){
      return;
    }
  reverse(str + 1);
  printf("%c",*str);
}

int main() {
    char str[100];
    scanf("%99s", str);  
    reverse(str);  
    printf("\n"); 
    return 0;
}
