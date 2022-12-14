#ifndef GERENCIAFUNCIONARIO_H
#define GERENCIAFUNCIONARIO_H

/** 
 *  Classe abstrata utilizada para ser herdada e auxiliar a gerenciar o salário dos funcionários de diferentes
 *  designações.
 *  \class
*/
class gerenciaFuncionario
{
public:
    gerenciaFuncionario();
    ~gerenciaFuncionario();

    virtual double calculaSalario(double salario) = 0;

private:

};

#endif