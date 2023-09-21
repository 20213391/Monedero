#include "HistorialTransaccion.h"

using namespace ConstruccionModel;

HistorialTransaccion::HistorialTransaccion() {

}

HistorialTransaccion::HistorialTransaccion(int codigo, String^ fecha, double valor, String^ UsuarioAsociado, String^ IDMaquina, Usuario^ objUsuario, MaquinaCompra^ objMaquinaCompra, MaquinaRecarga^ objMaquinaRecarga){

	this->codigo = codigo;
	this->fecha = fecha;
	this->valor = valor;
	this->UsuarioAsociado = UsuarioAsociado;
	this->IDMaquina = IDMaquina;
	this->objUsuario = objUsuario;
	this->objMaquinaCompra = objMaquinaCompra;
	this->objMaquinaRecarga = objMaquinaRecarga;

}