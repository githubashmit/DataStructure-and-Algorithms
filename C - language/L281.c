#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    char character;
    scanf(" %c",&character);
    for (int i = n; i >index ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=character;
    printf("Updated array after insertion: ");
    for(int i = 0; i < n+1; i++)
    {
        printf("%c ",arr[i]);
    }
    
    
    return 0;
}