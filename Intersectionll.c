/*
Author :SGT
Code For : Finding the merging Point of two LL

First find the length of both the LL , then find the Diff of length , move the Bigger LL  'Diff' places , start comparing with both LL  


*/



#include<stdio.h>
#include<malloc.h>

struct Node {
	int data;
	struct Node * next;
};


int lencalculator(struct Node * temp) //to Calculate the length of the LL
{
 int count=0;
 struct Node * ref = temp;
 while(ref!=NULL)
 	{count++;
    ref = ref->next;}
 return count;
}

void mergefinder(struct Node *head1 ,struct Node *head2,int len ) 
{

struct Node * ref1 = head1;
struct Node * ref2 = head2;


while(len--)
{   
	ref2=ref2->next;
	
}


while(ref2!=ref1 && ref1 !=NULL && ref2 != NULL)
{

	
	ref2=ref2->next;
	ref1=ref1->next;
	
}



if(ref1==ref2)
{

printf("\nFound and the data is \t");
printf("%d \n",ref2->data);

}

else printf("Not Found");

}


int main()
{  


  //2nd 3->6->9->15->30 
  //1st 10->15->30 
  int len1,len2;

  struct Node* newNode; 
  struct Node* head1 = 
            (struct Node*) malloc(sizeof(struct Node)); 
  head1->data  = 10; 
  
  struct Node* head2 = 
            (struct Node*) malloc(sizeof(struct Node)); 
  head2->data  = 3; 
  
  newNode = (struct Node*) malloc (sizeof(struct Node)); 
  newNode->data = 6; 
  head2->next = newNode; 
  
  newNode = (struct Node*) malloc (sizeof(struct Node)); 
  newNode->data = 9; 
  head2->next->next = newNode; 
  
  newNode = (struct Node*) malloc (sizeof(struct Node)); 
  newNode->data = 15; 
  head1->next = newNode; 
  head2->next->next->next  = newNode; 
  
  newNode = (struct Node*) malloc (sizeof(struct Node)); 
  newNode->data = 30; 
  head1->next->next= newNode; 
  
  head1->next->next->next = NULL; 

len1 = lencalculator(head1);
len2 = lencalculator(head2);


mergefinder(head1,head2,len2-len1);

return 0;
}
