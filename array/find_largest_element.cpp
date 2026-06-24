#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    cout<<"maximum value:"<<min;
    return 0;
}