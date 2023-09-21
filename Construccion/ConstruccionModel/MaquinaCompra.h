#pragma once //aparece solo

using namespace System;

namespace ConstruccionModel {

	public ref class MaquinaCompra {
		/*Si es que hay herencia, se representa de la sig forma:
		public ref class Ususario : Persona
		*/

		/*definimos los atributos*/
	private:
		int codigo;
		String^ ListaUsuarios;
		String^ FechaCompra;
		double PrecioProducto;

	public:
		MaquinaCompra();
		MaquinaCompra(int codigo, String^ ListaUsuarios, String^ FechaCompra, double PrecioProducto);
	};

}
