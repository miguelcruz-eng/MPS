#include <fstream>
#include <iostream>
#include <vector>
#include <conio.h>

#include "userForm.h"

int main(void)
{
    
    FILE *arquivo;
    arquivo = fopen("arqUser.txt","w");
        
    userForm mn;
    mn.Menu();
    return 0;
}
