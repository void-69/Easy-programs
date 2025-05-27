#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Enter the number of test cases : ";
    cin>>T;
    while(T--){
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
    }

}
/*
1
12
123
1234
12345
*/