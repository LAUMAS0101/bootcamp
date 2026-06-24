#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    // Transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    // Reverse each row
    for(int i=0;i<n;i++)
    {
        int start=0,end=n-1;

        while(start<end)
        {
            int temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;

            start++;
            end--;
        }
    }

    // Print
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}