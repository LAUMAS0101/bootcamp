#include<iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"enter the size of matrix"<<endl;
    int n,m;
    cin>>n>>m;
    int sum=0;
    int newsum = INT_MIN;
    int maxsum=-1;
    cout<<"enter the element of matrix";
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is:"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
for(int i=0;i<n;i++){
     sum=0;
    for(int j=0;j<m;j++){
        sum=sum+arr[i][j];
    }
    
    if(newsum<=sum){
        newsum=sum;
        maxsum=i;
       
    }
}
cout<<"max sum is:"<<newsum<<endl;
cout<<"new matrix:"<<endl;
for(int i=0;i<n;i++){
    if(i==maxsum)
    continue;
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}