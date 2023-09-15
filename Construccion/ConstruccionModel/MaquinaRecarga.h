#pragma once //aparece solo

using namespace System;

public ref class MaquinaRecarga {
	/*Si es que hay herencia, se representa de la sig forma:
	public ref class Ususario : Persona
	*/

	/*definimos los atributos*/
private:
	int codigo;
	String^ MontoAbono;
	double PrecioProducto;
	String^ FechaRecarga;

public:
	MaquinaRecarga();
	MaquinaRecarga(int codigo, String^ MontoAbono, double PrecioProducto, String^ FechaRecarga);
};
