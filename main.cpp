#include <iostream>
#include "userForm.cpp"
#include "userPersistence.cpp"

using namespace std;

int main() {
    int id = 0;
    int opcao;
    UserPersistence UP;
    UserForm form;
    std::string login, password;

    do {
        cout << "Menu de Acesso" << endl;
        cout << "1. Cadastrar usuário" << endl;
        cout << "2. Atualizar usuário" << endl;
        cout << "3. Remover usuário" << endl;
        cout << "4. Listar usuários" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
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

    return 0;
}