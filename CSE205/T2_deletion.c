#include<stdio.h>
int main(){
    int n , array[10];
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter element in an array");
    for(int i =0;i<n;i++)
    scanf("%d",&array[i]);
    printf("\nafter deletion");
    for (int i = 0; i <n-1 ; i++)
    {
        printf("\n%d",array[i]);
    }
    
}