#include<iostream>
using namespace std;
int sum;
int n;
int now,nex;
int main(){
    cin>>n;
    sum=0;
    if(n!=0){
        cin>>now;
        sum+=now*6+5;
    }
    for(int i=1;i<n;i++){
        cin>>nex;
        if(nex>now){
            sum+=(nex-now)*6;
        }else{
            sum+=(now-nex)*4;
        }
        sum+=5;
        now=nex;
    }
    cout<<sum;
    return 0;
}