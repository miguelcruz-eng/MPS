public class Aluguel
{
  private Fita Fita;
  private int diasAlugada;

  public Aluguel(Fita Fita, int diasAlugada) {
    this.Fita = Fita;
    this.diasAlugada = diasAlugada;
  }

  public Fita getFita() {
    return Fita;
  }

  public int getDiasAlugada() {
    return diasAlugada;
  }
}

