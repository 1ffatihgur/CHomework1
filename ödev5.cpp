#include <stdio.h>

int main()
{
	
	int derece,F;
	
	printf("bir Fahrenheit sicaklik degeri giriniz: ");
	scanf("%d",&derece);
	
	derece = (F - 32) / 1.8; 
	
	printf("Derece cinsinden sicaklik degeri: %d",derece);
	
	return 0;
}
