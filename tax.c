#include<stdio.h>
#include<conio.h>
void cal();
void main()
{
int i,n;

printf("\n  Enter the number of the employees:");
scanf("%d", &n);
for (i=1; i<=n;i++)
cal();
getch();
}

void cal()
{
int basic;
float tax;
printf("\n Enter the amount of Basic:");
scanf("%d", &basic);
if(basic<9000)
tax=basic*20/100;
else
 tax=basic*25/100;
 printf("\n The Amount of Tax is %0.2f\n", tax);

}
