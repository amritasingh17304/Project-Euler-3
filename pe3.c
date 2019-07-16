#include<stdio.h>
int main()
{
	int remark,n,i,a[20],b[20];
	printf("Enter a number n:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			remark==1;
		}
	}
	for(i=2;i<n;i++)
	{
	if(remark==1)
	{
		printf("%d\n",i);
	}	
	}
	return 0;
}
