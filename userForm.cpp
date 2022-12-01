#include "userForm.h"

using namespace std;

userForm::userForm()
{

}

void userForm::MenuPrincipal() {
    cout << "\n------ SISTEMA DE GERENCIAMENTO DE FOLHA DE PAGAMENTO ------\n\n";

    cout << "[1] Signin\n";
    cout << "[2] Signup\n";
    cout << "[0] Sair\n";

    cout << "\n------------------------------------------------------------\n\n";

}


void userForm::MenuCadastro() {
    cout << "\n------------------------ Cadastro ------------------------\n\n";

    cout << "[1] Signin\n";
    cout << "[2] Signup\n";
    cout << "[0] Sair\n";

    cout << "\n------------------------------------------------------------\n\n";

}

void userForm::Menu()
{   
    userControl controler;
    controler.carregarDados();
    int esc;
    string dado1;
    string dado2, dado3;
    String senhaU = "123456";

    system("cls");

    cout << "\n---------- Bem vindo ao Sistema de Gerenciamento ------------\n\n";
    Sleep(5000);

    while(1){

        system("cls");

        MenuPrincipal();

        cin>>esc;
        getchar();

        switch (esc)
        {
        case 1:
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
            arquivo = fopen ("arqUser.txt","r+");
            cout<<"Insira o novo Usuario: ";
            getline(cin,dado1);
            cout<<"Insira uma Senha: ";
            getline(cin,dado2);
            cout<<"Digite novamente a Senha: ";
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
                cout << e << endl;
            }
            controler.salvaUsuario(dado1, dado2);
            cout<<"Cadastro realizado com sucesso!"<<endl;
            break;
            fclose (arquivo);
        case 3:
            cout<<"XAU!"<<endl;
            exit(0);
        default:
            cout<<"entrada invalida"<<endl;
            break;
        }
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
        system("cls");
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
