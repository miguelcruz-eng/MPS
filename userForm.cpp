#include "userForm.h"

using namespace std;

userForm::userForm()
{

}

void userForm::Menu()
{   
    userControl controler;
    controler.carregarDados();
    int esc;
    string dado1;
    string dado2, dado3;
    cout<<"BEM VINDO AO MENU"<<endl;
    cout<<"1.Login"<<endl;
    cout<<"2.Logon"<<endl;
    cout<<"3.Sair"<<endl;
    cin>>esc;
    switch (esc)
    {
    case 1:
        getchar();
        cout<<"Usuario: ";
        getline(cin,dado1);
        cout<<"Senha: ";
        getline(cin,dado2);
        try
        {
            controler.checaDado(dado1,dado2);
            Menu2(dado1);
        }
        catch(string e)
        {
            cout << e << '\n';
        }
        break;
    case 2:
        cout<<"Insira o novo Usuario: ";
        cin>>dado1;
        cout<<"Insira uma Senha: ";
        cin>>dado2;
        cout<<"Repita a Senha inserida: ";
        cin>>dado3;
        if(dado2 != dado3)
        {
            cout<<"Dados invalidos!"<<endl;
            Menu();
        }else
        {
            controler.salvaUsuario(dado1,dado2);
            cout<<"Cadastro realizado com sucesso!"<<endl;
            Menu();
        }
        break;
    case 3:
        cout<<"XAU!"<<endl;
        return;
    default:
        cout<<"entrada invalida"<<endl;
        Menu();
        break;
    }
}

void userForm::Menu2(string nome)
{
    int escolha;
    userControl controler;
    cout<<"Seja Bem Vindo "<<nome<<endl;
    cout<<"ALGO INTERESSANTE PARA O USUARIO: ";
    cout<<"('-')/"<<endl;
    while(1)
    {
        cout<<"Selecione uma opção: "<<endl;
        cout<<"1.Logoff"<<endl;
        cout<<"2.sair"<<endl;
        cin>>escolha;
        switch (escolha)
        {
        case 1:
            Menu();
            break;
        case 2:
            return;
            break;
        default:
            cout<<"invalido!"<<endl;
            break;
        }
    }
}

userForm::~userForm()
{

}