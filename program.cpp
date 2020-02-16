#include <iostream>
using namespace std;

int main() {
// cout<<"GfG!";
int n;
cin>>n;
int arr[n][n],ar[n];
if(n%2==0){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=k;
            k=k+1;
        }
    }
    // cout<<"reacg";
    int q=0;
    for(int i=n;i>0;i--){
        if(i%2==0){
            ar[q]=n-i;
            // cout<<ar[q]<<" ";
            q++;
        }
        // q++;
    }
    for(int i=1;i<n;i++){
        if(i%2!=0){
            ar[q]=n-i;
            // cout<<ar[q]<<endl;
            q++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=n-1)
            cout<<arr[ar[i]][j]<<"*";
            else
            cout<<arr[ar[i]][j];
        }
        cout<<endl;
    }
}
else{
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=k;
            k=k+1;
        }
    }
    // cout<<"reacg";
    int q=0;
    for(int i=n;i>0;i--){
        if(i%2==0){
            ar[q]=n-i;
            // cout<<ar[q]<<" ";
            q++;
        }
        // q++;
    }
    ar[q]=n;
    // cout<<ar[q];
    q++;
    for(int i=1;i<n;i++){
        if(i%2!=0){
            ar[q]=n-i;
            // cout<<ar[q]<<endl;
            q++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=n-1)
            cout<<arr[ar[i]-1][j]<<"*";
            else
            cout<<arr[ar[i]-1][j];
        }
        cout<<endl;
    }
}
return 0;
}
