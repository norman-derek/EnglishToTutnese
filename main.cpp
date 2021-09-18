#include "Model.h"

int main(int argc, char** argv){

    Model *m = new Model();
    char c = 'B';

    cout << "Single character is " << c << ", Translated string is " << m->translateSingleCharacter(c) << endl;

    delete m;
    return 0;
}