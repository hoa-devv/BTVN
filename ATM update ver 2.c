#include <stdio.h>
int main ()
{
	int count = 1, IDcard = 2972002, PINcode= 992002, a, sodu, sotienmuonrut, soduconlai, stk, sotienmuonchuyen, sotienconlailan1, sotienconlailan2 ,y , n ;
	printf("Welcome to HS'Bank");
	scanf("%d", &IDcard);
	do
	{
		printf("Please enter your ID card ");
		if (IDcard!= 2972002)
		{
			printf("Your ID is wrong");
		printf("You entered the IDcard wrong lan :  %d", count );
		printf("Max 3 lan");
		count ++ ;
	    }
		else if ( count> 3)
		{
		printf("Your account was locked");
		break;
	    } while (IDcard != 2972002);
	
	    if (IDcard == 2972002)
	    {
	    	do
	    	{
	    		printf("Please you enter pin code : ");
	    		scanf ("%d", &PINcode);
	    		if (PINcode =! 992002)
	    		{
	    			printf("You entered the PIN code wrong : lan %d", count);
	    			printf("Max 3 lan ");
	    			count ++;
				} else if (count > 3)
				{
					printf("Your account was locked");
				} else 
				{
					printf("Your account is valid");
				} while (PINcode != 992002)
				
			}
		}
	}
	do
	{
		printf("1 Rut tien || 2 Chuyen tien || 3 Kiem tra so du || 4 Ket thuc");
		if (x = 1)
		{
		    printf("Hien thi so du : %d", sodu);
		    printf("Nhap so tien muon rut :");
		    scanf ("%d", &sotienmuonrut);
		    if(sotienmuonrut <sodu && sotienmuonrut < 5000000 && sotienmuonrut %50000 == 0)
		    printf("Giao dich thanh cong , so du con lai cua ban la : %d = %d - %d", soduconlailan1= sodu - sotienmuonrut);
		} else
		{
			printf("Son tien khong hop le ");
		}
		if ( x == 2)
		{
			printf("So tai khoan muon chuyen :");
			scanf ("%d", &stk);
			printf("Nhap so tien muon chuyen : ");
			scanf ("%d", &sotienmuonchuyen);
			if ( sotienmuonchuyen <sodu)
			{
				printf("Giao dich thanh cong ,so tien con lai cua ban la : %d = %d - %d", sotienconlailan2 = sodu - sotienmuonchuyen);
			} else 
			{
				printf("Son tien khong hop le . Giao dich ket thuc");
			}
		}
		if ( a == 4)
		{
			printf("Ket thuc !");
		} break;
		printf ("Ban co muon tiep tuc khong %c or %c ?", y or n)
		scanf ("%c",&y);
		scanf ("%c", &n);
		
		
	}while ( a == 'y')
}
	


