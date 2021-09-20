/* 
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 1
*/

//This file contains the basic structure of the Translator class. The Translator class translates english sentence to a tutnese sentence

#include <iostream>

using namespace std;

//Translator class that will be used to translate the english sentence to tutnese
class Translator{

    public:
    Translator(); //Constructor
    ~Translator(); //Destructor
    string translateEnglishWord(string word); //translates and english word to its tutnese counterpart
    string translateEnglishSentence(string sentence); //translates an english sentence and returns its as a sentence in tutnese
};