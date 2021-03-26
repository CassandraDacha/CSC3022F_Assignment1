#include <iostream>   
#include <fstream> 
#include <string>
#include <vector>
#include "Tag.h"

using namespace std;

int main ()
{
/*Main function that  reads in the file string by string storing  the tag name in variable tag, text in variable text and updates the number of times a tag is seen in the string */
  vector<TagStruct> tags;
  ifstream file("simple.txt");
  string str,x,text,tag;
  char input;
  int count;
  bool found = false;
  
  
  /*
  While loop that reads file line by line and stores the tag and text contained in each line
  */
   while (getline(file, str)) {
    x = str.substr(str.find(">")+1,str.find("/"));
    text = x.substr(0,x.find("<"));
    tag = str.substr(str.find("<")+1,str.find(">")-1);
 
 /*
 For loop that iterates the tag vector and checks is the tagname already exixts in the vector. If it exists, it appends it's text to the existing tag, if it doesn't exist, it creates a Tagstruct object and adds it to the vector
 */
 
    for(int i = 0; i < int(tags.size()); i++) {
      if(tags[i].tagName == tag) {
         found = true;
         tags[i].text = tags[i].text + ":" + text ;
         tags[i].numOfTags = tags[i].numOfTags + 1;
         break;
   }
  }
	  if(!found) {
	   TagStruct c;
	   c.tagName = tag;
	   c.numOfTags = 1;
	   c.text = text;
	   tags.push_back(c);
	  }
}
/*
Loop that prints out the text menu
*/
while (true){
 
  cout << "Enter an option (r,p,d,l) or q to quit, and press return... \n";
  cout<< "r: Read and process tag file \n";
  cout<< "p: Print all tags \n";
  cout<< "d: dump/write tags and data to a file called tag.txt \n";
  cout<< "l: list/print tag data for given tag t \n";
  cout<< "q: Quit \n";
  cout << "\n";
  cin >> input;
 /*
 Switch statement that reads in the input entered by user and responds based on the menu option selected
 */
  switch(input) {
      case 'r' :
         readAndParse(tags);
         break;
      case 'p' :
      	 printAllTags(tags);
         break;
      case 'd' :
         writeTags(tags);
         break;
      case 'l' :
         readAndParse(tags);
         break;
      case 'q' :
         exit(0);
         break;
      default :
         cout << "Invalid input" << endl;
  }
}
 return 0;
}
