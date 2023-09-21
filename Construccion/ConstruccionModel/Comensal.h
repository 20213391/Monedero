#pragma once
#include "Usuario.h"

using namespace System;

public ref class Comensal : Usuario {
	/*Si es que hay herencia, se representa de la sig forma:
	public ref class Ususario : Persona
	*/

	/*definimos los atributos*/
private:

	String^ UsuarioComensal;
	String^ PswdComensal;

public:

	Comensal();
	Comensal(String^ UsuarioComensal, String^ PswdComensal);

};
