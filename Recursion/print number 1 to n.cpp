#include<bits/stdc++.h>
using namespace std;
int recursion(int n){
    if(n>0){
        recursion(n-1);//in recursion data stored in stack
        cout<<n;
    }
}
int main(){
    int n;
    cin>>n;
    recursion(n);
}
