#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]+1!=arr[i+1]){
            cout<<arr[i]+1<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<arr[0]-1<<endl;
    }
}
