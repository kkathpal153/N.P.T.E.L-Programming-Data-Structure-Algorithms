/*Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall on one straight line.

INPUT: Six integers x1, y1, x2, y2, x3, y3 separated by whitespace.

OUTPUT: Print “Yes” if all the points fall on straight line, “No” otherwise.

CONSTRAINTS: 
-1000 <= x1, y1, x2, y2, x3, y3 <= 1000
*/
#include<stdio.h>
int main()
{
	unsigned int x1,x2,x3,y1,y2,y3,i,j,k,l,m,n;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1))
	printf("Yes");
	else
	printf("No");
	return 0;
}
