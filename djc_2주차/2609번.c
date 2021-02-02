#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a,b,small,max_divider,min_multiplier;
    scanf("%d %d",&a,&b);
    if(a>b) small=b;
    else small=a;
    while(a%small!=0 || b%small!=0){
        small--;
    }
    max_divider=small;
    min_multiplier=max_divider*(a/max_divider)*(b/max_divider);
    printf("%d\n%d",max_divider,min_multiplier);
}