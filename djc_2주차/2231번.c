#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int input,output=1000000;
    scanf("%d",&input);
    for(int i=0; i<input+1; i++){
        if(input==i+i/100000+(i%100000)/10000+((i%100000)%10000)/1000+(((i%100000)%10000)%1000)/100+((((i%100000)%10000)%1000)%100)/10+((((i%100000)%10000)%1000)%100)%10){
            if(output>i) output=i;
        }
    }
    if(output==1000000) output=0;
    printf("%d",output);
}