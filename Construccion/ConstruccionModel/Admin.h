#pragma once
#include "Usuario.h"

using namespace System;

public ref class Admin : Usuario {
	/*Si es que hay herencia, se representa de la sig forma:
	public ref class Ususario : Persona
	*/

	/*definimos los atributos*/
private:

	String^ UsuarioAdmin;
	String^ PswdAdmin;

public:

	Admin();
	Admin(String^ UsuarioAdmin, String^ PswdAdmin);

};