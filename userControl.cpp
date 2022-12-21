#include "User.cpp"

// Classe que gerencia os usuários
class UserControl
{
private:
    std::vector<User> m_users;

public:
    // Adiciona um novo usuário
    void createUser(int id, const std::string &login, const std::string &password)
    {
        m_users.emplace_back(id, login, password);
    }

    // Obtém todos os usuários
    std::vector<User> getUsers() const
    {
        return m_users;
    }

    // Obtém um usuário pelo login
    User getUserByLogin(const std::string &login) const
    {
        for (const auto &user : m_users) {
            if (user.getLogin() == login) {
                return user;
            }
        }

        throw std::runtime_error("Usuário não encontrado");
    }

    // Atualiza os dados de um usuário
    void updateUser(const std::string &login, const std::string &newPassword)
    {
        for (auto &user : m_users) {
            if (user.getLogin() == login) {
                user.setPassword(newPassword);
                return;
            }
        }

        throw std::runtime_error("Usuário não encontrado");
    }

    // Exclui um usuário pelo id
    void deleteUser(int id)
    {
        for (auto it = m_users.begin(); it != m_users.end(); ++it) {
            if (it->getId() == id) {
                m_users.erase(it);
            }
        }
    }
};