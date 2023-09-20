#pragma once
#include "mantPlatos.h"

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
		private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ recargaToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ usuarioToolStripMenuItem;

		private: System::Windows::Forms::ToolStripMenuItem^ comensalToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ precioMenúToolStripMenuItem;

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
				this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->compraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->recargaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->precioMenúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->comensalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->menuStrip1->SuspendLayout();
				this->SuspendLayout();
				// 
				// menuStrip1
				// 
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->menúToolStripMenuItem,
						this->usuarioToolStripMenuItem
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(802, 28);
				this->menuStrip1->TabIndex = 0;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// menúToolStripMenuItem
				// 
				this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->compraToolStripMenuItem,
						this->recargaToolStripMenuItem
				});
				this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
				this->menúToolStripMenuItem->Size = System::Drawing::Size(63, 24);
				this->menúToolStripMenuItem->Text = L"Modo";
				this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::menúToolStripMenuItem_Click);
				// 
				// compraToolStripMenuItem
				// 
				this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
				this->compraToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->compraToolStripMenuItem->Text = L"Compra";
				// 
				// recargaToolStripMenuItem
				// 
				this->recargaToolStripMenuItem->Name = L"recargaToolStripMenuItem";
				this->recargaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->recargaToolStripMenuItem->Text = L"Recarga";
				// 
				// usuarioToolStripMenuItem
				// 
				this->usuarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->platosToolStripMenuItem,
						this->precioMenúToolStripMenuItem, this->comensalToolStripMenuItem
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
				// 
				// comensalToolStripMenuItem
				// 
				this->comensalToolStripMenuItem->Name = L"comensalToolStripMenuItem";
				this->comensalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->comensalToolStripMenuItem->Text = L"Comensales";
				// 
				// frmPrincipal
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(802, 457);
				this->Controls->Add(this->menuStrip1);
				this->IsMdiContainer = true;
				this->MainMenuStrip = this->menuStrip1;
				this->Name = L"frmPrincipal";
				this->Text = L"frmPrincipal";
				this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
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
	};
}
