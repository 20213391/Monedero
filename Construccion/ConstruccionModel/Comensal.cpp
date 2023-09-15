#include "Comensal.h"


Admin::Admin() : Usuario() {

}
Admin::Admin(String^ UsuarioComensal, String^ PswdComensal) {
	this->UsuarioComensal = UsuarioComensal;
	this->PswdComensal = PswdComensal;
}
