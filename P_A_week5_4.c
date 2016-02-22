/*
You are given a sequence of integers. The length of the sequence is unknown but the sequence ends with a -1. You are given another number pos . Your task is to output the integer in position pos. If pos > length of the sequence output -1.

You are supposed to implement two functions :
Node loadNum(): Function to load the numbers onto the linked list      Return a pointer to the head of the list 
void releaseMem(Node head): Function to release the memory after every iteration 


 
Note: pos is indexed from 1.

Input
T
a11 a12 .. -1
Pos 1
…
…
aT1  aT2 … -1
Pos T

Output
N1
N2
..
..
NT

Constraints
1 <= T <= 30
1 <= aij <= 100
There is no restriction on the length of each list. 

Example
Input
1
4 3 2 1 -1
2

Output
3

Explanation
3 is the number in the second position*/


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



