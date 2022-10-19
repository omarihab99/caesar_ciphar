#include "encrypt.h"

std::string Encrypt(int key, std::string plainText,std::string alphabet)
{
    std::string cipharText="";
    for(int i=0;i<plainText.size();i++)
    {
        char letter = plainText[i];
        int idx = alphabet.find(letter);
        cipharText += alphabet[(idx+key)%26];
    }
    return cipharText;
}