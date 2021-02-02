#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int num, arr[50][2]={0,};
    scanf("%d",&num);
    for(int i=0;i<num;i++) scanf("%d %d",&arr[i][0],&arr[i][1]);
    for(int i=0;i<num;i++){
        int rank=1;
        for(int j=0; j<num; j++){
            if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1])
                rank++;
        }
        printf("%d ",rank);
    }
}