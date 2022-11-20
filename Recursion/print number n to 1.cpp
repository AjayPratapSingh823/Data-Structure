#include<bits/stdc++.h>
using namespace std;
void recursion(int n,int i){
    if(i<1){
        return;
    }
        cout<<i;
        recursion(n,i-1);//in recursion data stored in stack
}
int main(){
    int n;
    cin>>n;
    recursion(n,n);
}
//second method
#include<bits/stdc++.h>
using namespace std;
int recursion(int n){
    if(n>0){
        cout<<n;
        recursion(n-1);//in recursion data stored in stack 
    }
}
int main(){
    int n;
    cin>>n;
    recursion(n);
}
