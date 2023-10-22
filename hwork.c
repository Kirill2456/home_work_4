#include <stdlib.h>
#include <stdio.h>
int main()
{
printf("\t1-e zadanie\n");

for(int i=1; i<6; i++)
{
switch (i)
{
case 1:
printf("%d\n",i);
break;
case 2:
printf("%d %d\n",i,i-1);
break;
case 3:
printf("%d %d %d\n",i,i-1,i-2);
break;
case 4:
printf("%d %d %d %d\n",i,i-1,i-2,i-3);
break;
case 5:
printf("%d %d %d %d %d\n",i,i-1,i-2,i-3,i-4);
break;
}
}
printf("\t2-e zadanie\n");

printf("Print number month\n");
int nm;
scanf("%d",&nm);

if (nm==1 || nm==2 || nm==12)
{
printf("this is the month of winter\n");
}
if(nm==3 || nm==4 || nm==5)
{
printf("this is the month of spring\n");
}
if(nm==6 || nm==7 || nm==8)
{
printf("this is the month of summer\n");
}
if(nm==9 || nm==10 || nm==11)
{
printf("this is the month of autumn\n");
}
if (nm>12)
printf("there is no such month\n");

printf("\t3-e zadanie\n");

int umn=7;
for (int i=1; i<11; i++)
{
printf("%d * 7 = %d\n",i,i*umn);
}

printf("\t4-e zadanie\n");
printf("vvedite chislo\n");
int chislo,templ;
scanf("%d",&chislo);
templ=chislo;
if (templ<8)
{
printf("malenkoe chislo\n");
}
else
{
for(int i=8; i<templ; i++)
{
chislo*= i;
printf("%d\n",chislo);
}
}

printf("\t5-e zadanie\n");
printf("vvedite chislo\n");
int n;
scanf("%d",&n);
int s=1;
for (int i=0; i<2*n+1; i++)
{
s+=n*n;
printf("%d\n",s);
}


return 0;
}

