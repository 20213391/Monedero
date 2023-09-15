#include "Tarjeta.h"
#include "Usuario.h"

Tarjeta::Tarjeta() {

}
Tarjeta::Tarjeta(String^ FechaAlta, String^ FechaBaja, int Estado, Usuario^ objUsuario) {

	this->FechaAlta = FechaAlta;
	this->FechaBaja = FechaBaja;
	this->Estado = Estado;
	this->objUsuario = objUsuario;
}