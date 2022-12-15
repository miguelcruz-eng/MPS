#include "userForm.h"

using namespace std;

typedef unsigned char Byte;
typedef Byte cs_byte;

userForm::userForm()
{

}

void userForm::MenuPrincipal() {
    cout << "\n------ SISTEMA DE GERENCIAMENTO DE FOLHA DE PAGAMENTO ------\n\n";

    cout << "[1] Signin\n";
    cout << "[2] Signup\n";
    cout << "[3] Sair\n";

    cout << "\n------------------------------------------------------------\n\n";

}


void userForm::MenuCadastro(userControl controler) {
    string code;
    string senhaU = "123456";
    string dado1, dado2, dado3;
    cout<<"Para realizar o cadastro, é necessário ter o acesso, digite a senha:\n";
    cin>>code;
    getchar();
    if(code == senhaU) 
    {
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
            Sleep(3000);
        }
        cout<<"Qual o seu cargo?\n";
        getline(cin,dado3);
        try
        {
            controler.salvaUsuario(dado1, dado2, dado3);
        }
        catch(string e)
        {
            cout << e << endl;
            Sleep(3000);
        } 
    cout<<"Cadastro realizado com sucesso!"<<endl;   
    Sleep(3000);      
    }else {
        cout<<"Acesso Negado\n";
        Sleep(3000);
    }
}

void userForm::MenuLogin(userControl controler, user * u) {
    string dado1, dado2;
    cout<<"Usuario: ";
    getline(cin,dado1);
    cout<<"Senha: ";
    getline(cin,dado2);
    try
    {
        u = controler.checaDado(dado1,dado2);
    }
    catch(string e)
    {
        cout << e << '\n';
        Sleep(3000);
        Menu();
    }
    cout<<"Login efetuado com suceso!:\n";
    Sleep(3000);
}

void userForm::Menu()
{   
    user * u;
    userControl controler;
    controler.carregarDados();

    int esc;

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
            MenuLogin(controler, u);
            break;
        case 2:
            MenuCadastro(controler);
            break;
        case 3:
            cout<<"Encerrando aplicacao...!"<<endl;
            Sleep(2000);
            exit(0);
        default:
            cout<<"entrada invalida"<<endl;
            Sleep(3000);
            break;
        }
    }
}

userForm::~userForm()
{

}
