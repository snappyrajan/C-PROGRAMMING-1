#include <stdio.h>

int main(void) {
	int n,a[100],min,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
	// your code goes here
	return 0;
}
