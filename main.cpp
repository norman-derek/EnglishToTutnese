#include "fileprocessor.h"

int main(int argc, char** argv){

    // Translator *t = new Translator();
    FileProcessor *fp = new FileProcessor();

    // string sentence = "I took a walk to the park yesterday";

    // cout << "Sentence is " << sentence << endl << ", Translated sentence is " << t->translateEnglishSentence(sentence) << endl;
    string input = argv[1];
    string output = argv[2];
    
    fp->processFile(input, output);

    delete fp;
    return 0;
}