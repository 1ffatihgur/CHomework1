#include <stdio.h>

int main()
{
	
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi % 2 == 0)
	{
		printf("sayi cifttir.");
	}
	else
	{
		printf("sayi tektir.");
	}
	
	
	
	
	return 0;
}
