#include<stdio.h>
int main()
{
int a,sum = 0;

for(int i=1;i<1000;i++)
{
if(i%3 == 0 || i%5 == 0)
{

sum = sum + i;
}


}
printf("%d",sum);
}
