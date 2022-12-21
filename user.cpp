#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include <regex>

// Classe que representa um usuário
class User
{
protected:
    int m_id;
    std::string m_login;
    std::string m_password;

public:
    User() = default;  // Construtor padrão

    User( int id, const std::string &login, const std::string &password)
        : m_id(id), m_login(login), m_password(password){

        // Valida o login
        if (m_login.empty()) {
            throw std::invalid_argument("Login não pode ser vazio");
        }
        if (m_login.length() > 12) {
            throw std::invalid_argument("Login não pode ter mais de 12 caracteres");
        }
        if (std::regex_match(m_login, std::regex("\\d"))) {
            throw std::invalid_argument("Login não pode conter números");
        }
        // Valida a senha
        if (m_password.length() < 8 || m_password.length() > 20) {
            throw std::invalid_argument("Senha deve ter entre 8 e 20 caracteres");
        }
        if (!std::regex_match(m_password, std::regex(".*\\d.*\\d.*"))) {
            throw std::invalid_argument("Senha deve conter pelo menos 2 números");
        }
        if (!std::regex_match(m_password, std::regex(".*[a-zA-Z].*"))) {
            throw std::invalid_argument("Senha deve conter pelo menos 1 letra");
        }
    }

    std::string getLogin() const
    {
        return m_login;
    }

    std::string getPassword() const
    {
        return m_password;
    }

    int getId() const
    {
        return m_id;
    }

    void setPassword(const std::string &password)
    {
        m_password = password;
    }
};
#endif // USER_H