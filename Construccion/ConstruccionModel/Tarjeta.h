#pragma once

using namespace System;

namespace ConstruccionModel {

	public ref class Tarjeta {

	private:
		String^ FechaAlta;
		String^ FechaBaja;
		int Estado;
		Usuario^ objUsuario;

	public:
		Tarjeta();
		Tarjeta(String^ FechaAlta, String^ FechaBaja, int Estado, Usuario^ objUsuario);

	};

}