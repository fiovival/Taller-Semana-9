#pragma once
#include<iostream>
namespace TallerSemana9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		int num;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(212, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 487);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	       System::Windows::Forms::Button^ buttonx;
		   buttonx= (gcnew System::Windows::Forms::Button());
		   buttonx->Location = System::Drawing::Point(rand()% (this->ClientRectangle.Width-100)
			   , rand() % (this->ClientRectangle.Height - 100));
		   buttonx->Name = L"button1";
		   buttonx->Size = System::Drawing::Size(75, 23);
		   buttonx->TabIndex = 0;
		   buttonx->Text = "button"+num;
		   num++;
		   buttonx->UseVisualStyleBackColor = true;
		   buttonx->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
		   Controls->Add(buttonx);
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		num = 2;

	}
	};
}
