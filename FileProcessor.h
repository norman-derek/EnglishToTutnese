/*
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 1
*/

//This file contains the basic structure for file processor class. The file processor class takes a text file with english text and outputs a file with the tutnese translation to a text file 


#include <iostream>
#include <fstream>

using namespace std;

class FileProcessor {

    public:
    FileProcessor(); //Constructor
    ~FileProcessor(); //Destructor
    void processFile(string input, string output); //process takes an input file of english text and creates an output file with the tutnese translation

};