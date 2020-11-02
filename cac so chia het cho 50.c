#include <stdio.h>
int main ()
{
	int num1, num2, i;
	printf("Nhap num1 :");
	scanf ("%d", &num1);
	pritnf("Nhap num2 :");
	scanf("%d", &num2);
	for (i=num1; i <= num2; i++)
	{
		if( i%50 == 0)
		printf("Cac so chia het cho 50 \t : ");
	}
}
