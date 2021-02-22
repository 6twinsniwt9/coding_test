#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int queue[2000005]={0,}, first=0, last=-1, cnt=0; int input=0;
void push(){
    scanf("%d",&input);
    last++;cnt++;
    queue[last]=input;

}
void pop(){
    if(cnt>0){
        printf("%d\n",queue[first]);
        first++;cnt--;
    }
    else printf("-1\n");
}
void front(){
    if(cnt==0) printf("-1\n");
    else printf("%d\n",queue[first]);
}
void back(){
    if(cnt==0) printf("-1\n");
    else printf("%d\n",queue[last]);
}
void size(){ 
    printf("%d\n",cnt);
}
void empty(){
    if(cnt==0) printf("1\n");
    else printf("0\n");
}
int main(){
    int num,input;
    char operand[6];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%s",operand);
        if(strcmp(operand,"push")==0) push();
        else if(strcmp(operand,"pop")==0) pop();
        else if(strcmp(operand,"front")==0) front();
        else if(strcmp(operand,"back")==0) back();
        else if(strcmp(operand,"empty")==0) empty();
        else if(strcmp(operand,"size")==0) size();
    }
}