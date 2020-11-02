#include <stdio.h>
int main ()
{
	char ten [10];
	 int i;
	 char ans;
	printf("What's your name:");
	scanf ("%s", &ten);
	for (i=1 ; i <=100; i ++)
	{ 
	printf("\nFall in love : %d", i);
    }
    do
    {
	printf("\nMay co yeu tao khong ? ");
	printf("Yeu hay cut: ? ");
	scanf("%c", &ans);
    }
	while(ans!='y');
	printf("\nCuoi di dcmmm");
}
