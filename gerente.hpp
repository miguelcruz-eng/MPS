#pragma once
#include "GerenciaFuncionario.h"

class gerente: public GerenciaFuncionario
{
	public:
		gerente() = default;
		double calculaSalario(double salario);
		~gerente() = default;
	protected:
	
};