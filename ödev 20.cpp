#include <stdio.h>

int main()
{
	
	int n;
	int b = 0;
	int c=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n = n / 10;
		c++;
	}
	
	printf("basamak sayisi: %d",c);	
	
	
	
	
	return 0;
}
