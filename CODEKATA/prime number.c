#include<stdio.h>
int main()
{
int c=0,n,i;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
		c++;
	}
}
if(c==0)
printf("\n Prime number");
else
printf("\n not a prime number");
return 0;
}
