#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            v[i]+=10;
        }
        else{
            v[i]*=2;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
