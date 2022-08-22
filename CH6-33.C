#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,n;
clrscr();
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
 {
   printf("%d ",j);
 }
 printf("\n");
}
/* for(k=1*2;k<i*2;k++)
 {
   printf("  ");
 }   */
 for(i=1;i<=5;i++)
 {
 for(n=1;n<=5-i;n++)
 {
   printf("%d ",n);
 }

 printf("\n");
}
    getch();
}