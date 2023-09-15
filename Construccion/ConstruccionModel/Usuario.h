#pragma once //aparece solo

using namespace System;

public ref class Usuario {
	/*Si es que hay herencia, se representa de la sig forma:
	public ref class Ususario : Persona
	*/

	/*definimos los atributos*/
private:
	int codigo;
	String^ nombre;
	String^ apMaterno;
	String^ apPaterno;
	String^ fechaNacimiento;
	String^ DNI;
	String^ IdentificacionRFID;

public:
	Usuario();
	Usuario(int codigo, String^ nombre, String^ apMaterno, String^ apPaterno, String^ fechaNacimiento, String^ DNI);

};