/* WAP to print following pattern
  1
 212
32123
DATE : 23/01/2022
AUTHOR: KAMLESH KUMAWAT */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=4;
	clrscr();
	for(i=1;i<=n;i++)
		{
			for(j=1;j<i;j++)
				printf("%d",j);
			printf("\n");
		}
	getch();
}