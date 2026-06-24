#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
int pos;
cin>>pos;
    for(int i=r;i>pos;i--){
        for(int j=0;j<c;j++){
            arr[i][j]=arr[i-1][j];
        }
    }
    for(int j=0;j<c;j++){
        cin>>arr[pos][j];
    }

    for(int i=0;i<=r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}