#include<stdio.h>
#include<conio.h>
main()
{   int i,j,k,n;
    clrscr();
    printf("enter number of row::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(k=1;k<i;k++)
    {
       printf("   ");
    }
     for(j=i;j<=n;j++)
     {
       printf("%2d ",j);
     }
     printf("\n");
    }
    getch();
}