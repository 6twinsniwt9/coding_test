#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int num, goal, sum, out=0, arr[100]={0,};
    scanf("%d %d",&num, &goal);
    for(int i=0; i<num;i++) scanf("%d",&arr[i]);
    for(int i=0;i<num-2;i++){
        for(int j=i+1;j<num-1;j++){
            for(int k=j+1;k<num;k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum<=goal){
                    if(sum>out) out=sum;
                }
            }
        }
    }
    printf("%d",out);
}