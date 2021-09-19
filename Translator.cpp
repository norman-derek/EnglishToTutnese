#include "translator.h"
#include "model.h"

Translator::Translator(){

}

Translator::~Translator(){

}

//Translates a word from english to tutnese 
string Translator::translateEnglishWord(string word){
    Model *m = new Model();
    string tutneseword = "";
    for(int i = 0; i < word.length(); ++i){
        if ((i < word.length()) && (word[i] == word [i+1])) {
            tutneseword += m->translateDoubleCharacter(word[i]); //translates the first character of the double character and turns it into the prefix for the second character of double character
        } else {
        tutneseword += m->translateSingleCharacter(word[i]);
        }
    }
    delete m;
    return tutneseword;
}

//translates a sentence to tutnese
string Translator::translateEnglishSentence(string sentence){
    string word = "";
    string tutnesesentence = "";
    for(int i = 0; i < sentence.length(); ++i){ 
        if (i == sentence.length() - 1) { //since there is no whitespace after the last word this accounts for the last word in the sentence
            word += sentence[i];
            tutnesesentence += translateEnglishWord(word);

        } else if (!isspace(sentence[i])){ // while there is no whitespace it will add the characters of the word to a string called word
            word += sentence[i];
        } else if (isspace(sentence[i])){ //once there is a whitespace it translates the english word to tutnese and adds it to the tutnese sentence
            tutnesesentence += translateEnglishWord(word) + " ";
            word = "";
        } 
    }

    return tutnesesentence;
}