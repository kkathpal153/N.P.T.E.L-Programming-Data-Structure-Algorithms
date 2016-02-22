/*Write a program to find whether two given strings are permutations of each other.  A string str1 is a permutation of str2 if all the characters in str1 appear the same number of times in str2 and str2 is of the same length as str1.


Input: Two strings S1 and S2 
Output: 
yes - if they satisfy given criteria
no - otherwise

Constraints:
1 <= len(S1), len(S2) <= 100. 
Characters from ASCII range 0 to 127.
White space will not be given in the string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n;
	char a[103],b[103];
	scanf("%s",a);
	scanf("%s",b);
	int aa=strlen(a);
	int bb=strlen(b);
	for(i=1;i<bb;i++)
	for(j=0;j<bb-i;j++)
	{
		if(b[j]>b[j+1])
		{
			char k;
			k=b[j];
			b[j]=b[j+1];
			b[j+1]=k;
		}
	}
	for(i=1;i<aa;i++)
	for(j=0;j<aa-i;j++)
	{
		if(a[j]>a[j+1])
		{
			char k;
			k=a[j];
			a[j]=a[j+1];
			a[j+1]=k;
		}
	}
	printf("$%s$%s$",a,b);
	
	if(strcmp(a,b))
	printf("yes");
	else
	printf("no");
	return 0;
	
}
