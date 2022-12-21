#include <algorithm>
#include <numeric>
#include <vector>
#include <fstream>

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

    void carregar(const std::string& nomeArquivo) {
  std::ifstream arquivo(nomeArquivo);
  if (!arquivo.is_open()) {
    return;  // Não faz nada se o arquivo não puder ser aberto
  }

  funcionarios_.clear();  // Limpa a coleção antes de carregar os dados
  int id;
  std::string nome;
  double salario;
  while (arquivo >> id >> nome >> salario) {
    funcionarios_.emplace_back(id, nome, salario);
  }
  arquivo.close();
}

void salvar(const std::string& nomeArquivo) const {
  std::ofstream arquivo(nomeArquivo);
  if (!arquivo.is_open()) {
    return;  // Não faz nada se o arquivo não puder ser aberto
  }

  for (const auto& f : funcionarios_) {
    arquivo << f.id() << " " << f.nome() << " " << f.salario() << std::endl;
  }
  arquivo.close();
}

  // Métodos de controle de salário
  double salarioMedio();
  int funcionariosComSalarioAcima(double salario);


};