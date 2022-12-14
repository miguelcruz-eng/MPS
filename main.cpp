#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include <conio.h>

using namespace std;

#include "userForm.h"

int main(void)
{
    
    /*FILE *arquivo;
    arquivo = fopen("arqUser.txt","w");
    if(arquivo != NULL)
       cout << "Arquivo criado com sucesso!" << endl;
    else
        cout << "Problemas na criacao do arquivo." << endl;
    */
    MYSQL * conn;
    mysql_real_connect(conn,
                    "localhost",
                    "root",
                    "1234",
                    "funcionario",
                    0,
                    NULL,
                    0);

    userForm mn;
    mn.Menu();
    return 0;
}
