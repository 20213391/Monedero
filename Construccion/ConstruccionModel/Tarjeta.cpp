#include "Tarjeta.h"

using namespace ConstruccionModel;

Tarjeta::Tarjeta() {

}
Tarjeta::Tarjeta(String^ FechaAlta, String^ FechaBaja, int Estado, Usuario^ objUsuario) {

	this->FechaAlta = FechaAlta;
	this->FechaBaja = FechaBaja;
	this->Estado = Estado;
	this->objUsuario = objUsuario;
}