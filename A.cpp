#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int k;
		scanf("%d",&k);
		char s[100005];
		getchar();
		scanf("%[^\n]",s);
		k%=(int)strlen(s);
		queue<char>fil;
		for(int i=0;i<strlen(s);i++)fil.push(s[i]);

		while(k--)
		{
			char aux=fil.front();
			fil.pop();
			fil.push(aux);
		}
		while(!fil.empty())
		{
			printf("%c",fil.front());
			fil.pop();
		}
		printf("\n");
	}
	return 0;
}