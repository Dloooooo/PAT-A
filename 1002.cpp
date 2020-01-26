#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	priority_queue<int ,vector<int>, less<int> >pq1;
	map<int,double>expo;
	double res[1001];
	memset(res,0.0,sizeof(res));
	int A,B;
	scanf("%d",&A);
	int x;
	double y;
	for(int i=0;i<A;i++)
	{
		scanf("%d %lf",&x,&y);
		expo[x]+=y;
	}
	scanf("%d",&B);
	for(int i=0;i<B;i++)
	{
		scanf("%d %lf",&x,&y);
		expo[x]+=y;
	}
	int sum=0;
	for(int i=0;i<1001;i++)
	{
		if(expo[i])
			sum++;
	}
	printf("%d",sum);
	for(int i=1000;i>=0;i--)
	{
		if(expo[i])
		printf(" %d %.1lf",i,expo[i]);
	}
	printf("\n");
	return 0;
}
