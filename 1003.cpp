#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int map[501][501];
int num[501];
int vis[501];
int diff=0,most=0,least=999999999;
int N,M,C1,C2;

void dfs(int a,int b,int c,int length)
{
	int len=length;
	int teams=c;
	if(a==b)
	{
		if(least>len)
		{
			least=len;
			diff=1;
			most=teams;
		}
		else if(least==len)
		{
			diff++;
			if(most<teams)
			{
				most=teams;
			}
		}
		return;
	}
	if(len>least)
	{
		return;
	}
	for(int i=0;i<N;i++)
	{
		if(vis[i]==0&&map[a][i]!=999999999)
		{
			vis[i]=1;
			dfs(i,b,teams+num[i],len+map[a][i]);
			vis[i]=0;
		}
	}
}

int main(int argc, char** argv) {
	scanf("%d%d%d%d",&N,&M,&C1,&C2);
	int a,b,c;
	int temp;
	for(int i=0;i<N;i++)
	{
		vis[i]=0;
		for(int j=0;j<N;j++)
		{
			map[i][j]=999999999;
		}
	}
	for(int i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<M;i++)
	{
		scanf("%d%d%d",&a,&b,&temp);
		map[b][a]=temp;
		map[a][b]=temp;
	}
	vis[C1]=1;
	dfs(C1,C2,num[C1],0);
	printf("%d %d",diff,most);
	return 0;
}
