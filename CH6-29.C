#include<stdio.h>
#include<conio.h>
main()
{   int i,j,k,c=1;
    clrscr();
    for(i=1;i<=4;i++)
    {
    for(k=1;k<i;k++)
    {
       printf("   ");
    }
     for(j=i;j<=4;j++)
     {
       printf("%2d ",c++);
     }
     printf("\n");
    }
    getch();
}