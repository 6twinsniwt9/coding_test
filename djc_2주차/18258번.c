#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    char operand[2000000];
    int input[2000000];
    for(int i=0;i<num;i++) scanf("%s %d",&operand[i],&input[i]);
    for(int i=0;i<num;i++){
        if(operand[i]=="push") push(input[i]);
        else if(operand[i]=="pop") pop();
        else if(operand[i]=="front") front();
        else if(operand[i]=="back") back();
        else if(operand[i]=="empty") empty();
        else if(operand[i]=="size") size();
    }
}