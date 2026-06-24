#include<iostream>
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

    int sum=0;
    int newsum=0;
    int index=0;

    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
            if(sum>=newsum){
                newsum=sum;
                index=i;
            }
        
  }
for(int i=index;i<r-1;i++){
    for(int j=0;j<c;j++){
        arr[i][j]=arr[i+1][j];
    }
}
r--;
cout<<"final matrix"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;


}