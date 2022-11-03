public class Extrato implements calculo
{

    

    public String extrato() {
        final String fimDeLinha = System.getProperty("line.separator");
        double valorTotal = 0.0;
        int pontosDeAlugadorFrequente = 0;
        Iterator alugueis = FitasAlugadas.iterator();
        String resultado = "Registro de Alugueis de " + getNome() + fimDeLinha;
        while(alugueis.hasNext()) {
        double valorCorrente = 0.0;
        Aluguel cada = (Aluguel)alugueis.next();

        // determina valores para cada linha
        switch(cada.getFita().getCodigoDePreco()) {
        case Fita.NORMAL:
            valorCorrente += 2;
            if(cada.getDiasAlugada() > 2) {
            valorCorrente += (cada.getDiasAlugada() - 2) * 1.5;
            }
            break;
        case Fita.LANCAMENTO:
            valorCorrente += cada.getDiasAlugada() * 3;
            break;
        case Fita.INFANTIL:
            valorCorrente += 1.5;
            if(cada.getDiasAlugada() > 3) {
            valorCorrente += (cada.getDiasAlugada() - 3) * 1.5;
            }
            break;
        } //switch
        // trata de pontos de alugador frequente
        pontosDeAlugadorFrequente++;
        // adiciona bonus para Aluguel de um lan�amento por pelo menos 2 dias
        if(cada.getFita().getCodigoDePreco() == Fita.LANCAMENTO &&
            cada.getDiasAlugada() > 1) {
            pontosDeAlugadorFrequente++;
        }

        // mostra valores para este Aluguel
        resultado += "\t" + cada.getFita().getTitulo() + "\t" + valorCorrente + fimDeLinha;
        valorTotal += valorCorrente;
        } // while
        // adiciona rodap�
        resultado += "Valor total devido: " + valorTotal + fimDeLinha;
        resultado += "Voce acumulou " + pontosDeAlugadorFrequente +
                " pontos de alugador frequente";
        return resultado;
  }
}

