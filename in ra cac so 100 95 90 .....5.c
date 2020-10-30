#include <stdio.h>
int main()
{
	int i, num1, num2;
	printf("Nhap num1 :");
	scanf("%d", &num1);
	printf("Nhap num2 :");
	scanf("%d", &num2);
	for(i=num1; i <= num2;i++)
	
	{
		if ( i%5==0 )
		printf("%d\n ", i);
	}
}
