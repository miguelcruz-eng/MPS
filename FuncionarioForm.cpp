#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "Funcionario.cpp"

class FormFuncionario {
 public:
  FormFuncionario(const std::vector<Funcionario>& funcionarios)
      : funcionarios_(funcionarios) {}

  void mostrar() const;
  void adicionar();
  void editar(int id);
  void remover(int id);

 private:
  std::vector<Funcionario> funcionarios_;

  Funcionario lerFuncionario() const;
};

void FormFuncionario::mostrar() const {
  for (const auto& f : funcionarios_) {
    std::cout << f.id() << " - " << f.nome() << " - " << f.salario()
              << std::endl;
  }
}

void FormFuncionario::adicionar() {
  auto funcionario = lerFuncionario();
  funcionarios_.push_back(funcionario);
}

void FormFuncionario::editar(int id) {
  auto it = std::find_if(funcionarios_.begin(), funcionarios_.end(),
                         [id](const Funcionario& f) { return f.id() == id; });
  if (it == funcionarios_.end()) {
    std::cout << "Funcionário não encontrado" << std::endl;
    return;
  }

  auto funcionario = lerFuncionario();
  funcionario.setId(id);
  *it = funcionario;
}
Funcionario FormFuncionario::lerFuncionario() const {
  int id;
  std::string nome;
  double salario;

  std::cout << "Insira o ID: ";
  std::cin >> id;

  std::cout << "Insira o nome: ";
  std::cin.ignore();  // Ignora o caractere de nova linha
  std::getline(std::cin, nome);

  std::cout << "Insira o salário: ";
  std::cin >> salario;

  return Funcionario(id, nome, salario);
}

void FormFuncionario::remover(int id) {
  auto it = std::find_if(funcionarios_.begin(), funcionarios_.end(),
                         [id](const Funcionario& f) { return f.id() == id; });
  if (it == funcionarios_.end()) {
    std::cout << "Funcionário não encontrado" << std::endl;
    return;
  }

  funcionarios_.erase(it);
}