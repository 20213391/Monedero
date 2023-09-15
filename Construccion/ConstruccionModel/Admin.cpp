#include "Admin.h"


Admin::Admin() : Usuario() {

}
Admin::Admin(String^ UsuarioAdmin, String^ PswdAdmin) {
	this->UsuarioAdmin = UsuarioAdmin;
	this->PswdAdmin = PswdAdmin;
}
