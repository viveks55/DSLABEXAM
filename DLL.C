#include<stdio.h>
#include<conio.h>
struct dnode
{
  struct dnode *left;
  int data;
  struct dnode *right;
};
typedef struct dnode dnode;
dnode *getnode();
void main()
{
    dnode *first,*temp,*current;
    int i,n,pos,item,ch;
    clrscr();
    first=NULL;
    printf("Enter the size of doubly linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
printf("Enter the data of node %d: ",i);
	scanf("%d",&item);
	temp=getnode();
	temp->data=item;
	temp->right=NULL;
	if(first==NULL)
	{
	    first=temp;
	    temp->left=NULL;
	}
	else
	{
	    current->right=temp;
	    temp->left=current;
	}
	current=temp;
    }
 do
   {
    printf("\n1.insert at first: ");
    printf("\n2.insert at any position: ");
    printf("\n3.insert at last: ");
    printf("\n4.deletion at first: ");
    printf("\n5.deletion at any: ");
    printf("\n6.display: ");
    printf("\n7.search: ");
    printf("\n8.exit: ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {

	case 1:
	    printf("Enter the element to be inserted in front: ");
	    scanf("%d",&item);
	    insertDLfirst(&first,item);
	    break;
	case 2:
	    printf("Enter the element to be inserted at last: ");
	    scanf("%d",&item);
	    insertDLlast(&first,item);
	    break;
	case 3:
	    printf("Enter the element to be inserted at any: ");
	    scanf("%d",&item);
	    printf("Enter the position: ");
	    scanf("%d",&pos);
	    insertDLany(&first,pos,item);
	    break;
	case 4:
	    deleteDLfirst(&first);
	    break;
	case 5:
	    printf("Enter the position of the node to be deleted: ");
	    scanf("%d",&pos);
	    deleteDLany(&first,pos);
	    break;
	case 6:
	    display(first);
	    break;
	case 8:
	    exit(0);
	default:printf("Enter a valid input");
    }


  }
  while(ch!=15);
  getch();
{

 dnode*getnode

    {
      dnode*p;
      p=(dnode*)malloc(sizeof(dnode));
      return p;
    }


freenode(dnode*p)
{
    free(p);
}

insertDLfirst(dnode **first,int item)
{
    dnode*temp;
    temp=getnode();
    temp->data=item;
    temp->left=NULL;
    if(*first==NULL)
    temp->right=NULL;
    else
    {
	temp->right=*first;
	(*first)->left=temp;
    }
    *first=temp;
}
insertDLlast(dnode **first,int item)
{
    dnode *current,*temp;
    temp=getnode();
    temp->data=item;
    temp->right=NULL;
    if(*first==NULL)
    {
	temp->left=NULL;
	*first=temp;
    }
    else
    {
    current=*first;
    while(current->right!=NULL)
	current=current->right;
	temp->left=current;
	current->right=temp;
    }
}
insertDLany(dnode **first,int pos,int item)
{
    dnode *temp,*current;
    int i;
    temp=getnode();
    temp->data=item;
    if(pos==1)
    {
	if(*first==NULL)
	    (*first)->left=temp;
	    temp->right=first;
	    temp->left=NULL;
	    *first=temp;
    }

deleteDLfirst(dnode **first)
{
    dnode *current;
    int item;
    if(*first==NULL)
    {
	printf("list is empty");
    }
    else
    {
	current=(*first);
	(*first)=(*first)->right;
	if(*first!=NULL)
	    (*first)->left=NULL;
	    item=current->data;
	    freenode(current);
	    printf("\ndeleted item is %d\n",item);
    }
}

display(dnode *first)
{
    if(first==NULL)
    printf("\n list is empty");
    else
    {
	printf("the list is->");
	while(first!=NULL)
	{
	    printf("%d\t",first->data);
	    first=first->right;
	}
    }
}

;
}
;
}
}
