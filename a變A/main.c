#include <stdio.h>

// 定義 replace_all 函式
void replace_all(char *str, char oldChar, char newChar) {
    while (*str != '\0') {  // 當前字符不是字串結束符時進行迭代
        if (*str == oldChar) {
            *str = newChar;  // 將匹配的字符替換為新字符
        }
        str++;  // 移動指標到下一個字符
    }
}

int main() {
    char str[100], oldChar = 'a', newChar = 'A';
    scanf("%s", str);  // 讀取輸入的字串
    replace_all(str, oldChar, newChar);  // 替換字串中的字符
    printf("%s", str);  // 輸出處理後的字串
    return 0;
}
