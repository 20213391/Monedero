#pragma once
#include "Usuario.h"
#include "MaquinaCompra.h"
#include "MaquinaRecarga.h"

using namespace System;

namespace ConstruccionModel {

	public ref class HistorialTransaccion {

	private:
		int codigo;
		String^ fecha;
		double valor;
		String^ UsuarioAsociado;
		String^ IDMaquina;
		Usuario^ objUsuario;
		MaquinaCompra^ objMaquinaCompra;
		MaquinaRecarga^ objMaquinaRecarga;

	public:
		HistorialTransaccion();
		HistorialTransaccion(int codigo, String^ fecha, double valor, String^ UsuarioAsociado, String^ IDMaquina, Usuario^ objUsuario, MaquinaCompra^ objMaquinaCompra, MaquinaRecarga^ objMaquinaRecarga);

	};

}