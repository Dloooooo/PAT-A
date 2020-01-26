#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

char num[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int ans[101];
string a;
int main(int argc, char** argv) {
	cin>>a;
	for(int i=0;i<101;i++)
	{
		ans[i]=0;
	}
	int nss=0;	
	for(int i=0;i<a.length();i++)
	{
		ans[0]+=a[i]-'0';
		for(int j=0;j<=nss;j++)
		{
			if(ans[j]>=10)
			{
				ans[j]-=10;
				ans[j+1]+=1;
				if(j==nss)
				{
					nss++;
					break;
				}
			}
		}
	}
	bool flag=false;
	for(int i=nss;i>=0;i--)
	{
		if(ans[i]!=0||flag)
		{
			flag=true;
			if(i==0)
			{
				cout<<num[ans[i]];
			}
			else
			{
				cout<<num[ans[i]]<<' ';
			}
		}
	}
	if(!flag)
	{
		cout<<"zero";
	}
	
	return 0;
}
