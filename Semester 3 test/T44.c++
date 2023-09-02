#include<iostream>
using namespace std;
int main(){
    int x, *y;
    y=&x;
    x=10;
    cout<<++(*y);
}