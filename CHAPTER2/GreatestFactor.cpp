#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    for(int i=n/2 ; i>=1 ; i--){
        if(n%i==0){
            cout<<i<<" ";
            break;     // this stops the loop immediately
        } 
    }
}