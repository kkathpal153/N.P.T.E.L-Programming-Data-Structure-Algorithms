/*
Write a program which does the following:
There are 3 tables in a room. Every table can hold any number of blocks stacked on each other with only one block touching the table. No two blocks are of the same size. At any point of time, the blocks must be placed in ALL tables in such a way that no smaller sized block will have a larger sized block on top of it. 

Initially all the blocks are placed on table number 1 in the correct fashion (biggest block at bottom and smallest block at the top). Our aim is to move all the blocks from table number 1 to table number 3  such that at every step all the constraints are satisfied and the final order in table 3 is: smallest block must be at the top and the largest at the bottom and all the other blocks in between in increasing size. Tables 2 and  1 should not have any blocks on them at the end of the process. You are allowed to move only one block at a time from any table to any other table.

Write a program which takes number of blocks as input and outputs the number of moves required to do so.

Input: a single integer indicating number of blocks
Output:a single integer indicating the number of moves required

Constraints:  You can assume that the number of blocks will be atmost 20
*/

#include<stdio.h>
#include<math.h>
int main()
{
	long a,b,c,d,e;
	scanf("%ld",&a);
	e=pow(2,a)-1;
	printf("%ld",e);
}
