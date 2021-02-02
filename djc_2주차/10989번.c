#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int counter[10001]={0,}, num, in;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        scanf("%d",&in);
        counter[in]=counter[in]+1;
    }
    for(int i=1;i<10001;i++){
        while(counter[i]!=0){
            printf("%d\n",i);
            counter[i]=counter[i]-1;
        }
    }
}