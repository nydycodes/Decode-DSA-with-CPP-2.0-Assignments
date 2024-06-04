#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smax[n],k=0;
    int max = arr[0];
    smax[k] = arr[0];
    k++;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
            smax[k] = arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<smax[i]<<" ";
    }
    cout<<endl;
    cout<<smax[k-2]<<endl;
}
