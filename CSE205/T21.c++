#include<iostream>
using namespace std;
void heapify(int a[] , int n , int i)
{
    int parent;
    parent = (i-1)/2;
    if(parent>=0)
    {
        if(a[parent]<a[i])
        {
            swap(a[parent], a[i]);
            heapify(a,n,parent);
        }
    }
}
void insert(int a[], int &n , int val){
    n=n+1;
    a[n-1] = val;
    heapify(a, n, n-1)

}
void print (int a[], int n){
    cout<<"\nThe Array Representing of Heap is\n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";

    }
}
int main(){
    int a[100] = {10, 5, 3, 2, 4};
    int n = 5;
    int val = 15;
    print(a,n);
    insert
}