#include <iostream>   //a system header file - needed to do simple I/O
#include <fstream>
#include <string>
#include <vector>
#include "Tag.h"

using namespace std;

int main ()
{
  vector<TagStruct> tags;
  ifstream file("simple.txt");
  string str,x,y,z;
  char input;
  int count;
  bool found = false;
  
   while (getline(file, str)) {
    x = str.substr(str.find(">")+1,str.find("/"));
    y = x.substr(0,x.find("<"));
    z = str.substr(str.find("<")+1,str.find(">")-1);
 
 
    for(int i = 0; i < int(tags.size()); i++) {
      if(tags[i].tagName == z) {
         found = true;
         tags[i].text = tags[i].text + ":" + y ;
         tags[i].numOfTags = tags[i].numOfTags + 1;
         break;
   }
  }
	  if(!found) {
	   TagStruct c;
	   c.tagName = z;
	   c.numOfTags = 1;
	   c.text = y;
	   tags.push_back(c);
	  }
}

while (true){
 
  cout << "Enter an option (r,p,d,l) or q to quit, and press return... \n";
  cout<< "r: Read and process tag file \n";
  cout<< "p: Print all tags \n";
  cout<< "d: dump/write tags and data to a file called tag.txt \n";
  cout<< "l: list/print tag data for given tag t \n";
  cout<< "q: Quit \n";
  cout << "\n";
  cin >> input;
 
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
