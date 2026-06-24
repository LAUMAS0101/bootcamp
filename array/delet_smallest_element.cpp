#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int index=-1;
    int min=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            index=i;
        }
    }

    for(int i=0;i<n;i++){
        if(index==i)
        continue;
        cout<<arr[i]<<" ";
    }

    return 0;

}