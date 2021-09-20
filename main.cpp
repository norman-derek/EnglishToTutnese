#include "fileprocessor.h"

int main(int argc, char** argv){ // main method

    FileProcessor *fp = new FileProcessor(); // creates file processor object to be able to use methods from file processor class

    if(argc < 3) { //checks to see if correct amount of arguments were provided in command line
        cout << "whoops! sorry! There was an incorrect amount of arguments provided." << endl;
        cout << "Please run like: \"./assignment1.out englishfile.txt tutnesefile.txt\"" << endl;
        return -1;
    } 
    //first command line argument would be ./assignment1.out 
    string input = argv[1]; // takes the 2nd argument command line which is the input file 
    string output = argv[2]; // takes the 3rd argument command line which is the output file

    fp->processFile(input, output); // calls processFile method with command line arguments as arguments for method
    

    delete fp; //deletes file processor object now that we are done using it
    return 0;
}