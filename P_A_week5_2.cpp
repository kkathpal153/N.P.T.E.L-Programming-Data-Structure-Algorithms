/*
You have to implement a matrix ADT using concepts of C++ classes taught in the lectures. The input matrices would be square matrices. The  class must support the following functions:
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
The program should take as input: dimension of a square matrix N, two matrices of size N x N with integer values, and one operator symbol (+, - ,*). It must perform the corresponding operation using member functions of Matrix class.

You are supposed to implement the following functions of the class MatrixADT

matrixType add(matrixType M1, matrixType M2): The function should add matrices M1 and M2 and store the result in "resultMatrix". The function should return the "resultMatrix".

matrixType subtract(matrixType M1, matrixType M2):
The function should subtract matrix M2 from M1 and store the result in "resultMatrix". The function should return the "resultMatrix".

matrixType multiply(matrixType M1, matrixType M2):
The function should multiply matrices M1 and M2 and store the result in "resultMatrix".  Be careful, it is M1*M2 and not M2*M1. The function should return the "resultMatrix".

INPUT:
In the first line, one integer which is the dimension of the matrix  and one operator (one of +, - or *)
Two NxN matrices one after the other, supplied one row at a time.
OUTPUT:
Resultant matrix after performing the specified operation, one row at a time. For subtraction, if A is the first matrix and B is the second matrix, perform A-B.

CONSTRAINTS:
The inputs will satisfy the following constraints:
1<=N<=10
There is no need to validate the value of N.
There are no constraints on the values of the entries of the matrices.*/

#include <iostream>
#include <cstring>
using namespace std;
struct matrixType{
    int matDimension;
    int matValues[10][10];
};
class MatrixADT{
    private:
        matrixType resultMatrix;
    public:
       
        //Member function declarations        
        void intializeResultMatrix(int);
        matrixType add(matrixType, matrixType);
        matrixType subtract(matrixType,matrixType);
        matrixType multiply(matrixType,matrixType);
        void printResult();
};

//Intialize Result Matrix entries to zero
void MatrixADT::intializeResultMatrix(int dim){
        int i,j;
        
        resultMatrix.matDimension = dim;
        for (i=0;i<resultMatrix.matDimension;i++){
                for (j=0; j<resultMatrix.matDimension;j++){
                        resultMatrix.matValues[i][j] = 0;
                }
        }
}

//ADD
matrixType MatrixADT::add(matrixType M1, matrixType M2){
     int i,j;
            
           for(i=0;i<resultMatrix.matDimension;i++)
           for(j=0;j<resultMatrix.matDimension;j++)
             resultMatrix.matValues[i][j]=M1.matValues[i][j]+M2.matValues[i][j];
             
        return resultMatrix;
}
//SUBTRACT
matrixType MatrixADT::subtract(matrixType M1, matrixType M2){
	int i,j;
           for(i=0;i<resultMatrix.matDimension;i++)
           for(j=0;j<resultMatrix.matDimension;j++)
            { resultMatrix.matValues[i][j]=M1.matValues[i][j]-M2.matValues[i][j];}
        return resultMatrix;
}
//MULTIPLY
matrixType MatrixADT::multiply(matrixType M1, matrixType M2){
	int i,j,k,l;
            
           for(i=0;i<resultMatrix.matDimension;i++)
           for(j=0;j<resultMatrix.matDimension;j++)
           {  l=0;
		      for(k=0;k<resultMatrix.matDimension;k++)
               { l=l+M1.matValues[i][k]*M2.matValues[k][j];  }
            resultMatrix.matValues[i][j]=l;
           }
     
   return resultMatrix;
}

int main(){        
        MatrixADT maX;
        matrixType M1, M2;
        char op;
        int i,j,dim;
        cin>>dim>>op;
        M1.matDimension = dim;
        M2.matDimension = dim;
        maX.intializeResultMatrix(dim);
        //Accept matrix entries
        for (i=0;i<dim;i++)
                for (j=0; j<dim;j++){
                        cin>>M1.matValues[i][j];
        }
        for (i=0;i<dim;i++)
                for (j=0; j<dim;j++){
                        cin>>M2.matValues[i][j];
        }
        //Call MatrixADT member function depending on operator
        if (op=='+'){
                maX.add(M1,M2);
        }
        else if (op=='-'){
                maX.subtract(M1,M2);                        
        }
        else{
                maX.multiply(M1,M2);                        
        }  
   maX.printResult();
   return 0;
                        
}
void MatrixADT::printResult(){
   int i,j;
   for (i=0;i<resultMatrix.matDimension;i++){
       for (j=0; j<resultMatrix.matDimension-1;j++){
           cout<<resultMatrix.matValues[i][j]<<" ";
       }
      cout <<resultMatrix.matValues[i][j]<<"\n";
   }
   cout <<"Done";
}

