#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(){
    char str[51]; // 아이디 최대 길이(50자) + NULL문자(1자)
    scanf("%s", str);
    printf("%s", str);
    printf("?\?!");
    
    return 0;
}