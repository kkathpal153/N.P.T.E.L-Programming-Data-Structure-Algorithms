/*Write a program that reads an MxN matrix A and prints its elements in spiral order.
You should start from the element in the 0th row and 0th column in the matrix and proceed in a spiral order as shown below.

1?  2 ? 3 ?  4                       
                          ?
5 ? 6 ?  7      8 
?                ?      ?
9      10?11    12
?                        ?
13?14?15?16

Output for the above matrix: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

INPUT:
First line contains two integers M and N separated by whitespace. The next M lines contain elements of matrix A, starting with the topmost row. Within each row, the elements are given from left to right.
OUTPUT:
Elements of the matrix printed in a spiral order. All the elements should be separated by whitespace.
*/

 
#include <stdio.h>
int m,n;
 
void spiralPrint(int m, int n,int a[10][10])
{
    int i, k = 0, l = 0;
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}
 
/* Driver program to test above functions */
int main()
{
    int i,j,k,l;
    scanf("%d %d",&m,&n);
    int a[10][10];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
      
    spiralPrint(m,n,a);
    return 0;
}
 
