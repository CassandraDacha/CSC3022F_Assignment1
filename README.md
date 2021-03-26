# CSC3022F Assignment 1

We were tasked to create a  program that can parse a text file that contains XML-like tags,
in order to extract the tag types and the text elements they surround

## How to run the program

Use the following command to run the program

```bash
make run
```
## Files contained in the folder
Tag.cpp,
Tagdriver.cpp , 
Tag.h

## Usage

Tag.cpp file implements all the functions used in the Tagdriver.cpp file. It implements 3 main functions 
```C++
void readAndParse(vector<TagStruct> vect);   // function that reads returns the tag names and text
void printAllTags(vector<TagStruct> vect); // function that reads returns all tag names  
void writeTags(vector<TagStruct> vect) ; // function that reads and writes tags into a file  
```
## Nested Tags Case
I tried to complete the Mastery section but I was unsuccessful. I could only read the tag names. 
I saved this file as Stack.cpp. You can run it using the following commands
```bash
$ g++ Stack.cpp -o stack
$ ./stack (./Examples/filename)

```

## License
[MIT](https://choosealicense.com/licenses/mit/)
