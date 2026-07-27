#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	int n,i;
	printf("\nEntre com o valor de n: ");
	scanf("%d",&n);
	i = n;
	while (1>=0)
	{
		if((i%2)==0)
		{
			printf("%d\n",i);
		}
	i-=1;
	}
}
