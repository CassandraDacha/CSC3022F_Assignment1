#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
#include<algorithm>
#include<unordered_map>


using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;

void readAndParse(stack<string> s, vector <TagStruct> v)
{
    // If stack is empty then return
    if (s.empty())
        return;
     
 
    string x = s.top();
    string r,u,q;
    vector <string> z ;
    bool found = false;
    int result = 0;
    
  for(int i = 0; i < int(x.rfind(">")); i++) {
 
   if (x[i] == '<'&& x[i+1] != '/' ){
   	 r = x.substr(i+1,x.find(">")-1);
    	 z.push_back(r);
   } 
   }
    // Pop the top element of the stack
   s.pop();
 
    // Recursively call the function PrintStack
    readAndParse(s,v);
 
    // Print the stack element starting
    // from the bottom
    
    unordered_map<string,int> m;
        for(int i=0; i<z.size(); i++){
            if(m.count(z[i])==0)
                m[z[i]] = 1;
            else
                m[z[i]]++;   
        }
    
     
     for (auto itr = m.cbegin(); itr != m.cend(); ++itr) {
      	cout<< itr->first << " " << itr->second << endl;
    }
  
   /*for(int i = 0; i < z.size(); i++){
    	if(!found) {
	   TagStruct c;
	   c.tagName = z[i];
	   c.numOfTags = 1;
	   c.text = "Hi";
	   v.push_back(c);
	   }
	}
*/
/*for (vector<TagStruct>::iterator p = v.begin(); p != v.end(); ++p){
  	cout <<"\"" << p->tagName << "\""<< "," << p->numOfTags << ","<<"\"" << p->text << "\""<< endl;
  }
  
  */
    // Push the same element onto the stack
    // to preserve the order
    //s.push(x);
}



 int main(int argc, char* argv[])
{
string filename;
  vector<TagStruct> tags;
   bool found = false;
   string str;
   stack<string> S;
   
  if(argc == 1){
   filename = "./Examples/long_nested.txt";
   }
 else{
  filename = argv[1];
  }
 ifstream file(filename);
  if(!file)
     {
     cout << "Couldn't open file " << filename << endl;
     return 1;
     }
  

  
   while (getline(file, str)) {
   
   S.push(str); 

	}
   readAndParse(S,tags);

   
    return 0;
}
