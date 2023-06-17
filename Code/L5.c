/* Find the time complexity of the func1 function in the program show in program1.c as follows: */
#include <stdio.h>

void foo(int array[],int length)
{
    int sum=0;
    int product = 1;
    for(int i =0 ; i < length ; i++)
    {
        sum += array[i];
        
    }
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
        
    }
    printf("%d\n",sum);
    printf("%d\n",product);
}
int main()
{
    int arr[]= {3,5,3};
    foo(arr , 3);
    return 0;
}