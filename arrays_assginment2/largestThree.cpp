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
    int max=INT_MIN,smax=INT_MIN,tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]!=smax && tmax<arr[i]){
            tmax = arr[i];
        }
    }
    cout<<max<<" "<<smax<<" "<<tmax<<endl;
}
