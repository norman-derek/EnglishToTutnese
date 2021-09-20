/*
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 1
*/

//This file contains the code for the fileprocessor class. The file processor class takes a text file with english text and outputs a file with the tutnese translation to a text file 

#include "fileprocessor.h"
#include "translator.h"


FileProcessor::FileProcessor(){ // Constructor

}

FileProcessor::~FileProcessor(){ // Destructor 

}

/*
* This method is called processFile
* This method takes two parameters. The first parameter is a string called input that is the name of a text
*/
void FileProcessor::processFile(string input, string output){
    Translator *t = new Translator(); // initialized translator object to use translation methods from translator
    string line; //this variable will be used to get lines of text from input file. 

    ofstream tutnesefile(output); // opens output file for writing
    ifstream englishfile(input); // open input file for reading 

    while(getline(englishfile, line) && englishfile.is_open()){ // while the input file still has lines of text and is open
        tutnesefile << t->translateEnglishSentence(line) << endl; //translates line of text from englishfile and writes it tutnese file
    } 
    
    englishfile.close(); //close the input file
    tutnesefile.close(); //close the output file. 

    delete t; //deletes the translator object now that we don't need it anymore

}