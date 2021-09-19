#include <iostream>

using namespace std;

class Model{

    public:
    Model();
    ~Model();
    string translateSingleCharacter(char letter);
    string translateDoubleCharacter(char letter);
};