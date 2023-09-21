#include "Usuario.h"

using namespace ConstruccionModel;

Usuario::Usuario(){
		
}
Usuario::Usuario(int codigo, String^ nombre, String^ apMaterno, String^ apPaterno, String^ fechaNacimiento, String^ DNI){
	this -> codigo = codigo;
	this -> nombre = nombre;
	this -> apMaterno = apMaterno;
	this -> apPaterno = apPaterno;
	this -> fechaNacimiento = fechaNacimiento;
	this -> DNI = DNI;
}	