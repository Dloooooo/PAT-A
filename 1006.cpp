#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	priority_queue<int, vector<int>, greater<int> >q; //ÉýÐò 
	priority_queue<int, vector<int>, less<int> >Q; //½µÐò 
	
	int n;
	scanf("%d",&n);
	string most,least;
	char unlock[8],out[8];
	int time_unlock=0,time_out=0;
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		getchar();
		scanf("%s",unlock);
		getchar();
		scanf("%s",out);
		getchar();
		time_unlock=(unlock[0]*10+unlock[1])*3600+(unlock[3]*10+unlock[4])*60+(unlock[6]*10+unlock[7]);
		time_out=(out[0]*10+out[1])*3600+(out[3]*10+out[4])*60+(out[6]*10+out[7]);
		if(q.empty()||time_unlock<q.top())
		{
			least=a;
			q.push(time_unlock);
		}
		if(Q.empty()||time_out>Q.top())
		{
			most=a;
			Q.push(time_out);
		}
	}
	cout<<least<<' '<<most<<endl;
	return 0;
}
