#include <algorithm>
#include <numeric>
#include <vector>

#include "Funcionario.cpp"

// Classe de persistência
class FuncionarioPersistence {
protected:
  std::vector<Funcionario> funcionarios_;  // Armazena os funcionários

public:
  // Métodos CRUD
  void create(Funcionario funcionario) {
  funcionarios_.push_back(funcionario);
}
  
  Funcionario read(int id) {
  auto it = std::find_if(funcionarios_.begin(), funcionarios_.end(),
                         [id](const Funcionario& f) { return f.id() == id; });
  if (it != funcionarios_.end()) {
    return *it;
  }
  // Retorna um objeto "vazio" se o funcionário não for encontrado
  return Funcionario{};
}

  void update(Funcionario funcionario) {
  auto it = std::find_if(funcionarios_.begin(), funcionarios_.end(),
                         [id = funcionario.id()](const Funcionario& f) {
                           return f.id() == id;
                         });
  if (it != funcionarios_.end()) {
    *it = funcionario;
  }
}

  void deletes(int id) {
  auto it = std::find_if(funcionarios_.begin(), funcionarios_.end(),
                         [id](const Funcionario& f) { return f.id() == id; });
  if (it != funcionarios_.end()) {
    funcionarios_.erase(it);
  }
}

  // Métodos de controle de salário
  double salarioMedio();
  int funcionariosComSalarioAcima(double salario);


};