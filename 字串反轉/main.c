#include <stdio.h>
#include <string.h>
int main(){
char str[100];
scanf("%s",str);
int lengh = strlen(str);
for(int i = lengh -1;i>=0;i--){
    printf("%c",str[i]);
}
return 0;
}
