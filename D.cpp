#include<bits/stdc++.h>

using namespace std;
int v[101],vis[101];
int dp[101][6001];
int n,teste=-1;
int pd(int pos, int troco)
{
	if(troco==0)return 1;
	if(pos==n)return 0;
	if(dp[pos][troco] != -1)return dp[pos][troco];
	
	int ans = pd(pos + 1, troco);
	if(troco>=v[pos])
	{
		if(!vis[pos] && !ans && pd(pos + 1, troco - v[pos]))
		{
			vis[pos]=1;
			ans |= pd(pos + 1, troco - v[pos]);
		}
	}
	return dp[pos][troco] = ans;
}
int main()
{
	memset(vis,0,sizeof vis);
	memset(dp,-1,sizeof dp);
	scanf("%d",&n);
	int tot=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
		tot+=v[i];
	}
	int f=1;
	for(int i=0;i<3;i++)
	{
		int ae=-1;
		int k=tot/3;
		for(int x=0;x<n;x++)
		{
			if(!vis[x])
			{
				ae = x;
				break;
			}
		}
		if(ae==-1)
		{
			f=0;
			break;
		}
		f &= pd(ae,k);
	}
	if(f)printf("SIM\n");
	else printf("NAO\n");
	return 0;
}