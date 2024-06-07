#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *clone_string(char *str) {
    int lengh = strlen(str);
    char *new_str = (char*)calloc(lengh + 1,sizeof(char));
    strcpy(new_str,str);
    return new_str;
}

void free_string(char *str) {
    free(str);
}

int main() {
    char str[100];
    // 讀取輸入字串，最大長度為 99（預留一個位置給結束符）
    scanf("%99s", str);
    // 複製輸入的字串
    char *pstr = clone_string(str);
    // 輸出複製的字串
    printf("The cloned string :%s\n", pstr);
    // 釋放複製字串的記憶體
    free_string(pstr);
    return 0;
}
