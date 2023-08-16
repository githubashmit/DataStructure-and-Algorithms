#include<stdio.h>
int main()
{
    int n , array[10];
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("\nenter elements in an array");
    for(int i=0; i<n ; i++)
    scanf("%d",&array[i]);
    n--;
    for(int i =0; i<n ; i++)
    array[i]=array[i+1];
    printf("\nafter deletion");
    for(int i=0 ; i<n ; i++)
    printf("\n%d",array[i]);
}