#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct profile{ //밑에 이름 profile과 같아야하나요?
    int age;
    char name[101];//101로 바꿔주니깐 틀렸다고 표시된게 해결됐다. 아무래도 \n받아줘야돼서 그런듯..?
    int index;
} profile;

profile data[100000];//계속 바로 종료되었는데 main함수 위에서 선언하니깐 해결됐다....

int func_compare(const void * first, const void * second) 
{ 
    profile *A=(profile*)first;
    profile *B=(profile*)second;
    if (A->age > B->age) 
        return 1; 
    else if (A->age < B->age) 
        return -1; 
    else
        if(A->index>B->index) return 1;
        if(A->index<B->index) return -1;
} 

int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++) {
        scanf("%d %s",&data[i].age,&data[i].name);
        data[i].index=i+1;
        }
    qsort(data,num,sizeof(profile),func_compare);
    for(int i=0; i<num;i++) printf("%d %s\n",data[i].age,data[i].name);
}