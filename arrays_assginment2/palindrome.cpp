#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            cout<<"not palindrome"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"palindrome"<<endl;
    }
    
}
