#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 int counter(char *arr,char *word){
     char *p;
     int count=0;
     while((p=strstr(arr,word))!=NULL){
         count++;
         arr=p+strlen(word);
     }
     return count;
 }
 int main(){
     char arr[100], *a="dz=",*b="lj",*c="nj",*d="=",*e="-";
     int count=0;
     scanf("%s",arr);
     count=strlen(arr)-2*counter(arr,a)-counter(arr,b)-counter(arr,c)-(counter(arr,d)-counter(arr,a))-counter(arr,e);
     printf("%d",count);
 }