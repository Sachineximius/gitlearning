#include<stdio.h>
#include <malloc.h>


struct node
{

 int data;
 struct node * left , * right ;
};



struct node * nodecreation(int value)
{
	

struct node * tempnode = (struct node *)malloc(sizeof(struct node));
tempnode->data = value;
tempnode->left = tempnode->right = NULL;
return tempnode;

}



struct node * insert ( struct node * orginalroot , int variable)
{

if(orginalroot == NULL)
orginalroot = nodecreation(variable);


else if(variable > orginalroot->data)
orginalroot->left = insert(orginalroot->left,variable);

else if (variable < orginalroot -> data)
orginalroot->right = insert(orginalroot->right,variable);

return orginalroot;

}

void traversal(struct node * orginalroot)
{


if(orginalroot == NULL)
return ;

printf("%d\n",orginalroot->data);


traversal(orginalroot->left);

traversal(orginalroot->right);


}



int main()

{

struct node * root = NULL;

int tempdata;

printf("Enter  Base Value : \t\n");
scanf("%d",&tempdata);

root = insert(root,tempdata);

root = insert(root,2);

root = insert(root,4);

root = insert(root,5);

root = insert(root,3);

traversal(root);


return 0;
}