#include "Comensal.h"

using namespace ConstruccionModel;

Comensal::Comensal() : Usuario() {

}
Comensal::Comensal(String^ UsuarioComensal, String^ PswdComensal) {
	this->UsuarioComensal = UsuarioComensal;
	this->PswdComensal = PswdComensal;
}
