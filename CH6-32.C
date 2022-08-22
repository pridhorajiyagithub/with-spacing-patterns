#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,n;
clrscr();
for(i=1;i<=5;i++)
{
 for(j=1;j<=6-i;j++)
 {
   printf("%d ",j);
 }
 for(k=1*2;k<i*2;k++)
 {
   printf("  ");
 }
 for(n=6-i;n>=1;n--)
 {/* if(n==5)
   {
    continue;
   } */
   printf("%d ",n);
 }
 printf("\n");
}
    getch();
}