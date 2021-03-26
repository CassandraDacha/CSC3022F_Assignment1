#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

/*Struct of type TagStuct is created*/
struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;
/*
Function that takes in a vector that contains elements of type Tagstruct . It then iterates through each element and prints out it's tagname,number of Tags and text it contains
*/
void readAndParse(vector<TagStruct> vect) {
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  cout<< "\n";
  }
  /*
Function that takes in a vector that contains elements of type Tagstruct . It then iterates through each element and prints out it's tagname
*/
 void printAllTags(vector<TagStruct> vect) {
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< ", \n";
  }
  cout<< "\n";
  }
  /*
Function that takes in a vector that contains elements of type Tagstruct . It then iterates through each element and adds it's tagname,number of Tags and text it contains to a file called Tags.txt
*/
  void writeTags(vector<TagStruct> vect){
  
  ofstream MyFile("Tags.txt");
  
  for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	MyFile <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  cout<< "\n";
  MyFile.close();
  }


