#include<stdio.h>
#include<conio.h>
/*       *
	* *
       *   *
      * * * *
     *       *
    *         *
*/

main()
{
int i,j;
clrscr();
for(i=1;i<=12;i++)
{
  for(j=i;j<=12;j++)
  {
    if(j==12)
    {
      printf("*");
    }
    printf("\n");
  }

}

getch();
}
