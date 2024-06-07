#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100]; // 用來儲存輸入的字串
    int a;
    
    // 讀取輸入的字串
    scanf("%s", input);
    
    // 解析字串中的整數
    sscanf(input, "%d", &a);
    
    int b = a % 7;
    printf("%d\n", b);
    
    return 0;
}

