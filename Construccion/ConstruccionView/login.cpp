#include "login.h"

System::Void ConstruccionView::login::ingresar_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    // Obtener el texto ingresado en los campos de texto
    String^ username = user_textBox->Text;
    String^ password = password_textBox->Text;

    if (username == "CHOCO" && password == "CHOCO") {
        // Si las credenciales son correctas, muestra un mensaje de bienvenida
        MessageBox::Show("Bienvenido " + username);
        // Cierra el formulario actual
        this->Close();
        
    }
    else {
        // Si las credenciales son incorrectas, muestra un mensaje de error
        MessageBox::Show("Usuario y contraseña incorrectos.");
    }
}




