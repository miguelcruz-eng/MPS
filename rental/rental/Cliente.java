import java.util.*;

public class Cliente {
  private String nome;
  private Collection FitasAlugadas = new Vector();

  public Cliente(String nome) {
    this.nome = nome;
  }

  public String getNome() {
    return nome;
  }

  public void adicionaAluguel(Aluguel Aluguel) {
    FitasAlugadas.add(Aluguel);
  }
}

