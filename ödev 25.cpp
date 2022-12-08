#include <stdio.h>

int main()
{
	
	int a,b,ortak;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	for (int i ; i>a && i>b ; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			printf("%d",i);
		}
	}
	
	
	
	
	
	return 0;
}
