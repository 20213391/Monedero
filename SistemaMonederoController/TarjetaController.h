#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class TarjetaController {

	private:
		SqlConnection^ objConexion;  //Se agrega para trabajar con Base de Datos 
	public:
		TarjetaController();
		
		//M�todos de base de datos 

		void abrirConexionBD();
		void cerrarConexionBD();
		List<Tarjeta^>^ buscarTarjetaxEstadoBD(String^ estado);
		void registrarTarjetaBD(String^ fechaAlta, String^ fechaBaja, String^ Estado);
		void eliminarTarjetaBD(int codigo);
		Tarjeta^ buscarTarjetaxCodigoBD(int codigo);
		void ActualizarTarjetaBD(int codigo, String^ fechaAlta, String^ fechaBaja, String^ Estado);
		List<Tarjeta^>^ buscarAllBD();
	};
}