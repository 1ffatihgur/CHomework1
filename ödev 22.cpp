#include <stdio.h>
#include <math.h>

int main()
{
	
	int b = 0;
	int sayi,c;
	int temp;	
	int k=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&temp);
	
	sayi = temp;
	
	b = temp % 10;
	
	while(temp>9)
	{
		temp = temp / 10;
		c++;
	}
	
	printf("ilk basamak %d\n",temp);
	printf("son basamak %d\n",b);
	printf("basamak sayisi %d\n",c=c+1);
	printf("sayi: %d\n",sayi);
	
	k = sayi - temp*pow(10,c-1);
	
	k = k + b*pow(10,c-1);
	k = k - b;
	k = k + temp;
	
	printf("yeni sayi: %d",k);
	
	
	
	return 0;
}
