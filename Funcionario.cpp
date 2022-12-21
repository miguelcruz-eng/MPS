#include <string>
#include <stack>

class Funcionario {
public:
  // Construtor padrão
  Funcionario() = default;

  // Construtor com argumentos
  Funcionario(int id, const std::string& nome, double salario)
      : id_(id), nome_(nome), salario_(salario) {}

  // Métodos de acesso
  int id() const { return id_; }
  std::string nome() const { return nome_; }
  double salario() const { return salario_; }

  void setId(int id) { id_ = id; }
  void setNome(const std::string& nome) { nome_ = nome; }
  void setSalario(double salario) { salario_ = salario; }

private:
  int id_;
  std::string nome_;
  double salario_;

  // Classe interna para representar o estado do objeto
  class Estado {
   public:
    Estado(int id, const std::string& nome, double salario)
        : id_(id), nome_(nome), salario_(salario) {}

    int id() const { return id_; }
    std::string nome() const { return nome_; }
    double salario() const { return salario_; }

   private:
    int id_;
    std::string nome_;
    double salario_;
};
  // Pilha para armazenar os estados do objeto
  std::stack<Estado> estados_;
};