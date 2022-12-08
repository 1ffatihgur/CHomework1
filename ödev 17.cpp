#include <stdio.h>

int main()
{
	
	float sum = 0;
	float a;
	
	printf("bir dogal sayi giriniz: ");
	scanf("%f",&a);
	
	for(float i=2 ; i<=a ; i+=2)
	{
		sum = sum + 1/i;
	}
	
	printf("toplam: %f",sum);
	
	
	
	
	return 0;
}
