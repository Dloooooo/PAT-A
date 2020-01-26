#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	vector<int> vec;
	int arr[10010];
	int n;
	scanf("%d",&n);
	bool flag=false;
	int first=0,last=0,most=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>=0)
		{
			flag=true;
		}
		vec.push_back(arr[i]);
		int res=accumulate(vec.begin(),vec.end(),0);
		if(res<0)
		{
			vec.clear();
		}
		else
		{
			if(res>most)
			{
				most=res;
				first=*vec.begin();
				last=*(vec.end()-1);
			}
		}
	}
	if(!flag)
	{
		printf("0 %d %d\n",arr[0],arr[n-1]);
	}
	else
	{
		printf("%d %d %d\n",most,first,last);
	}
	return 0;
}
