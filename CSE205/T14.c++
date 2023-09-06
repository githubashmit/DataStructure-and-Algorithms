#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int position;
    cin>>position;
    int element;
    cin>>element;
    cout<<"Original array:"<<"";
    for(int j=0;j<n;j++){
        cout<<" "<<arr[j]<<"";
    }
    cout<<""<<endl;
    if(position < 0 || position>n){
        cout << "Invalid Position!" ;
        return 0;
    }
    else{
        for(int i=n-1;i>=position-1;i--){
            arr[i+1]=arr[i];
        }
        arr[position-1]=element;
        
    }
    
    cout<<"Updated Array:"<<"";
    for(int j=0;j<n+1;j++){
        cout<<" "<<arr[j]<<" ";
    }
    return 0;
}