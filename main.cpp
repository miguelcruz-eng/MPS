#include <fstream>
#include <iostream>
#include <vector>
#include <conio.h>

#include "userForm.h"

int main(void)
{
    
    FILE *arquivo;
    arquivo = fopen("arqUser.txt","wt");
        
    userForm mn;
    mn.Menu();
    return 0;
}
