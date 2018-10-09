#include<stdio.h>

int main()
{

unsigned int num,temp = 0;
int i=32;

printf("Enter Number\n");
scanf("%d",&num);


while(i--)
{

temp = temp | (num&1)<<i ;
num >>= 1;

}

printf("reversed number is \t%d\n",temp);

	return 0;
}