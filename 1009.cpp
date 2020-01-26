#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define INF 9999999999
int main(int argc, char** argv) {
	double p1[1005];
	double p2[1005];
	double pr[2019];
	for(int i=0;i<1005;i++)
	{
		p1[i]=0;
		p2[i]=0;
	}
	for(int i=0;i<2019;i++)
	{
		pr[i]=0;
	}
	int k;
	cin>>k;
	int p1m=0;
	for(int i=0;i<k;i++)
	{
		int a;
		double b;
		scanf("%d %lf",&a,&b);
		p1[a]+=b;
		if(p1m<a)
		{
			p1m=a;
		}
	}

	cin>>k;
	int p2m=0;
	for(int i=0;i<k;i++)
	{
		int a;
		double b;
		cin>>a>>b;
		p2[a]+=b;
		if(p2m<a)
		{
			p2m=a;
		}
	}
	
	for(int i=0;i<=p1m;i++)
	{
		
		for(int j=0;j<=p2m;j++)
		{
			if(p2[j]!=INF)
			{
				if(pr[i+j]==0)
					count++;
					pr[i+j]+=p1[i]*p2[j];
				}
			}
		}
	}
	for(int i=p1m+p2m;i>=0;i--)
	{
		printf("%d",count);
		if(!pr[i])
			printf(" %d %.1f",i,pr[i]);
	}
	return 0;
}
