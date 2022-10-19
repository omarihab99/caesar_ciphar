#include "decrypt.h"

std::string Decrypt(int key, std::string cipharText,std::string alphabet)
{
    std::string plainText ="";
    for(int i=0;i<cipharText.size();i++)
    {
        char letter = cipharText[i];
        int idx = alphabet.find(letter);
        plainText+=alphabet[(idx-key)%26];
    }
    return plainText;
}