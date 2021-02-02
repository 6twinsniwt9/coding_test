#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char arr[1000000];
    int i=0,count=0;
    gets(arr);
    for(i=0; i<strlen(arr);i++)
        if(arr[i]==' ') count++;
        count=count+1;
    if(arr[0]==' '&& arr[i-1]!=' ') count=count-1;
    else if(arr[0]!=' '&& arr[i-1]==' ') count=count-1;
    else if(arr[0]==' ' && arr[i-1]==' ') count=count-2;
    printf("%d",count);
}