#include <iostream>

using namespace std;


class Translator{

    public:
    Translator();
    ~Translator();
    string translateEnglishWord(string word);
    string translateEnglishSentence(string sentence);
};