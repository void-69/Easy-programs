#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Enter the number of test cases : ";
    cin>>T;
    while(T--){
        int n,count = 1;
        cout<<"Enter the value of n : ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i%2 == 0 && j%2 == 0 || j == i || j%2 == 1 && i%2 == 1){
                    cout<<"1";
                }
                else cout<<"0";
            }
            cout<<endl;
        }
    }
}
/*
Enter the value of n : 5
1
01
101
0101
10101
*/