#include "Comensal.h"


Comensal::Comensal() : Usuario() {

}
Comensal::Comensal(String^ UsuarioComensal, String^ PswdComensal) {
	this->UsuarioComensal = UsuarioComensal;
	this->PswdComensal = PswdComensal;
}
