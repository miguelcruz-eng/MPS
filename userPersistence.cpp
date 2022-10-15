#include "userPersistence.h"
#include <fstream>

using namespace std;

userPersistence::userPersistence()
{

}

vector<user*> userPersistence::carregarUsuario()
{
    ifstream fp;
    string dados1, dados2;
    vector<user*> vet;
    user* us;

    fp.open("usuario.txt", fstream::in);
    if (fp.is_open()) {
        while(1){
        getline(fp, dados1);
        if (fp.eof() || fp.bad())
            break;
        getline(fp, dados2);
        us = new user(dados1, dados2);
        vet.push_back(us);
        }
    }
    fp.close();

    return vet;
}

void userPersistence::salvarUsuario(string dados1, string dados2)
{
    ofstream fp;
    fp.open("usuario.txt", fstream::app);

    if(fp.is_open()){
        fp<<dados1<<endl;
        fp<<dados2<<endl;     
    }
    fp.close();
}

userPersistence::~userPersistence()
{

}