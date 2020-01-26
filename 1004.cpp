#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int N,M;
	while(scanf("%d%d",&N,&M)!=EOF)
	{
		vector<int> vec[101];
		vector<int> res;
		queue<int> q;
		if(N==0)
		{
			break;
		}
		getchar();
		for(int i=0;i<M;i++)
		{
			int x=0;
			char a;
			a=getchar();
			x+=(a-'0')*10;
			a=getchar();
			x+=a-'0';
			int k;
			scanf("%d",&k);
			getchar();
			for(int j=0;j<k;j++)
			{
				int y=0;
				char b;
				b=getchar();
				y+=(b-'0')*10;
				b=getchar();
				y+=b-'0';
				vec[x].push_back(y);
				getchar();
			}
		}
		q.push(1);
		while(!q.empty())
		{
			int res0=0;
			int l=q.size();
			for(int i=0;i<l;i++)
			{
				int k=q.front();
				if(vec[k].size()==0)
				{
					res0++;
					q.pop();
					continue;
				}
				for(int j=0;j<vec[k].size();j++)
				{
					q.push(vec[k][j]);
				}
				q.pop();
			}
			res.push_back(res0);
		}
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<' '<<res[i];
		}
		printf("\n");
	}
	return 0;
}
