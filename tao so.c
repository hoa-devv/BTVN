#include<Stdio.h>
void main()
{
	int a,b,c;
	
	printf("Nhap vao day so ban muon tao :");
	scanf ("%d", &a);
	
	printf("\n");
	for (b = 0 ; b < a; b++)
	{
		printf("\n");
		for(c = 0 ; c <=b ;c++ )
		{
			printf("%d", c +1);
		}
	}
}
