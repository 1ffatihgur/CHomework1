#include <stdio.h>
#include <math.h>

int main()
{
	int b ;
	int k ;
	int n,temp;
	int c = 0;
	
	temp = n; 
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	b = n % 10;
	
	
	while(n>9)
	{
		n = n / 10;
	}
	
	
	printf("son basamak: %d\n",b);
	
	printf("ilk basamak: %d",n);

	
	
	return 0;
}
