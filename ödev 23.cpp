#include <stdio.h>

int main()
{
	
	int b;
	int sayi;
	int temp;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	temp = sayi;

	b = sayi % 10;
	
	while(temp>9)
	{
		temp = temp / 10;
	}
	
	printf("son basamak: %d\n",b);
	printf("ilk basamak: %d\n",temp);
	
	if(b == temp)
	{
		printf("%d bir polindrom sayidir.",sayi);
	}
	else
	{
		printf("%d bir polindrom sayi degildir.",sayi);
	}
	
	return 0;
}
