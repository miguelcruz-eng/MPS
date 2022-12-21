#include "User.cpp"
// Classe que representa um formulário para coletar dados de um usuário
class UserForm
{
public:
    // Coleta os dados de um usuário
    User collectUserData(int id)
    {
        std::string login, password;

        std::cout << "Digite o login do usuário: ";
        std::getline(std::cin, login);

        std::cout << "Digite a senha do usuário: ";
        std::getline(std::cin, password);

        return User(id, login, password);
    }
};




