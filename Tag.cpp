#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;

void readAndParse(vector<TagStruct> vect) {q
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  cout<< "\n";
  }
  
 void printAllTags(vector<TagStruct> vect) {
 for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< ", \n";
  }
  cout<< "\n";
  }
  
  void writeTags(vector<TagStruct> vect){
  
  ofstream MyFile("Tags.txt");
  
  for (vector<TagStruct>::iterator p = vect.begin(); p != vect.end(); ++p){
  	MyFile <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  cout<< "\n";
  MyFile.close();
  }


