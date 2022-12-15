#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "userForm.h"

int main(void)
{
    /*MYSQL * conn;
    mysql_real_connect(conn,
                    "localhost",
                    "root",
                    "1234",
                    "funcionario",
                    0,
                    NULL,
                    0);*/

    userForm mn;
    mn.Menu();
    return 0;
}
