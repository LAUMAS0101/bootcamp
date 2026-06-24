#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        sum=sum+arr[i];
    }

    cout<<"sum:"<<sum;
    return 0;
}