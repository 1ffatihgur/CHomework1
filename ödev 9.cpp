#include <stdio.h>

int main()
{
	
	int num,low,high;
	
	printf("sayiyi bölecek sayiyi yaziniz: ");
	scanf("%d",&num);
	
	printf("kucuk sayiyi yaziniz: ");
	scanf("%d",&low);
	
	printf("buyuk sayiyi yaziniz: ");
	scanf("%d",&high);
	
	for(int i = low ; i <= high ; i++)
	{
		if(i % num == 0)
		{
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
