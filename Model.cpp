#include "model.h"

Model::Model(){

}

Model::~Model(){

}

//translateSingleCharacter Method takes in a char and translates it to its tutnese counterpart and returns the string
string Model::translateSingleCharacter(char letter){
    string tutnese = "";
    if (letter == 'B'){
        tutnese = "Bub";
    } else if (letter == 'b'){
        tutnese = "bub";
    } else if (letter == 'C') {
        tutnese = "Cash";
    } else if (letter == 'c') {
        tutnese = "cash";
    } else if (letter == 'D') {
        tutnese = "Dud";
    } else if (letter == 'd') {
        tutnese = "dud";
    } else if (letter == 'F') {
        tutnese = "Fuf";
    } else if (letter == 'f') {
        tutnese = "fuf";
    } else if (letter == 'G') {
        tutnese = "Gug";
    } else if (letter == 'g') {
        tutnese = "gug";
    } else if (letter == 'H') {
        tutnese = "Hash";
    } else if (letter == 'h') {
        tutnese = "hash";
    } else if (letter == 'J') {
        tutnese = "Jay";
    } else if (letter == 'j') {
        tutnese = "jay";
    } else if (letter == 'K') {
        tutnese = "Kuck";
    } else if (letter == 'k') {
        tutnese = "kuck";
    } else if (letter == 'L') {
        tutnese = "Lul";
    } else if (letter == 'l') {
        tutnese = "lul";
    } else if (letter == 'M') {
        tutnese = "Mum";
    } else if (letter == 'm') {
        tutnese = "mum";
    } else if (letter == 'N') {
        tutnese = "Nun";
    } else if (letter == 'n') {
        tutnese = "nun";
    } else if (letter == 'P') {
        tutnese = "Pub";
    } else if (letter == 'p') {
        tutnese = "pub";
    } else if (letter == 'Q') {
        tutnese = "Quack";
    } else if (letter == 'q') {
        tutnese = "quack";
    } else if (letter == 'R') {
        tutnese = "Rug";
    } else if (letter == 'r') {
        tutnese = "rug";
    } else if (letter == 'S') {
        tutnese = "Sus";
    } else if (letter == 's') {
        tutnese = "sus";
    } else if (letter == 'T') {
        tutnese = "Tut";
    } else if (letter == 't') {
        tutnese = "tut";
    } else if (letter == 'V') {
        tutnese = "Vuv";
    } else if (letter == 'v') {
        tutnese = "vuv";
    } else if (letter == 'W') {
        tutnese = "Wack";
    } else if (letter == 'w') {
        tutnese = "wack";
    } else if (letter == 'X') {
        tutnese = "Ex";
    }else if (letter == 'x') {
        tutnese = "ex";
    } else if (letter == 'Y') {
        tutnese = "Yub";
    } else if (letter == 'y') {
        tutnese = "yub";
    } else if (letter == 'Z') {
        tutnese = "Zub";
    } else if (letter == 'z') {
        tutnese = "zub";
    } else {
        tutnese = letter;
    }

    return tutnese;
}

string Model::translateDoubleCharacter(char letter){
    string tutnese = "";
    //only need squat because first letter of the double character will be transformed to squat and the
    //second letter of the double character will be added to that. so in oo the first o will become squat
    //and become the prefix for the second o and become squato in translator class
    if (letter == 'a'){ 
        tutnese = "squat";
    } else if (letter == 'e') {
        tutnese = "squat";
    } else if (letter == 'i') {
        tutnese = "squat";
    } else if (letter == 'o') {
        tutnese = "squat";
    } else if (letter == 'u') {
        tutnese = "squat";
    } else {
        tutnese = "squa"; 
    }

    return tutnese;
} 

