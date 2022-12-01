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
        }
        catch(string e)
        {
            cout << e << '\n';
            Menu();
        }
        Menu2(dado1);
        break;
    case 2:
        getchar();
        cout<<"Insira o novo Usuario: ";
        getline(cin,dado1);
        cout<<"Insira uma Senha: ";
        getline(cin,dado2);
        cout<<"Repita a Senha inserida: ";
        getline(cin,dado3);
        if(dado1.size() > 13)
        dado1.erase(dado1.begin()+13,dado1.end());
        if(dado2.size() > 20)
        dado2.erase(dado2.begin()+20,dado2.end());
        if(dado3.size() > 20)
        dado3.erase(dado3.begin()+20,dado3.end());
        try
        {
            controler.checaCadastroUsuario(dado1);
            controler.checaCadastroSenha(dado2,dado3);
        }
        catch(string e)
        {
            cout << e << '\n';
            Menu();
        }
        controler.salvaUsuario(dado1, dado2);
        cout<<"Cadastro realizado com sucesso!"<<endl;
        Menu();
        break;
    case 3:
        cout<<"XAU!"<<endl;
        exit(0);
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