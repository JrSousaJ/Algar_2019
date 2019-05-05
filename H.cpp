#include<bits/stdc++.h>

using namespace std;
int n,m,k=-3;
int v[101][101],vis[101][101];
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
void dfs(int x,int y)
{
	vis[x][y]=k;
	for(int i=0;i<8;i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && abs(v[x][y]-v[nx][ny])<=10 && v[nx][ny]>128)
		{
			dfs(nx,ny);
		}
	}		
}
int main()
{
	scanf("%d%d",&n,&m);
	memset(vis,-1,sizeof vis);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&v[i][j]);
			vis[i][j]=0;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[i][j] && v[i][j]>128)
			{
				dfs(i,j);
				k--;
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}