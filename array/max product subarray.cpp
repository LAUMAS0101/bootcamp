#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxprod=arr[0];
    int minprod=arr[0];
    int answer=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<0)
        swap(maxprod,minprod);

        minprod=min(arr[i],minprod*arr[i]);
        maxprod=max(arr[i],maxprod*arr[i]);

        answer=max(answer,maxprod);
        

    }

    cout<<" answer "<<answer;
    return 0;
}