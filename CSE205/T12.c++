#include<iostream>
#include<cmath>
using namespace std;
void rotateArray(int n,int arr[],int position){
    if(n-position >0){
        for ( int i = n-position ;i<n;++i){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<n-position;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        int temp=abs(n-position);
        int temp1=abs(n-position);
        for(int i=n-1; ; i--){
            cout<<arr[i];
            temp=temp-1;
            if(temp==0){
                break;
            }
        }
        for(int i=0;i<n-temp1;i++){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int position;
    cin >>position ;
    cout<<"Original array:"<< endl;
    for(int j= 0;j < n; ++j){
        cout << " "<< arr[j]<<" ";
    }
    cout<<" "<<endl;
    rotateArray(n,arr,position);
    cout<<""<<endl;
    cout<<"Updated array:"<<endl;
    for(int j=0;j<n;j++){
        cout<<" "<<arr[j]<<" ";
    }
    return 0;

}