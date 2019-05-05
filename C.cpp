#include<bits/stdc++.h>

using namespace std;

int main()
{
	set<string>k;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		string aux;
		cin >> aux;
		k.insert(aux);
	}
	if(k.size()!=n)printf("A funcao nao eh boa.\n");
	else printf("A funcao eh boa.\n");
	return 0;
}