#include <iostream>
#include "userForm.cpp"
#include "userPersistence.cpp"

using namespace std;

int main() {
    int id = 0;
    int opcao = 0;
    UserPersistence UP;
    UserForm form;
    std::string login, password;
    int entrada = 0, escolha = 0;


    cout << "Seja bem vindo ao menu!!!\n
            Digite 1 para acessar o Menu do Funcionario\n
            Digite 2 para acessar o Menu de Acesso" << endl;
    cin >> escolha;

    if(escolha == 1)
    {

        while(entrada != 4)
        {
            cout << "Menu de Acesso do Funcionario" << endl;
            cout << "Escolha uma opção: ";
            cout << "1. Mostrar Funcionario" << endl;
            cout << "2. Atualizar Funcionario" << endl;
            cout << "3. Remover Funcionario" << endl;
            cout << "4. Sair" << endl;
            cin >> entrada;
            switch(entrada)
            {
                case 1:{
                    int p;
                    cout<<"Digite o ID do funcionario a buscar: ";
                    cin>>p;
                    FP.read(p);
                    break;
                }
                case 2:
                    cout<<"nada\n";
                    //FP.update(it);
                    break;
                case 3:
                    cout<<"Digite o ID do funcionario que sera deletado: ";
                    cin>>p;
                    FP.deletes(p);
                case 4:
                        cout << "Saindo do programa." << endl;
                        break;
                default:
                        cout << "Opção inválida." << endl;
                        break;

            }
        }
    }else{
        do {
            cout << "Menu de Acesso" << endl;
            cout << "Escolha uma opção: ";
            cout << "1. Cadastrar usuário" << endl;
            cout << "2. Atualizar usuário" << endl;
            cout << "3. Remover usuário" << endl;
            cout << "4. Listar usuários" << endl;
            cout << "5. Sair" << endl;
            cin >> opcao;

            switch (opcao) {
            case 1: {
                User ui = form.collectUserData(id);

                UP.create(ui);
                id++;
                break;
            }
            case 2:
                cout<<"nada\n";
                //UP.update(ui);
                break;
            case 3:
                int i;
                cout<<"Digite o ID do usuario que sera deletado: ";
                cin>>i;
                UP.deletes(i);
                break;
            case 4:
                cout<<"Digite o ID do usuario a buscar: ";
                cin>>i;
                UP.read(i);
                break;
            case 5:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida." << endl;
                break;
            }
        } while (opcao != 5);
    }

    return 0;
}