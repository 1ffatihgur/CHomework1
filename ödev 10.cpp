#include <stdio.h>


int main()
{
	
	int a,b,c;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("ucuncu sayiyi giriniz: ");
	scanf("%d",&c);
	
	
	if(a>b && a>c)
	{
		printf("%d en buyuk",a);
	}
	else if(b>a && b>c)
	{
		printf("%d en buyuk",b);
	}
	else
	{
		printf("%d en buyuk",c);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
