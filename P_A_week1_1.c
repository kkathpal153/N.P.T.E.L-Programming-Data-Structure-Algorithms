/*Write a program to find the number of perfect squares between given two numbers A and B (both inclusive). A number is called a perfect square if it can be written as x*x for some integer x.

Constraints:
Both A and B are positive. They both are less than 100,000.

Input: Two numbers A and B separated by a space
Output: Count of the number of perfect squares


Example 1:
Input: 3 10
Output: 2


Example 2:
Input: 16 70
Output: 5
*/


#include<stdio.h>
int check(int a)
{ int i,j,k,l;
  if(a==0||a==1)
  return 1;
  for(i=0;i<=a/2;i++)
    if(i*i==a)
    return 1;
  return 0;
}
int main()
{
	int i,j,k,l,s=0;
	scanf("%ld%ld",&k,&l);
	for(i=k;i<=l;i++)
	{
		if(check(i)==1)
		{
			s++;
		}
	}
	printf("%ld",s);
	return 0;
}
