#include <stdio.h>

int main()
{
	
	int a;
	int toplam = 0;
	int carpim = 1;
	
	for(int i = 1 ; i<=10 ; i++)
	{
		printf("%d. sayi giriniz: ",i);
		scanf("%d",&a);
		toplam = toplam + a;
		carpim = carpim * a;
	}
	
	printf("sayilarin toplamý = %d ve carpimi = %d",toplam,carpim);
	
	
	
	
	
	
	
	
	return 0;
}
