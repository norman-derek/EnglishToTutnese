#include "fileprocessor.h"
#include "translator.h"


FileProcessor::FileProcessor(){

}

FileProcessor::~FileProcessor(){

}

void FileProcessor::processFile(string input, string output){
    Translator *t = new Translator();
    string englishsentence = "";
    string tutnesesentence = "";
    string line;

    ofstream tutnesefile(output);
    ifstream englishfile(input);

    while(getline(englishfile, line) && englishfile.is_open()){
        englishsentence += line;
        tutnesefile << t->translateEnglishSentence(line) << endl;

    }
    
    englishfile.close();
    tutnesefile.close();

    delete t;

}