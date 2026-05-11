#pragma once

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace Controller;
	/// <summary>
	/// Summary for registros
	/// </summary>
	public ref class registros : public System::Windows::Forms::Form
	{
	public:
		registros(void)
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
		~registros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(293, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(446, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 38);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(827, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &registros::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->id, this->Nombre,
					this->Precio
			});
			this->dataGridView1->Location = System::Drawing::Point(104, 340);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 30;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(918, 366);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &registros::dataGridView1_CellClick);
			this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &registros::dataGridView1_CellEnter);
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->MinimumWidth = 12;
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->id->Width = 20;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 12;
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Nombre->Width = 50;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 12;
			this->Precio->Name = L"Precio";
			this->Precio->ReadOnly = true;
			this->Precio->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Precio->Width = 50;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(446, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 38);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 32);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Precio";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(827, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &registros::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(827, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 52);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &registros::button3_Click);
			// 
			// registros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1175, 742);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"registros";
			this->Text = L"registros";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			controller::Initialize();
			this->update_grid_view();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		BrazoRobotico^ brazo = gcnew BrazoRobotico();
		int numeroDeColumnas = dataGridView1->RowCount;
		brazo->id = numeroDeColumnas + 1;
		brazo->nombre = textBox1->Text;
		brazo->precio = Convert::ToDouble(textBox2->Text);
		textBox1->Text = "";
		textBox2->Text = "";
		controller::agregarBrazo(brazo);
		update_grid_view();
	}

	private: System::Void update_grid_view() {
		dataGridView1->Rows->Clear();
		for(int i = 0; i < controller::brazosRoboticos->Count; i++) {
			BrazoRobotico^ brazo = controller::brazosRoboticos[i];
			dataGridView1->Rows->Add(brazo->id, brazo->nombre, brazo->precio);
		}
	}




	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			controller::brazoSeleccionado->id = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["id"]->Value);
			DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
			textBox1->Text = row->Cells["Nombre"]->Value->ToString();
			textBox2->Text = row->Cells["Precio"]->Value->ToString();
		}
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		controller::eliminarBrazo(controller::brazoSeleccionado->id);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		BrazoRobotico^ brazo = gcnew BrazoRobotico();
		brazo->id = controller::brazoSeleccionado->id;
		brazo->nombre = textBox1->Text;
		brazo->precio = Convert::ToDouble(textBox2->Text);
		controller::actualizarBrazo(brazo);
		update_grid_view();
	}
private: System::Void dataGridView1_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		controller::brazoSeleccionado->id = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["id"]->Value);
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		textBox1->Text = row->Cells["Nombre"]->Value->ToString();
		textBox2->Text = row->Cells["Precio"]->Value->ToString();
	}
	else {
		textBox1->Text = "";
		textBox2->Text = "";
	}
}
};
}
