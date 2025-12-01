#include<stdio.h>
//finding sum,product and average of two numbers
void work(int a,int b,int*,int*,int*);
	void main(){
	int a,b;
	int sum,prod,avg;
	a=10;
	b=20;

	clrscr();
	work(a,b,&sum,&prod,&avg);
	printf("sum is =%d and\n prod is =%d\n and avg is =%d",sum,prod,avg);
	  getche();
	}
	void work(int a,int b,int *sum,int *prod,int *avg){
       *sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;
	}