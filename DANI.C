#include<stdio.h>
//entering four digit number and calculating sum of first and last digit
	void main()
	{
	int num,a,b,c,d,sum;
	clrscr();
	printf("enter four digit number\n");
	scanf("%d",&num);
	a=num/1000;
	b=(num/100)%10;
	c=(num/10)%10;
	d=num%10;
	//calculating sum of first and last digit
	sum=a+d;
	printf("sum of first and last digit is= %d",sum);
	getche();
	}
