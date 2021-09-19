#include "fileprocessor.h"
#include "translator.h"


FileProcessor::FileProcessor(){

}

FileProcessor::~FileProcessor(){

}

void FileProcessor::FileProcessor(string input, string output){
    englishstring = "";

    ifstream englishfile (input);
    if(englishfile.is_open()){
        englishfile >> englishstring;
        cout << englishstring << endl;
    }

}