public class Locadora implements Aluguel, Fita
{
  public static void main(String[] args) {
    Cliente c1 = new Cliente("Juliana");//Smell

    c1.adicionaAluguel(new Aluguel(new Fita("O Exorcista", Fita.NORMAL), 3));
    c1.adicionaAluguel(new Aluguel(new Fita("Men in Black                  ", Fita.NORMAL), 2));
    c1.adicionaAluguel(new Aluguel(new Fita("Jurassic Park III             ", Fita.LANCAMENTO), 3));
    c1.adicionaAluguel(new Aluguel(new Fita("Planeta dos Macacos           ", Fita.LANCAMENTO), 4));
    c1.adicionaAluguel(new Aluguel(new Fita("Pateta no Planeta dos Macacos ", Fita.INFANTIL), 10));
    c1.adicionaAluguel(new Aluguel(new Fita("O Rei Leao                    ", Fita.INFANTIL), 30));

    

    System.out.println(c1.extrato());
  }
}
