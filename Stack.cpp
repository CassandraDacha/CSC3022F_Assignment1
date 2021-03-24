#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>


using namespace std;


struct TagStruct {
  string tagName;
  int numOfTags;
  string text;
  
} ;

void PrintStack(stack<string> s)
{
    // If stack is empty then return
    if (s.empty())
        return;
     
 
    string x = s.top();
    string r;
    vector <string> z ;
    bool count = false;
  for(int i = 0; i < int(x.length()); i++) {
    
    if (x[
   
   if(!count){
   	
   }
   if (x[i] == '<'&& x[i+1] != '/'){
   	if(){}
   	 r = x.substr(i+1);
    	 z.push_back(r);
   } 
   }
    // Pop the top element of the stack
   s.pop();
 
    // Recursively call the function PrintStack
    PrintStack(s);
 
    // Print the stack element starting
    // from the bottom
   for(int i = 0; i < z.size(); i++){
    	cout << z[i] << "\n ";
 	}
    // Push the same element onto the stack
    // to preserve the order
    //s.push(x);
}

int main ()
{
  vector<TagStruct> tags;
  stack<string> S ;
  ifstream file("long_nested.txt");
  string str,x,y,z;
  char input;
  int count;
  bool found = false;
  
   while (getline(file, str)) {
   
   S.push(str); 

	}
   PrintStack(S);
   
    return 0;
}
