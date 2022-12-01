#include <fstream>
#include <iostream>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "userForm.h"

int main(void)
{
    
    FILE *arquivo;
    arquivo = fopen("arqUser.txt","w");
    if(arquivo != NULL)
       cout << "Arquivo criado com sucesso!" << endl;
    else
        cout << "Problemas na criacao do arquivo." << endl;
    
    userForm mn;
    mn.Menu();
    return 0;
}
