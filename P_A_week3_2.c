/*
Write functions to calculate factorial, nCr and nPr and using those functions perform a custom computation.

nPr is the number of all permutations of n things, taken r at a time. nCr is the number of all combinations of n things, taken r at a time.

Your task is to  write three functions fact( ), ncr( ) and npr( ). The function definitions are given for your reference.

int fact(int n): This function should return the factorial of the parameter n. This function can be used to calculate nCr and nPr.
int npr(int n, int r): The function should return the value nPr where n and r as input parameters.
int ncr(int n, int r): The function should return the value nCr where n and r as input parameters.

You should not write the main function as the main function is prefixed. The functions you write should match the prototype in prefixed code. The output is printed in the main function. So NO output should be printed by any of the functions you write.


Explanation:
Given 4 integers a,b,c,d your program should output (aCb - cPd).


Input: 4 integers a, b, c and d
Output: (aCb - cPd)

Constraints:
For simplicity you can assume that input will be given such that a>=b and c>=d.
1<= a,b,c,d <= 10
*/

* This is a prefixed code. 
* This code will be added to your program before compilation
*/

//Write a program to calculate nCr and nPr for given numbers.

#include<stdio.h>
//Write a function for n factorial. 
int fact(int n);
//Write a function calculating nCr
int ncr(int n,int r);
//Write a function calculating nPr
int npr(int n,int r);

int main(){
  int a,b,c,d,output_ncr,output_npr;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  output_ncr=ncr(a,b);
  output_npr=npr(c,d);
  //printf("combination outpur %d   permutation output %d\n",output_ncr,output_npr);
  printf("%d",(output_ncr-output_npr));
   return 0;
}
int fact(int n){
	int s=1,i;
	for(i=1;i<=n;i++)
		s=s*i;
	return s;
}
int npr(int n,int r){
	return fact(n)/fact(n-r);
}
int ncr(int n,int r){
return (fact(n)/(fact(n-r)*fact(r)));
}
