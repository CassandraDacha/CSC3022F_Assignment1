#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Tag.h"

using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;

void readAndParse(vector<TagStruct> vect) {
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  }
  
 void printAllTags(vector<TagStruct> vect) {
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< ", \n";
  }
  }
  
  void writeTags(vector<TagStruct> vect){
  
  ofstream MyFile("Tags.txt");
  
  for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	MyFile <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }

  MyFile.close();
  }

/*int main ()
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
 
  cout << "Enter an option (r,p,d,l) or q to quit, and press return... \n";
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
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid input" << endl;
  }

 return 0;
}
*/
