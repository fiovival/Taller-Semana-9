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
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm4::timer1_Tick);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 566);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		int x, y, dx, dy;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (button1->Location.X + dx<0 || 
			button1->Location.X + button1->Size.Width + dx>this->ClientRectangle.Width ||
			button1->Location.Y + dy<0 ||
		    button1->Location.Y + button1->Size.Width + dy>this->ClientRectangle.Width) {
			do {
				dx = (rand() % 3 - 1) * 5;
				dy = (rand() % 3 - 1) * 5;
			} while (dx == 0 && dy == 0);
		}
		else {
			button1->Location = Point(button1->Location.X + dx, button1->Location.Y + dy);
		}
	}
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		do {
			dx = (rand() % 3 - 1) * 5;
			dy = (rand() % 3 - 1) * 5;
		} while (dx == 0 && dy == 0);
	}
	};
}
