#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;/*tags [3];*/

int main ()
{
  vector<TagStruct> tags;
  ifstream file("simple.txt");
  string str,x,y,z;
  int count;
  bool found = false;
  while (getline(file, str)) {
    x = str.substr(str.find(">")+1,str.find("/"));
    y = x.substr(0,x.find("<"));
    z = str.substr(str.find("<")+1,str.find(">")-1);
   /* count++;
    tags[count].tagName = z;
    tags[count].text = y;
    tags[count].numOfTags = 1;
    /*cout <<z<< "\n";
      cout << tags[count].tagName << "\n";
      cout << tags[count].text << "\n";
  
    */
   /* for(int i = 0; i < int(tags.size()); i++) {
      if(tags[i].tagName == z) {
         found = true;
         break;
   }
  }*/
	  if(!found) {
	   //create struct
	   TagStruct c;
	   c.tagName = z;
	   c.numOfTags = 1;
	   c.text = y;
	   tags.push_back(c);
	  }
}
 for (vector<TagStruct>::iterator p = tags.begin(); p != tags.end(); ++p){
  	cout << p->tagName << " " << p->text << endl;
  }
 return 0;
}

