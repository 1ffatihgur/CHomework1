#include <stdio.h>

int main()
{
	
	int t;
	
	printf("bir sicaklik degeri giriniz: ");
	scanf("%d",&t);
	
	if(t < 0)
	{
		printf("donma noktasinin altinda");
	}
	else if(t == 0)
	{
		printf("donma noktasinda");
	}
	else
	{
		printf("donma noktasinin ustunde");
	}
	
	
	
	
	
	
	return 0;
}
