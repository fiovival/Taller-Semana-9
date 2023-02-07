#pragma once
#include"MyForm4.h"
namespace TallerSemana9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(257, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 25);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(345, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(15, 47);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(347, 22);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown1_ValueChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(15, 82);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(359, 56);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm3::trackBar1_Scroll);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(30, 144);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(332, 155);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 342);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int r, g, b;
			  bool valido;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		return;
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		valido = true;
		Close();
		return;
	}
	private: void actualizar_colores() {
		pictureBox1->BackColor = Color::FromArgb(r, g, b);
	}
    private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
		r = 0;
		g = 0;
		b = 0;
		valido = false;
    }
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		r = Convert::ToInt32(textBox1->Text);
		actualizar_colores();
	}
    private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		g = Convert::ToInt32(numericUpDown1->Value);
		actualizar_colores();
	}
    private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		b = Convert::ToInt32(trackBar1->Value);
		actualizar_colores();
	}
};
}
