#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int input,number;
    scanf("%d",&input);
    number=(1000-input)/500+((1000-input)%500)/100+(((1000-input)%500)%100)/50+((((1000-input)%500)%100)%50)/10+(((((1000-input)%500)%100)%50)%10)/5+((((((1000-input)%500)%100)%50)%10)%5);
    printf("%d",number);
}