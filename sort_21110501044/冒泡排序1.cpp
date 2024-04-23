#include <stdio.h>
int main()
{
	int N,a[100],i,j,t;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}   
	t=a[N-1];
	for(j=N-1;j>0;j--)
	{
		a[j]=a[j-1];
	}
	a[0]=t;
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
