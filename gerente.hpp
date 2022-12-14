#pragma once
#include "gerenciaFuncionario.h"

class gerente: public gerenciaFuncionario
{
	public:
		gerente() = default;
		double calculaSalario(double salario);
		int acesso();
		~gerente() = default;
	protected:
	
};