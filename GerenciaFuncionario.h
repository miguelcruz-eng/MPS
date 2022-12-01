#ifndef GERENCIAFUNCIONARIO_H
#define GERENCIAFUNCIONARIO_H

/** 
 *  Classe abstrata utilizada para ser herdada e auxiliar a gerenciar o salário dos funcionários de diferentes
 *  designações.
 *  \class
*/
class GerenciaFuncionario
{
public:
    GerenciaFuncionario();
    ~GerenciaFuncionario();

    virtual double calculaSalario(double salario) = 0;

private:

};

#endif