#pragma once

namespace LAB07MARIANAGONZALEZ1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(125, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LABORATORIO 7";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cantidad de números: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Arreglo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Valor a buscar";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(203, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(241, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(203, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(52, 22);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"HASH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Binaria";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(234, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Secuencial";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(128, 372);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 22);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Posición: ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(156, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Generar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 448);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	 ArrayList^ Array;
	 Hashtable^ Tabla;
	int tamano;

	System::Void Mostrar() {
		String^ valores = "";
		for each (int num in Array)
		{
			valores = valores + num + " ";
		}
		textBox2->Text = valores;
	}
	System::Void generarNumeros(int tamano) {
		Array = gcnew ArrayList(tamano);
		Random^ random = gcnew Random();
		for (int i = 0; i < tamano; i++) {
			Array->Add(random->Next(0, 100));
		}
	}
	System::Void llenarTabla(int tamano) {
		Tabla= gcnew Hashtable(tamano * 2);
		int key = 0;
		for each (int num in Array) {
			key = num % tamano * 2;
			while (Tabla[key] != nullptr) {
				key++;
			}
			Tabla->Add(key, num);
		}
	}
	System::Int16 Hash(int valor, int tamano) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		bool encontrado = false;
		int pos = valor % (tamano * 2);
		if (System::Convert::ToInt16(Tabla[pos]) == valor) {
			encontrado = true;
			return pos;
		}
		else {
			encontrado = false;
		}
		if (encontrado = true) {
			textBox4->Text = "Se encuentra en: " + pos;
		}
		else {
			textBox4->Text = "No está en el arreglo";
			return pos;
		}
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo:" + System::Convert::ToString(Timer->Elapsed));
	};
	System::Int16 Binaria(ArrayList^ Array, int valor, int tamano) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int primero = 0;
		int medio;
		int ultimo = tamano - 1;
		while (primero <= ultimo)
		{
			medio = (primero + ultimo) / 2;

			if (valor == System::Convert::ToInt16(Array[medio]))
			{
				return medio + 1;
			}
			else {
				if (System::Convert::ToInt16(Array[medio]) > valor)
				{
					ultimo = medio - 1;
				}
				else {
					primero = medio + 1;
				}
			}
		}
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo: " + System::Convert::ToString(Timer->Elapsed));
		return -1;
	}
	System::Int16 Secuencial(ArrayList^ Array, int valor, int tamano) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int pos = 0;
		bool encontrado = false;
		for (int i = 0; i < tamano; i++) {
			if (valor == System::Convert::ToInt16(Array[i])) {
				pos = i+1;
				textBox4->Text = "Está en la posición " + pos;
				encontrado = true;
			}
		}
		if (encontrado == false) {
			textBox4->Text = "No existe en el arreglo";
		}
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo: " + System::Convert::ToString(Timer->Elapsed));
		return tamano;

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int cantidad = System::Convert::ToInt16(textBox1->Text);
		generarNumeros(cantidad);
		Mostrar();
		llenarTabla(cantidad);
		tamano = cantidad;
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int valor = System::Convert::ToInt16(textBox3->Text);
	Hash(valor, tamano);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int valor = System::Convert::ToInt16(textBox3->Text);
	int PosBin = Binaria(Array, valor, tamano);
	textBox4->Text = ("Está en la posición: " + PosBin.ToString());
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int valor = System::Convert::ToInt16(textBox3->Text);
	Secuencial(Array, valor, tamano);
}
};
}
