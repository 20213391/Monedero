#include "MaquinaRecarga.h"

using namespace ConstruccionModel;

MaquinaRecarga::MaquinaRecarga() {

}
MaquinaRecarga::MaquinaRecarga(int codigo, String^ MontoAbono, double PrecioProducto, String^ FechaRecarga) {
	this->codigo = codigo;
	this->MontoAbono = MontoAbono;
	this->FechaRecarga = FechaRecarga;
}
