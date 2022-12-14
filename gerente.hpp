#pragma once
#include "gerenciaFuncionario.h"

class gerente: public gerenciaFuncionario
{
	public:
		gerente() = default;
		double calculaSalario(double salario);
		~gerente() = default;
	protected:
	
};