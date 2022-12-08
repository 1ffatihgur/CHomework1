#include <stdio.h>

int main()
{
	
	float feet,cm;
	
	printf("feet cinsinden uzunluk giriniz: ");
	scanf("%f",&feet);
	
	cm = feet * 30.48;
	
	printf("%f feet = %f cm",feet,cm);
		
	return 0;
}
