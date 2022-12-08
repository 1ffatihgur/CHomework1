#include <stdio.h>

int main()
{
	
	int a;
	int sum = 1;
	
	printf("faktoriyelini almak istediginiz sayiyi giriniz: ");
	scanf("%d",&a);
	
	for(int i = a ; i>0 ; i--)
	{
		sum = sum * i;
	}
	
	printf("faktoriyel: %d",sum);
	
	
	
	
	return 0;
}
