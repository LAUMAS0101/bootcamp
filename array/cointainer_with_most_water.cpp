#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int maxarea=0;
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
       int height =min(arr[i],arr[j]);
       int width=j-i;
    
       int area=height * width;
       maxarea=max(area,maxarea);

    }

    
}

cout<<maxarea;


}