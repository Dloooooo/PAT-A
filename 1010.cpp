#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<vector>
#include<cmath>
const int maxn=1e5+5;
typedef long long ll;
using namespace std;
long long findMax(string s){//找最大的一位 
	long long Max=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){
			Max=max(Max,(long long)(s[i]-'0'));
		}else{
			Max=max(Max,(long long)(s[i]-'a'+10));			
		}
	}
	return Max;
}
long long trans(string s,long long radix){//radix进制转十进制 
	long long sum=0;
	for(int i=0;i<s.length() ;i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*radix+s[i]-'0';
		}else{
			sum=sum*radix+(s[i]-'a'+10);
		}
	}
	return sum;
}
void find(string num1,string num2,int radix){//已知num1 
	long long number;
	number=trans(num1,radix);
	long long l=findMax(num2)+1;
	long long r=max(number,l)+1;
	while(l<=r){
		long long mid=(l+r)/2;
		long long temp=trans(num2,mid);
		if(temp==number){
			cout<<mid;
			break;
		}else if(temp>number||temp<0){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	if(l>r){
		cout<<"Impossible";
	}
}
int main(){
    string num1,num2;
    int tag,radix;
    cin>>num1>>num2>>tag>>radix;
    if(tag==1){
    	find(num1,num2,radix);
	}else{
		find(num2,num1,radix);
	}
    return 0;
}
