#include <stdio.h>

int main()
{
	
	int sum = 0;
	int a = 1000;
	int b = 2000;
	
	for(int i=a ; i<=b ; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
			sum = sum + i;
		}
	}
	
	printf("toplam: %d",sum);
	
	
	
	
	return 0;
}
