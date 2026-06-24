#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int start=0;
    int end=r-1;
    while(start<end){
        for(int j=0;j<c;j++){
            swap(arr[start][j],arr[end][j]);
            
        }
        start++;
            end--;
    }
    for(int i=0;i<r;i++){
        reverse(arr[i],arr[i]+c);
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}