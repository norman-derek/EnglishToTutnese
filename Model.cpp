#include "Model.h"

Model::Model(){

}

Model::~Model(){

}

string Model::translateSingleCharacter(char letter){
    string tutnese = "";
    if (letter == 'b'){
        tutnese = "bub";
    } else if (letter == 'B'){
        tutnese = "Bub";
    }

    return tutnese;
}

