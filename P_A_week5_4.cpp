#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node* Node;

/*    Function to load the numbers onto the linked list
      Return a pointer to the head of the list  */
Node loadNum();

/*    Function to print the number in position pos
      head is guaranteed to be non-NULL */
/*    Function to print the number in position pos
      head is guaranteed to be non-NULL */
void printNum(Node head,int pos)
{
    int i = 1;
    Node temp = head;
    while( i != pos ){
   	 temp = temp->next;
   	 if( temp == NULL){
   		 printf("-1");
   		 return;   	 
   	 }
   	 i++;
    }
    printf("%d",temp->data);
}


/* Function to release the memory after every iteration */
void releaseMem(Node head);

int main()
{
    int i,T;
    int pos;
    Node head;
    scanf("%d",&T);
    for (i = 0; i < T; i++){

   	head = loadNum();
   	scanf("%d",&pos);
   	printNum(head, pos);
        if(i<T-1)
          printf("\n"); // Will add a new line for after all output
                        // except for last.
   	releaseMem(head);
    }
    return 0;
}
/*    Function to load the numbers onto the linked list
      Return a pointer to the head of the list  */
Node loadNum(){
   Node head;
   Node curr=(Node)malloc(sizeof(Node));
   int i;
   head=curr;
   do
   {
   	scanf("%d",&i);
   	Node temp=(Node)malloc(sizeof(Node));
   	temp->data=i;
   	temp->next=NULL;
   	curr->next=temp;
   	curr=curr->next;
   
   }
   while(i!=-1);
   
   return head->next;
}

/* Function to release the memory after every iteration */
void releaseMem(Node head){
Node temp;
while(head!=NULL)
{
	temp=head;
	head=head->next;
	free(temp);
}
}



