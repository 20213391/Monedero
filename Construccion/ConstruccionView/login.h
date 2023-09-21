#pragma once

namespace ConstruccionView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ user_textBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ingresar_button;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password_textBox;
	private: System::Windows::Forms::Button^ cancelar_button;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->user_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ingresar_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->cancelar_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// user_textBox
			// 
			this->user_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_textBox->Location = System::Drawing::Point(251, 64);
			this->user_textBox->Name = L"user_textBox";
			this->user_textBox->Size = System::Drawing::Size(238, 42);
			this->user_textBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario:";
			// 
			// ingresar_button
			// 
			this->ingresar_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ingresar_button->Location = System::Drawing::Point(106, 244);
			this->ingresar_button->Name = L"ingresar_button";
			this->ingresar_button->Size = System::Drawing::Size(149, 66);
			this->ingresar_button->TabIndex = 2;
			this->ingresar_button->Text = L"Ingresar";
			this->ingresar_button->UseVisualStyleBackColor = true;
			this->ingresar_button->Click += gcnew System::EventHandler(this, &login::ingresar_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(85, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña:";
			this->label2->Click += gcnew System::EventHandler(this, &login::label2_Click);
			// 
			// password_textBox
			// 
			this->password_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textBox->Location = System::Drawing::Point(251, 127);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->PasswordChar = '*';
			this->password_textBox->Size = System::Drawing::Size(238, 42);
			this->password_textBox->TabIndex = 3;
			// 
			// cancelar_button
			// 
			this->cancelar_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelar_button->Location = System::Drawing::Point(302, 244);
			this->cancelar_button->Name = L"cancelar_button";
			this->cancelar_button->Size = System::Drawing::Size(149, 66);
			this->cancelar_button->TabIndex = 5;
			this->cancelar_button->Text = L"Cancelar";
			this->cancelar_button->UseVisualStyleBackColor = true;
			this->cancelar_button->Click += gcnew System::EventHandler(this, &login::cancelar_button_Click_1);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 362);
			this->Controls->Add(this->cancelar_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->password_textBox);
			this->Controls->Add(this->ingresar_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->user_textBox);
			this->Name = L"login";
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &login::login_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void ingresar_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void login_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cancelar_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}