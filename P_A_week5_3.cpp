/*Implement a custom string class with public functions

1) combine which takes as argument two strings s1, s2 and appends s2 to s1.  
2) replace which takes as argument two characters, and replaces all occurrences of the first character by the second character in the string, if the first character is found, otherwise replace returns NOT FOUND.  

In the main program take two strings as input (on first line), then take two characters as input.  Concatenate the two strings using combine.   Replace the first character in the concatenated string (if found) with the second character. 

Implement following public functions for the  String Class.
String String::operator+ (String str) : Create an new String object and copy the base String and then append content of String str. 
void String::replace (char oldChar, char newChar) : Replace the "oldChar" if found with "newChar"
char * String::getCharArray(): Return a Character array with content of String.
bool String::find (char c): Return true if the character is present in the string else false.

Input:

The first two line contains two strings, string1 and string2. The second line contains two characters char1 and char2.  

The two strings will contain only letters in English alphabet (both upper and lower case). The two characters will also be English letters.

Output:

First concatenate the two strings. In the result, all occurrences of char1 should be replaced with char2 and that should be printed out.If char1 is not present in the resultant string after concatenation, print NOT FOUND

*/

/**********************************************************
 * String Class
 * CONCEPTS: Operator overloading,dynamic memory allocation.
 **********************************************************/
//#include<iostream>
#include<cstdio>
#define MAXLEN 100

using namespace std;

class String {                                                                                                                              
   private:                                                                                                                                    
      char *s;                                                                                                                                  
      int size;                                                                                                                                 
   public:                                                                                                                                     
       String();                                                                                                                                 
       String(char *str);                                                       //Create a String class from a character array                                                                                                                   
       int len();                                                                    //Return length of string                                                                                                                  
      String operator+ (String str);                                     //Return a new string with appending 2 strings         (this+str)                                                                                 
      void operator= (char *str);                                     //Assign a new string from char[]str                                                                                                      
      void replace (char oldChar, char newChar);            //replace all occurrences of oldChar by     newChar                                                                                             
      bool find (char c);                                                    //Is `c` is found in this string                                                                                                          
      char * getCharArray();                                            // return a char array with content of string                                                                                             
};


String::String() {
 s = NULL;
 size = 0;
}

String::String(char *str) {
  int len = 0;

  while(str[len]!='\0') {
    len++;
  }
  size = len;
  s = new char[len];
  
  for(int i = 0; i <=size; i++){
    s[i]=str[i];
  }
}

int String::len() {
  return size; 
}
void String::operator= (char *str) {
  
  int len = 0;
  int i = 0;
  
  while(str[len]!='\0') len++;
  size = len;
  
  if( s != NULL) delete []s;

  s = new char[len];
  
  for(int i = 0; i <= size; i++){
    s[i]=str[i];
  }
}


int main() {
  String s1,s2;
  char inputStr[MAXLEN];
  
  scanf("%s",inputStr);
  s1 = inputStr;

  scanf("%s",inputStr);
  s2 = inputStr;
  
  String s3 = s1 + s2;
  //printf("\n void main string value %s!! \n",s3.getCharArray());
  char oldChar,newChar;
  scanf(" %c %c",&oldChar, &newChar);
 
  if( s3.find(oldChar) ) {
    s3.replace(oldChar, newChar);
      printf("%s",s3.getCharArray());
  } else {
      printf("NOT FOUND");
  }
  return 0;

} 
String String::operator+ (String str){
    String newStr;
	newStr.s=new char[MAXLEN];
	int len=0;
    while(s[len]!='\0') {
	newStr.s[len]=s[len];
	len++;
    } 
	int k=0;
    while(str.s[k]!='\0') {
	newStr.s[len]=str.s[k];
	k++;
	len++;
    }
    
    newStr.size=len;
    
    //printf("%s!!\n",newStr.s);
    return newStr;
}


void String::replace (char oldChar, char newChar) {
      int i;
       for(i=0;i<size;i++)
       {
       	if(s[i]==oldChar)
       	{
       		s[i]=newChar;
		   }
	   }
	   //printf("%s\n",s);

}

bool String::find (char c) {
	int i;
	for(i=0;i<size;i++)
	{
		if(s[i]==c)
		return true;
	}
	
 return false;
}

char * String::getCharArray(){
  return s;
}

