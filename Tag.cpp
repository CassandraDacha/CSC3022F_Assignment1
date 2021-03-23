#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} tags [3];

int main ()
{
  /*vector<TagStruct> tags;*/
  ifstream file("simple.txt");
  string str,x,y,z;
  int count;
  while (getline(file, str)) {
  	/*tags[count].tagName = str.substr(str.find("<")+1,str.find(">")-1);
  	tags[count].text = str.substr(str.find(">"),str.rfind("<"));
  	count++;*/
    //tags.push_back(TagStruct());
    x = str.substr(str.find(">")+1,str.find("/"));
    y = x.substr(0,x.find("<"));
    z = str.substr(str.find("<")+1,str.find(">")-1);
    count++;
    tags[count].tagName = z;
    tags[count].text = y;
    tags[count].numOfTags = 1;
    cout <<z<< "\n";
    /*bool found = false;
    for(int i = 0; i < int(tags.size()); i++) {
      if(decki.suit == suit_input && decki.face == face_input) {
         cout << "Card already entered";
         found = true;
         break;
   }
  }*/

    cout << tags[count].tagName << "\n";
    cout << tags[count].text << "\n";
  
  }
}

