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
    
    vector<int> sorted = v;
    sort(sorted.begin(),sorted.end());
    
    int flag = 0;
    for(int i=0;i<n;i++){
        if(v[i]!=sorted[i]){
            cout<<"not sorted"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"sorted"<<endl;
    }
}
