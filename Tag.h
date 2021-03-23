// Fib.h - header file: this should be included in any source file that needs fib()

#ifndef _TAG
#define _TAG
#include <vector>

struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;

void readAndParse(vector<TagStruct> vect);   // a function "prototype" - tells compiler all about readAndParse function
void printAllTags(vector<TagStruct> vect);  // declaration of printAllTags function
void writeTags(vector<TagStruct> vect) ; //declaration of writeTags function

#endif
