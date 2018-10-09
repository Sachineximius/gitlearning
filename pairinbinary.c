#include<stdio.h>
#define MAX 7

int main()
{

int arr[MAX] = {0};
unsigned int num,i,j=7;

printf("Enter Number");
scanf("%d",&num);

for(i=1<<j;i>0;i/=2,j--)
{
if(num & i)
arr[j]=1 ;
}


for(i=0;i<MAX;i++)
{
	printf("%d",arr[MAX-i-1]);
}

return 0;
} 