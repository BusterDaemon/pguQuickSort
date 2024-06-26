#pragma once

namespace quickSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::OpenFileDialog^ openDataFile;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ filePath;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ selectFile;
	private: System::Windows::Forms::GroupBox^ summary;
	private: System::Windows::Forms::Label^ elemSum;
	private: System::Windows::Forms::Label^ cmpSum;
	private: System::Windows::Forms::Label^ swpSum;
	private: System::Windows::Forms::Label^ timeSum;
	private: System::Windows::Forms::NumericUpDown^ dataQua;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataQua = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->selectFile = (gcnew System::Windows::Forms::Button());
			this->filePath = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->summary = (gcnew System::Windows::Forms::GroupBox());
			this->timeSum = (gcnew System::Windows::Forms::Label());
			this->swpSum = (gcnew System::Windows::Forms::Label());
			this->cmpSum = (gcnew System::Windows::Forms::Label());
			this->elemSum = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openDataFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataQua))->BeginInit();
			this->panel1->SuspendLayout();
			this->summary->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->summary, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(849, 384);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dataQua);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(418, 186);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Location = System::Drawing::Point(3, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(275, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество случайных элементов:";
			// 
			// dataQua
			// 
			this->dataQua->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataQua->Location = System::Drawing::Point(295, 70);
			this->dataQua->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->dataQua->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->dataQua->Name = L"dataQua";
			this->dataQua->Size = System::Drawing::Size(120, 26);
			this->dataQua->TabIndex = 2;
			this->dataQua->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Dock = System::Windows::Forms::DockStyle::Top;
			this->radioButton2->Location = System::Drawing::Point(3, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(412, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Использовать свои";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Dock = System::Windows::Forms::DockStyle::Top;
			this->radioButton1->Location = System::Drawing::Point(3, 22);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(412, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Генерировать случайные";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->selectFile);
			this->panel1->Controls->Add(this->filePath);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 195);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 186);
			this->panel1->TabIndex = 1;
			// 
			// selectFile
			// 
			this->selectFile->AutoSize = true;
			this->selectFile->Dock = System::Windows::Forms::DockStyle::Top;
			this->selectFile->Enabled = false;
			this->selectFile->Location = System::Drawing::Point(0, 46);
			this->selectFile->Name = L"selectFile";
			this->selectFile->Size = System::Drawing::Size(418, 30);
			this->selectFile->TabIndex = 2;
			this->selectFile->Text = L"Выбрать файл";
			this->selectFile->UseVisualStyleBackColor = true;
			this->selectFile->Click += gcnew System::EventHandler(this, &MainForm::selectFile_Click);
			// 
			// filePath
			// 
			this->filePath->Dock = System::Windows::Forms::DockStyle::Top;
			this->filePath->Enabled = false;
			this->filePath->Location = System::Drawing::Point(0, 20);
			this->filePath->Name = L"filePath";
			this->filePath->Size = System::Drawing::Size(418, 26);
			this->filePath->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Путь до файла с данными:";
			// 
			// summary
			// 
			this->summary->Controls->Add(this->timeSum);
			this->summary->Controls->Add(this->swpSum);
			this->summary->Controls->Add(this->cmpSum);
			this->summary->Controls->Add(this->elemSum);
			this->summary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->summary->Location = System::Drawing::Point(427, 3);
			this->summary->Name = L"summary";
			this->summary->Size = System::Drawing::Size(419, 186);
			this->summary->TabIndex = 2;
			this->summary->TabStop = false;
			this->summary->Text = L"Итоги:";
			// 
			// timeSum
			// 
			this->timeSum->AutoSize = true;
			this->timeSum->Dock = System::Windows::Forms::DockStyle::Top;
			this->timeSum->Location = System::Drawing::Point(3, 82);
			this->timeSum->Name = L"timeSum";
			this->timeSum->Size = System::Drawing::Size(165, 20);
			this->timeSum->TabIndex = 3;
			this->timeSum->Text = L"Затрачено времени:";
			// 
			// swpSum
			// 
			this->swpSum->AutoSize = true;
			this->swpSum->Dock = System::Windows::Forms::DockStyle::Top;
			this->swpSum->Location = System::Drawing::Point(3, 62);
			this->swpSum->Name = L"swpSum";
			this->swpSum->Size = System::Drawing::Size(214, 20);
			this->swpSum->TabIndex = 2;
			this->swpSum->Text = L"Количество перестановок:";
			// 
			// cmpSum
			// 
			this->cmpSum->AutoSize = true;
			this->cmpSum->Dock = System::Windows::Forms::DockStyle::Top;
			this->cmpSum->Location = System::Drawing::Point(3, 42);
			this->cmpSum->Name = L"cmpSum";
			this->cmpSum->Size = System::Drawing::Size(188, 20);
			this->cmpSum->TabIndex = 1;
			this->cmpSum->Text = L"Количество сравнений:";
			// 
			// elemSum
			// 
			this->elemSum->AutoSize = true;
			this->elemSum->Dock = System::Windows::Forms::DockStyle::Top;
			this->elemSum->Location = System::Drawing::Point(3, 22);
			this->elemSum->Name = L"elemSum";
			this->elemSum->Size = System::Drawing::Size(192, 20);
			this->elemSum->TabIndex = 0;
			this->elemSum->Text = L"Количество элементов:";
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(427, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(419, 186);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ЗАПУСК";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// openDataFile
			// 
			this->openDataFile->FileName = L"openDataFile";
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 384);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataQua))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->summary->ResumeLayout(false);
			this->summary->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			filePath->Enabled = false;
			selectFile->Enabled = false;
		}
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) {
		filePath->Enabled = true;
		selectFile->Enabled = true;
	}
}
private: System::Void selectFile_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openDataFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		filePath->Text = openDataFile->FileName;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked && filePath->Text == "") {
		MessageBox::Show("Укажите файл с данными!", "ОШИБКА");
	}
}
};
}
