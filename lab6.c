#include<stdio.h>
int main()
{
	int num1,num2,rem,a,b,q;
	printf("Enter any two positive number: ");
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	while(num2!=0)
	{
	rem=num1%num2;
	q=num1/num2;
	printf("\n%d = %d * %d + %d\n",num1,q,num2,rem);
	num1=num2;
	num2=rem;	
	}
	printf("\nThe GCD of %d and %d is %d " ,a,b,num1);
    printf("\nthis program is run by Yuv Raj Dhakal");
	return 0;
}
