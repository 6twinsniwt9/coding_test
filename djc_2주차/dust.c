#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char name[50][100],sub[50][100],word[100];
    scanf("%s",&name[0]);
    strcpy(word,name[0]);//이차원배열에서 arr[i]는 주소를 의미한다. 당연히 그냥 입력한 "hello"도 주소를 의미한다.
    printf("%s",word);
}