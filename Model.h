/* 
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 1
*/

//This file contains the basic structure for the Model class. The Model class translates single and double characters from english to tutnese

#include <iostream>

using namespace std;

//Model class translates single character from english to tutnese and double characters to tutnese with the correct prefix
class Model{

    public:
    Model(); // Constructor
    ~Model(); // Destructor 
    string translateSingleCharacter(char letter); //translateSingleCharacter Method takes in a character and translates it to its tutnese counterpart and returns it as a string
    string translateDoubleCharacter(char letter); //translateDoubleCharacter Method takes in a character that appears next to the same character in a word and translates it to its tutnese counterpart. OO becomes squato
};