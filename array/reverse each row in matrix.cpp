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

    for(int i=0;i<r;i++){
        int start=0;
        int end=c-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
cout<<"new matrix "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}