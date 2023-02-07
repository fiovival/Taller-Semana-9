#pragma once
#include"MyForm1.h"
#include"MyForm2.h"
namespace TallerSemana9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(23, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 221);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ejercicio1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(194, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 220);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ejercicio2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(376, 42);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 214);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ejercicio3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 306);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ obj = gcnew MyForm1();
		obj->Show(); //esto es asincrono
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ obj = gcnew MyForm2();
		obj->ShowDialog(); // esto es sincrono uno solo al mismo tiempo
		delete obj; 
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ obj = gcnew MyForm4();
		obj->ShowDialog(); // esto es sincrono uno solo al mismo tiempo
		delete obj;
	}
	};
}
