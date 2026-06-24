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

    int sum1=0;
    int sum2=0;
    for(int i=0;i<r;i++){
       
           sum1 =sum1+arr[i][i];
           sum2=sum2+arr[i][r-1-i];
        
    }
     

    cout<<"first sum: "<<sum1<<endl;
    cout<<"second sum: "<<sum2<<endl;
    int difference=sum1-sum2;
    cout<<"difference is: "<<difference;
return 0;
}