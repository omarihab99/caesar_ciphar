#include <iostream>
#include "decrypt.h"
#include "encrypt.h"
int main(int argc, char* argv[])
{
    if(argc<4) return 0;
    const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string output;
    std::string op = argv[1];
    int operation;
    int key=atoi(argv[2]);
    if(op.compare("encrypt")==0) operation=1;
    else operation=0;  
    switch (operation)
    {
    case 1:
        output = Encrypt(key,argv[3],alphabet);
        std::cout<<"Encrypted message is "<<output<<"\n";
        break;
    case 0:
        output = Decrypt(key,argv[3],alphabet); 
        std::cout<<"Decrypted message is "<<output<<"\n";
        break;
    default:
        break;
    }
    return 0;
}