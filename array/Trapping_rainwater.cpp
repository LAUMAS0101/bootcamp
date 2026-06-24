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
    int water=0;
    int maxwater=0;

for(int i=0;i<n;i++){
   int m1=arr[i];
   int m2=arr[i];
    for(int j=0;j<i;j++){
        m1=max(arr[j],m1);
    }
    for(int k=i+1;k<n;k++){
         m2=max(arr[k],m2);
    }

    water=water+min(m1,m2)-arr[i];
}
cout<<"water = "<<water;
return 0;
}