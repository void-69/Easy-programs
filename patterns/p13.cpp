#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cout<<"Enter the number of test cases : ";
    cin>>T;
    while(T--){
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                count++;
                cout<<count<<" ";
            }
            cout<<endl;
        }
    }
}