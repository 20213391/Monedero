#include "MaquinaCompra.h"


	MaquinaCompra::MaquinaCompra(){
		
	}
	MaquinaCompra::MaquinaCompra(int codigo, String^ ListaUsuarios, String^ FechaCompra, double PrecioProducto){
		this -> codigo = codigo;
		this -> FechaCompra = FechaCompra;
		this -> PrecioProducto = PrecioProducto;

	}
	