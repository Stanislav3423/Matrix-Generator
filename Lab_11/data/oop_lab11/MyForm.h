#pragma once
#include<iostream>;
namespace ooplab11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;







	protected:

	private:
		array<System::Windows::Forms::Label^>^ LabelArr;
		int** arr;
		int n;
		int m;
		bool clean = true;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(777, 181);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Fill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(777, 114);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(926, 114);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(84, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(774, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Colums";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(922, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Rows";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(926, 181);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(774, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"i = ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(807, 285);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 26);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(926, 285);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(42, 26);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(893, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"j = ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(863, 376);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(133, 26);
			this->textBox5->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(772, 429);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 44);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Get value";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(912, 429);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 44);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Set value";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(774, 380);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"New value";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label6->Location = System::Drawing::Point(292, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 58);
			this->label6->TabIndex = 17;
			this->label6->Text = L" ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(774, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Value";
			// 
			// textBox6
			// 
			this->textBox6->CausesValidation = false;
			this->textBox6->Location = System::Drawing::Point(863, 332);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(133, 26);
			this->textBox6->TabIndex = 19;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(78, 52);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(506, 562);
			this->tableLayoutPanel1->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(774, 521);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L" ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1174, 33);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(51, 29);
			this->fileToolStripMenuItem->Text = L"file";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(156, 34);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(156, 34);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(68, 29);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(187, 34);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fillToolStripMenuItem_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(187, 34);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::getValueToolStripMenuItem_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(187, 34);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setValueToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(187, 34);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1174, 681);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"Array";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (clean) {
			n = Convert::ToInt64(textBox1->Text);
			m = Convert::ToInt64(textBox2->Text);
			arr = new int* [n];
			for (int i = 0; i < n; i++) {
				arr[i] = new int[m];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (i >= j) {
						arr[i][j] = 1;
					}
					else {
						arr[i][j] = 0;
					}
				}
			}
			tableLayoutPanel1->ColumnCount = n;
			tableLayoutPanel1->RowCount = m;
			this->LabelArr = gcnew array<System::Windows::Forms::Label^>(n * m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					this->LabelArr[i * n + j] = (gcnew System::Windows::Forms::Label());
					this->LabelArr[i * n + j]->AutoSize = false;
					this->LabelArr[i * n + j]->Location = System::Drawing::Point(3, 0);
					this->LabelArr[i * n + j]->Name = L"label1";
					this->LabelArr[i * n + j]->Size = System::Drawing::Size(60, 60);
					this->LabelArr[i * n + j]->TabIndex = 0;
					this->LabelArr[i * n + j]->Text = L"" + arr[i][j];
					tableLayoutPanel1->Controls->Add(LabelArr[i * n + j], i, j);
				}
			}
			label8->Text = "";
			clean = false;
		}
		else {
			label8->Text = "Error";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		clean = true;
		tableLayoutPanel1->Controls->Clear();
		label8->Text = "";
	}
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt64(textBox3->Text);
		int j = Convert::ToInt64(textBox4->Text);
		if (i >= n || j >= m) {
			label8->Text = "Error";
		}
		else {
			label8->Text = "";
			textBox6->Text = arr[i][j] + "";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
		int i = Convert::ToInt64(textBox3->Text);
		int j = Convert::ToInt64(textBox4->Text);
		if (i >= n || j >=m) {
			label8->Text = "Error";
		}
		else{
			label8->Text = "";
			int k = Convert::ToInt64(textBox5->Text);
			arr[i][j] = k;
			this->LabelArr = gcnew array<System::Windows::Forms::Label^>(n * m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					this->LabelArr[i * n + j] = (gcnew System::Windows::Forms::Label());
					this->LabelArr[i * n + j]->AutoSize = false;
					this->LabelArr[i * n + j]->Location = System::Drawing::Point(3, 0);
					this->LabelArr[i * n + j]->Name = L"label1";
					this->LabelArr[i * n + j]->Size = System::Drawing::Size(60, 60);
					this->LabelArr[i * n + j]->TabIndex = 0;
					this->LabelArr[i * n + j]->Text = L"" + arr[i][j];
					tableLayoutPanel1->Controls->Add(LabelArr[i * n + j], i, j);
				}
			}
		}
	}
	private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* file = fopen("Data.txt", "r");
		int a;
		fscanf(file, "%d", &a);
		textBox1->Text = " "+a;
		fscanf(file, "%d", &a);
		textBox2->Text = " " + a;
		fclose(file);
	}
	private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* file = fopen("Answer.txt", "w");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				fprintf(file, "%d ", arr[j][i]);
			}
			fprintf(file, "\n");
		}
		fclose(file);
	}
	private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (clean) {
			n = Convert::ToInt64(textBox1->Text);
			m = Convert::ToInt64(textBox2->Text);
			arr = new int* [n];
			for (int i = 0; i < n; i++) {
				arr[i] = new int[m];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (i >= j) {
						arr[i][j] = 1;
					}
					else {
						arr[i][j] = 0;
					}
				}
			}
			tableLayoutPanel1->ColumnCount = n;
			tableLayoutPanel1->RowCount = m;
			this->LabelArr = gcnew array<System::Windows::Forms::Label^>(n * m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					this->LabelArr[i * n + j] = (gcnew System::Windows::Forms::Label());
					this->LabelArr[i * n + j]->AutoSize = false;
					this->LabelArr[i * n + j]->Location = System::Drawing::Point(3, 0);
					this->LabelArr[i * n + j]->Name = L"label1";
					this->LabelArr[i * n + j]->Size = System::Drawing::Size(60, 60);
					this->LabelArr[i * n + j]->TabIndex = 0;
					this->LabelArr[i * n + j]->Text = L"" + arr[i][j];
					tableLayoutPanel1->Controls->Add(LabelArr[i * n + j], i, j);
				}
			}
			label8->Text = "";
			clean = false;
		}
		else {
			label8->Text = "Error";
		}
	}

	private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt64(textBox3->Text);
		int j = Convert::ToInt64(textBox4->Text);
		if (i >= n || j >= m) {
			label8->Text = "Error";
		}
		else {
			label8->Text = "";
			textBox6->Text = arr[i][j] + "";
		}
	}

	private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
		int i = Convert::ToInt64(textBox3->Text);
		int j = Convert::ToInt64(textBox4->Text);
		if (i >= n || j >= m) {
			label8->Text = "Error";
		}
		else {
			label8->Text = "";
			int k = Convert::ToInt64(textBox5->Text);
			arr[i][j] = k;
			this->LabelArr = gcnew array<System::Windows::Forms::Label^>(n * m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					this->LabelArr[i * n + j] = (gcnew System::Windows::Forms::Label());
					this->LabelArr[i * n + j]->AutoSize = false;
					this->LabelArr[i * n + j]->Location = System::Drawing::Point(3, 0);
					this->LabelArr[i * n + j]->Name = L"label1";
					this->LabelArr[i * n + j]->Size = System::Drawing::Size(60, 60);
					this->LabelArr[i * n + j]->TabIndex = 0;
					this->LabelArr[i * n + j]->Text = L"" + arr[i][j];
					tableLayoutPanel1->Controls->Add(LabelArr[i * n + j], i, j);
				}
			}
		}
	}

	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		clean = true;
		tableLayoutPanel1->Controls->Clear();
		label8->Text = "";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}










};
}
