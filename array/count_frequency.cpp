#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<"frequency of "<<arr[i]<<" -> "<<count<<endl;
    }
    return 0;
}