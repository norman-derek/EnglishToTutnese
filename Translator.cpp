/* 
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 1
 */

//This file contains the code for the methods of the translator class and translates english sentence to a tutnese sentence

#include "translator.h"
#include "model.h"

Translator::Translator(){ //Constructor

}

Translator::~Translator(){ //Destructor 

}

/*
 * This method is called translateEnglishWord
 * This method has a single parameter that takes in a string called word that represents an english word 
 * This method returns a string called tutneseword that represents the tutnese translation of the english word
*/
string Translator::translateEnglishWord(string word){
    Model *m = new Model(); // Creates Model object to use methods from Model class
    string tutneseword = ""; //initializes string for tutnese word where tutnese translations will be added to 
    for(int i = 0; i < word.length(); ++i){ // loops through the word and translates each character to its tutnese translation 
        if ((i < word.length()) && (tolower(word[i]) == tolower(word [i+1]))) {
            tutneseword += m->translateDoubleCharacter(word[i]); //translates the first character of the double character and turns it into the prefix for the second character of double character and treats second character as a single character
        } else {
        tutneseword += m->translateSingleCharacter(word[i]); //translates single characters to tutnese
        }
    }
    delete m;
    return tutneseword;
}

/*
* This method is called translateEnglishSentence
* This method returns a string called tutnesesentence which represents the tutnese translation of an english sentence
* This method takes a single parameter which is a string called sentence representing an english sentence
*/
string Translator::translateEnglishSentence(string sentence){
    string word = "";
    string tutnesesentence = "";
    for(int i = 0; i < sentence.length(); ++i){ 
        if (i == sentence.length() - 1) { //since there is no whitespace after the last word this accounts for the last word in the sentence
            word += sentence[i]; //adds the last character of the string to the word  
            tutnesesentence += translateEnglishWord(word); //translates word to tutnese and adds it to string tutnese sentence
        } else if (!isspace(sentence[i])){ // while there is no whitespace it will add the characters of the word to a string called word
            word += sentence[i];
        } else if (isspace(sentence[i])){ //once there is a whitespace it translates the english word to tutnese and adds it to the tutnese sentence
            tutnesesentence += translateEnglishWord(word) + " "; //translates english word to tutnese and adds space after it 
            word = ""; // resets word to being empty for the next word in the sentence
        } 
    }

    return tutnesesentence; 
}