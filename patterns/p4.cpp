#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Enter the number of test cases : ";
    cin>>T;
    while(T--){
        int n,count = 1;;
        cout<<"Enter the value of n : ";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
               cout<<count<<" "; 
            }
            count++;
            cout<<endl;
        }
    }
}
/*
Enter the value of n : 6
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/