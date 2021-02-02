#include <stdio.h> 
#include <stdlib.h> 

int func_compare(const void * first, const void * second) 
{ 
    if (*(int*)first > *(int *)second) 
        return 1; 
    else if (*(int*)first < *(int *)second) 
        return -1; 
    else 
        return 0; 
} 

int main(void) 
{ 
    int num;
    scanf("%d",&num);
    int *arr=(int*)malloc(sizeof(int)*num); 
    for(int i=0; i<num; i++) scanf("%d",&arr[i]);
    qsort((int *)arr, num, sizeof(int), func_compare); 
    for (int i=0; i<num; i++) printf("%d\n", arr[i]);  
}