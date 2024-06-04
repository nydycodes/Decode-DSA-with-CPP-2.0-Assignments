#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sumE = 0, sumO = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumE+=v[i];
        }
        else{
            sumO+=v[i];
        }
    }
    
    cout<<"difference: "<<sumO-sumE<<endl;
}
