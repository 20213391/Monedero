#include "frmPrincipal.h" 
#include "login.h"


using namespace System;

using namespace System::Windows::Forms;

using namespace ConstruccionView;

//using namespace SistemaPlanificacionMatriculaView;


void main(array <String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	login my_login;
	frmPrincipal ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/

	Application::Run(% my_login);
	Application::Run(% ventana); 

}