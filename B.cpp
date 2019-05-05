#include<bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		double Q,Lq,Lr,Lp;
		scanf("%lf %lf %lf %lf",&Q,&Lq,&Lr,&Lp);
		double ans = (Q*(Lq+Lr))/Lp;
		int k = ceil(ans);
		if(k==1)printf("O livro contera %d pagina.\n",k);
		else printf("O livro contera %d paginas.\n",k);
	}
	return 0;
}