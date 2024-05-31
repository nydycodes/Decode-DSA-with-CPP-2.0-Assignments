//duplicate
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"duplicate present"<<endl;
                flag = true;
            }
        }
    }
    if(flag == false) cout<<"duplicate not present"<<endl;
    
    return 0;
}
