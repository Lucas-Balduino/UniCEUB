#include <stdio.h>

void main(){
	int i = 0, n = 0;
	printf("\nEntre com numeros:");
	scanf("%d",&n);
	for (printf("\n 		Dec, Oct, Hex"), i = 1;i <= n;i = i + 1)
	{
		if((i % 2) == 0)
		{
			printf("\nnumero par -----> %4d, %4o, %0X",i,i,i);
		}
		printf("\nFim");
	}
}
