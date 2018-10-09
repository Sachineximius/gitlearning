#include<stdio.h>

int main()
{	
	unsigned  num,i;
   	printf("Enter Number");
  	scanf("%d",&num);
     
    for( i= 1<<31; i> 0 ; i=i/2 )
    {
    	(num & i) ? printf("1") : printf("0") ;
    }
	return 0;

}




/*void bin(unsigned n) 
{ 
    unsigned i; 
    for (i = 1 << 31; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 
  
int main(void) 
{ 
    bin(7); 
    printf("\n"); 
    bin(4); 
} */