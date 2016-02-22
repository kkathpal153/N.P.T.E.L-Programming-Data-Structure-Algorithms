/*You are given a polynomial of degree n. The polynomial is of the form P(x) = anxn + an-1xn-1 + … + a0, where the ai‘s are the coefficients.  Given an integer x, write a program that will evaluate P(x). 

You are provided with a function named power( ) that takes two positive integers x & y and returns xy. If y is 0, the function returns 1. 

The prototype of this function is

int power(int x, int y);

You do not have to write the program for power ( ) function. This function is automatically added at the end of the code segment that you write. 
INPUT:
Line 1 contains the integers n and x separated by whitespace.
Line 2 contains the coefficients an, an-1…, a0 separated by whitespace.

OUTPUT:
A single integer which is P(x).
 
CONSTRAINTS:
The inputs will satisfy the following properties. It is not necessary to validate the inputs.

1 <= n <= 10
1 <= x <= 10
0 <= ai <=10*/


#include<stdio.h>
/* function to calculate power x^y */
int power(int x, int y){
  int pow=1;
  while (y!=0){
      pow*=x;
      y--;
    }
  return pow;
}
int main()
{
	int n,x,s=0,i;
	scanf("%d%d",&n,&x);
	int c[17];
	for(i=1;i<=n+1;i++)
	{scanf("%d",&c[i]);
    }
	
	for(i=1;i<=n+1;i++)
	{
		s=s+c[i]*power(x,n+1-i);
		
	}
	printf("%d",s);
	return 0;
}
