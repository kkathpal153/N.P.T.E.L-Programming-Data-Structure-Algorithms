/*
Given a list of student names and their  marks in K subjects,  find the average mark for every student. Also, print a list of toppers in each subject. (Assume there is only one  topper). 

Use the given structure Student (in C language). You should the  implement following functions which are called in main():
 char * getTopper(struct Student s[], int nStudents, int subjectIndex, int nSubjects);
/*
Return name of topper of a subject. 
Arguments :
	array of Student records.
	number of Students (nStudents).
	index of subject for which function should find toper (subjectIndex).
	number of Subjects (nSubjects)
 */
float getAvg(struct Student  s, int nSubjects);
/* 
return avg mark of a student. 
Arguments :
	a Student record s.
	number of Subjects (nSubjects)
*/
void setValues(struct Student* s, const char * name, float marks[], int nSubjects);
/* 
set values in structure Student 
Arguments :
	a pointer to a Student record (s).
	name of Student (name).
	mark of K subjects (marks).
	number of Subjects (nSubjects) 
*/
/*
Input:
Given a list of student names and their marks in K subjects, find the average mark for every student. Also, print a list of toppers in each subject. (Assume there is only one topper). 

The first line contains the number of students (N) and the number of subjects (K). Following N lines contains name of student and the marks of K subjects.

Output
The first N lines of output should contain average marks of each student (Print 6 decimal places) . Following K lines should contain the name of the topper of each subject in the order in which the subjects are given.

Constraints
1 <= N <=100
1 <= K <=10
Assume that Name does not contain spaces and the maximum length of names of the students is 10 (excluding the NULL character at the end).
0 <= Mark <=100 and the marks are real numbers.
*/
#include<stdio.h>
#include<string.h>
#define N 100
#define K 10

struct Student {
  char name[10];
  float marks[10];
};


char * getTopper(struct Student s[], int nStudents, int subjectIndex, int nSubjects)
     {
     	char nn[10];
     	float a,c,d;
		 int i,b,j=subjectIndex;
     	a=s[0].marks[j];
     	b=0;
		 for(i=0;i<nStudents;i++)
     	{
     		if(a<=s[i].marks[j])
     		{
     			a=s[i].marks[j];
     			b=i;
			 }
		 }
		 return s[b].name;
	 }
	
float getAvg(struct Student  s, int nSubjects)
   {
   	float avg=0;
   	int i,j,k,l;
   	for(i=0;i<nSubjects;i++)
   	{
   		avg=avg+s.marks[i];
	   }
	   return (avg/nSubjects);
   }
   
   
   
void setValues(struct Student* s, const char * name, float marks[], int nSubjects)
 {  
   strcpy(s->name,name);
   int i;
   for(i=0;i<nSubjects;i++)
	   {
	   	s->marks[i]=marks[i];
	   }
 }



int main()
{
  struct Student students[N];
  int nStudents, nSubjects;
  int i, j;
  char name[10];
  float marks[K];
  /*Read Student data*/
  scanf("%d %d", &nStudents, &nSubjects);
  for (i = 0; i < nStudents; ++i) {
	scanf("%s", name);
	for (j = 0; j < nSubjects; ++j) {
  	scanf("%f", &marks[j]); 
	}
	setValues(&(students[i]), name, marks, nSubjects);	
  }
  for (i = 0; i < nStudents; ++i) {
	printf("%f\n", getAvg(students[i], nSubjects));
  }
  for (j = 0; j < nSubjects; ++j) {
	if( j == nSubjects -1)
	     printf("%s", getTopper(students, nStudents, j, nSubjects));
	else
	      printf("%s\n", getTopper(students, nStudents, j, nSubjects));
  }
  return 0;

}
