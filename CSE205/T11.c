#include<stdio.h>
void cal(int arr[], int n ){
    int temp=0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cal(arr ,n );
    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Second Smallest Element: %d",arr[1]);
    return 0;
}
