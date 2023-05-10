#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i=1,n;
	printf("enter number=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%2==0)
		{
		     printf("%d\t",n);
		}
		n--;
	}
	getch();
	}
