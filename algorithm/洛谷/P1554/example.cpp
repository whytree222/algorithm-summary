#include<bits/stdc++.h>
using namespace std;
int n,m,a[10];
int main(){
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		int t=i;
		while(t!=0)
		{
			a[t%10]++;//拆数计数一气呵成 
			t/=10; 
		}
	}
	for(int e:a)//范围for嗯哼 
	cout<<e<<" ";
	return 0;
}

