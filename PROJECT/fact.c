#include<stdio.h>
int fact(int);
main()
{
	int n;
	printf("\n enter no");
	scanf("%d",&n);
	printf("fact=%d",fact(n));
}
int fact(int n)
{
	int f=1;
	if(n==0)
	return 1;
	else if(n==1)
	return 1;
	else
	f=n*fact(n-1);
	return f;
}
