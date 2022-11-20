#include<bits/stdc++.h>
using namespace std;
void recursion(int n){
    if(n>0)
    {
        recursion(n-1);
        cout<<"ajay";
    }

}
int main(){
    int n;
    cin>>n;
    recursion(n);
}
