#pragma once

#include "mantPlatos.h"
#include "mantPrecio.h"
#include "mantComensal.h"
#include "mantAdmin.h"
#include "transConfimacion.h"

namespace ConstruccionView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form{
		public:
			frmPrincipal(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~frmPrincipal()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		protected:



		private: System::Windows::Forms::ToolStripMenuItem^ usuarioToolStripMenuItem;

		private: System::Windows::Forms::ToolStripMenuItem^ comensalToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ precioMenúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;

		protected:

		protected:


		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->precioMenúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->comensalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
				this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
				this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->menuStrip1->SuspendLayout();
				this->tabControl1->SuspendLayout();
				this->tabPage1->SuspendLayout();
				this->groupBox2->SuspendLayout();
				this->tabPage2->SuspendLayout();
				this->SuspendLayout();
				// 
				// menuStrip1
				// 
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->usuarioToolStripMenuItem });
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(853, 28);
				this->menuStrip1->TabIndex = 0;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// usuarioToolStripMenuItem
				// 
				this->usuarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->platosToolStripMenuItem,
						this->precioMenúToolStripMenuItem, this->comensalToolStripMenuItem, this->administradoresToolStripMenuItem
				});
				this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
				this->usuarioToolStripMenuItem->Size = System::Drawing::Size(124, 24);
				this->usuarioToolStripMenuItem->Text = L"Mantenimiento";
				this->usuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuarioToolStripMenuItem_Click);
				// 
				// platosToolStripMenuItem
				// 
				this->platosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platosToolStripMenuItem.Image")));
				this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
				this->platosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->platosToolStripMenuItem->Text = L"Platos";
				this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::platosToolStripMenuItem_Click);
				// 
				// precioMenúToolStripMenuItem
				// 
				this->precioMenúToolStripMenuItem->Name = L"precioMenúToolStripMenuItem";
				this->precioMenúToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->precioMenúToolStripMenuItem->Text = L"Precio Menú";
				this->precioMenúToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::precioMenúToolStripMenuItem_Click);
				// 
				// comensalToolStripMenuItem
				// 
				this->comensalToolStripMenuItem->Name = L"comensalToolStripMenuItem";
				this->comensalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->comensalToolStripMenuItem->Text = L"Comensales";
				this->comensalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::comensalToolStripMenuItem_Click);
				// 
				// administradoresToolStripMenuItem
				// 
				this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
				this->administradoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->administradoresToolStripMenuItem->Text = L"Administradores";
				this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::administradoresToolStripMenuItem_Click);
				// 
				// tabControl1
				// 
				this->tabControl1->Controls->Add(this->tabPage1);
				this->tabControl1->Controls->Add(this->tabPage2);
				this->tabControl1->Location = System::Drawing::Point(12, 41);
				this->tabControl1->Name = L"tabControl1";
				this->tabControl1->SelectedIndex = 0;
				this->tabControl1->Size = System::Drawing::Size(829, 484);
				this->tabControl1->TabIndex = 2;
				// 
				// tabPage1
				// 
				this->tabPage1->Controls->Add(this->groupBox2);
				this->tabPage1->Controls->Add(this->groupBox1);
				this->tabPage1->Location = System::Drawing::Point(4, 25);
				this->tabPage1->Name = L"tabPage1";
				this->tabPage1->Padding = System::Windows::Forms::Padding(3);
				this->tabPage1->Size = System::Drawing::Size(821, 455);
				this->tabPage1->TabIndex = 0;
				this->tabPage1->Text = L"Compra";
				this->tabPage1->UseVisualStyleBackColor = true;
				this->tabPage1->Click += gcnew System::EventHandler(this, &frmPrincipal::tabPage1_Click);
				// 
				// groupBox2
				// 
				this->groupBox2->Controls->Add(this->label4);
				this->groupBox2->Controls->Add(this->label3);
				this->groupBox2->Controls->Add(this->label2);
				this->groupBox2->Controls->Add(this->button3);
				this->groupBox2->Controls->Add(this->button2);
				this->groupBox2->Controls->Add(this->label1);
				this->groupBox2->Controls->Add(this->button1);
				this->groupBox2->Location = System::Drawing::Point(273, 250);
				this->groupBox2->Name = L"groupBox2";
				this->groupBox2->Size = System::Drawing::Size(293, 178);
				this->groupBox2->TabIndex = 1;
				this->groupBox2->TabStop = false;
				this->groupBox2->Text = L"Precios";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Location = System::Drawing::Point(17, 32);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(147, 16);
				this->label4->TabIndex = 6;
				this->label4->Text = L"Seleccione una opción:";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Location = System::Drawing::Point(196, 138);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(50, 16);
				this->label3->TabIndex = 5;
				this->label3->Text = L"S/. 9.50";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(196, 105);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(50, 16);
				this->label2->TabIndex = 4;
				this->label2->Text = L"S/. 9.50";
				// 
				// button3
				// 
				this->button3->Location = System::Drawing::Point(44, 134);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(82, 24);
				this->button3->TabIndex = 3;
				this->button3->Text = L"Ecoplato";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(44, 101);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(100, 24);
				this->button2->TabIndex = 2;
				this->button2->Text = L"Solo segundo";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(196, 72);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(50, 16);
				this->label1->TabIndex = 1;
				this->label1->Text = L"S/. 9.50";
				this->label1->Click += gcnew System::EventHandler(this, &frmPrincipal::label1_Click);
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(44, 68);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(109, 24);
				this->button1->TabIndex = 0;
				this->button1->Text = L"Menú Completo";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
				// 
				// groupBox1
				// 
				this->groupBox1->Location = System::Drawing::Point(85, 26);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(665, 218);
				this->groupBox1->TabIndex = 0;
				this->groupBox1->TabStop = false;
				this->groupBox1->Text = L"Platos";
				// 
				// tabPage2
				// 
				this->tabPage2->Controls->Add(this->button4);
				this->tabPage2->Controls->Add(this->textBox1);
				this->tabPage2->Controls->Add(this->label6);
				this->tabPage2->Controls->Add(this->label5);
				this->tabPage2->Location = System::Drawing::Point(4, 25);
				this->tabPage2->Name = L"tabPage2";
				this->tabPage2->Padding = System::Windows::Forms::Padding(3);
				this->tabPage2->Size = System::Drawing::Size(821, 455);
				this->tabPage2->TabIndex = 1;
				this->tabPage2->Text = L"Recarga";
				this->tabPage2->UseVisualStyleBackColor = true;
				// 
				// button4
				// 
				this->button4->Location = System::Drawing::Point(377, 247);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(75, 23);
				this->button4->TabIndex = 3;
				this->button4->Text = L"Confirmar";
				this->button4->UseVisualStyleBackColor = true;
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(452, 183);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(100, 22);
				this->textBox1->TabIndex = 2;
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Location = System::Drawing::Point(270, 185);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(128, 16);
				this->label6->TabIndex = 1;
				this->label6->Text = L"Usted ha ingresado:";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Location = System::Drawing::Point(328, 128);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(171, 16);
				this->label5->TabIndex = 0;
				this->label5->Text = L"Ingrese el monto a recargar";
				// 
				// frmPrincipal
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(853, 537);
				this->Controls->Add(this->tabControl1);
				this->Controls->Add(this->menuStrip1);
				this->IsMdiContainer = true;
				this->MainMenuStrip = this->menuStrip1;
				this->Name = L"frmPrincipal";
				this->Text = L"frmPrincipal";
				this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->tabControl1->ResumeLayout(false);
				this->tabPage1->ResumeLayout(false);
				this->groupBox2->ResumeLayout(false);
				this->groupBox2->PerformLayout();
				this->tabPage2->ResumeLayout(false);
				this->tabPage2->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void menúToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void usuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void platosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mantPlatos^ ventanaPlatos = gcnew mantPlatos();
	//ventanaPlatos->MdiParent = this;
	ventanaPlatos->ShowDialog();
}
private: System::Void precioMenúToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mantPrecio^ ventanaPrecio = gcnew mantPrecio();
	ventanaPrecio->ShowDialog();
}
private: System::Void comensalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mantComensal^ ventanaComensal = gcnew mantComensal();
	ventanaComensal->ShowDialog();
}
private: System::Void administradoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mantAdmin^ ventanaAdmin = gcnew mantAdmin();
	ventanaAdmin->ShowDialog();
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	transConfimacion^ ventanaConfirmacion = gcnew transConfimacion();
	ventanaConfirmacion->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	transConfimacion^ ventanaConfirmacion = gcnew transConfimacion();
	ventanaConfirmacion->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	transConfimacion^ ventanaConfirm = gcnew transConfimacion();
	ventanaConfirm->ShowDialog();
	//A
}
};
}
