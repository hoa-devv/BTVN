#include<stdio.h>
int main()
{
	int a, num1, num2, sum = 0 ;
	printf("Nhap num1 : ");
	scanf("%d", &num1);
	printf("\nNhap num2 :");
	scanf("%d", &num2);
	for ( a=num1 ; a <=num2; a ++)
	{
		if(a%2!=0)
		printf("\nTong cua tat ca cac so le la :  %d   ", sum = sum +a);
	}

}
