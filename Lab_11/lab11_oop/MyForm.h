#include <iostream>
#include <vector>
#pragma once

namespace lab11oop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::Panel^ panelControl;
	protected:



	private: System::Windows::Forms::Label^ lColumns;

	private: System::Windows::Forms::Label^ lRows;

	private: System::Windows::Forms::TextBox^ tBRows;

	private: System::Windows::Forms::Button^ buttonFill;
	private: System::Windows::Forms::TextBox^ tBColumns;
	private: System::Windows::Forms::Label^ labI;



	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Label^ lValue;


	private: System::Windows::Forms::TextBox^ tBJ;

	private: System::Windows::Forms::TextBox^ tBI;

	private: System::Windows::Forms::Label^ labJ;
	private: System::Windows::Forms::Label^ lNewValue;


	private: System::Windows::Forms::Button^ buttonGet;

	private: System::Windows::Forms::Button^ buttonSet;
	private: System::Windows::Forms::TextBox^ tBNewValue;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fIleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panelDisplay;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

	public: 
		bool cleanRows = true;
		bool cleanColumns = true;
		bool cleanI = true;
		bool cleanJ = true;
		bool cleanNewVal = true;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		 ;
		array<array<System::Windows::Forms::Label^>^>^ labelArray;
		int n, m;
		int** arr;
		int iVal, jVal;
		int newVal;
	private: System::Windows::Forms::Label^ lVal;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelControl = (gcnew System::Windows::Forms::Panel());
			this->lVal = (gcnew System::Windows::Forms::Label());
			this->buttonGet = (gcnew System::Windows::Forms::Button());
			this->buttonSet = (gcnew System::Windows::Forms::Button());
			this->tBNewValue = (gcnew System::Windows::Forms::TextBox());
			this->lNewValue = (gcnew System::Windows::Forms::Label());
			this->lValue = (gcnew System::Windows::Forms::Label());
			this->tBJ = (gcnew System::Windows::Forms::TextBox());
			this->tBI = (gcnew System::Windows::Forms::TextBox());
			this->labJ = (gcnew System::Windows::Forms::Label());
			this->labI = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonFill = (gcnew System::Windows::Forms::Button());
			this->tBColumns = (gcnew System::Windows::Forms::TextBox());
			this->tBRows = (gcnew System::Windows::Forms::TextBox());
			this->lColumns = (gcnew System::Windows::Forms::Label());
			this->lRows = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fIleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelDisplay = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelControl->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panelDisplay->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelControl
			// 
			this->panelControl->Controls->Add(this->lVal);
			this->panelControl->Controls->Add(this->buttonGet);
			this->panelControl->Controls->Add(this->buttonSet);
			this->panelControl->Controls->Add(this->tBNewValue);
			this->panelControl->Controls->Add(this->lNewValue);
			this->panelControl->Controls->Add(this->lValue);
			this->panelControl->Controls->Add(this->tBJ);
			this->panelControl->Controls->Add(this->tBI);
			this->panelControl->Controls->Add(this->labJ);
			this->panelControl->Controls->Add(this->labI);
			this->panelControl->Controls->Add(this->buttonClear);
			this->panelControl->Controls->Add(this->buttonFill);
			this->panelControl->Controls->Add(this->tBColumns);
			this->panelControl->Controls->Add(this->tBRows);
			this->panelControl->Controls->Add(this->lColumns);
			this->panelControl->Controls->Add(this->lRows);
			this->panelControl->Location = System::Drawing::Point(571, 36);
			this->panelControl->Name = L"panelControl";
			this->panelControl->Size = System::Drawing::Size(345, 598);
			this->panelControl->TabIndex = 2;
			// 
			// lVal
			// 
			this->lVal->AutoSize = true;
			this->lVal->Location = System::Drawing::Point(153, 245);
			this->lVal->Name = L"lVal";
			this->lVal->Size = System::Drawing::Size(18, 20);
			this->lVal->TabIndex = 16;
			this->lVal->Text = L"_";
			// 
			// buttonGet
			// 
			this->buttonGet->BackColor = System::Drawing::SystemColors::Control;
			this->buttonGet->Location = System::Drawing::Point(184, 334);
			this->buttonGet->Name = L"buttonGet";
			this->buttonGet->Size = System::Drawing::Size(115, 41);
			this->buttonGet->TabIndex = 15;
			this->buttonGet->Text = L"Get value";
			this->buttonGet->UseVisualStyleBackColor = false;
			this->buttonGet->Click += gcnew System::EventHandler(this, &MyForm::buttonGet_Click);
			// 
			// buttonSet
			// 
			this->buttonSet->BackColor = System::Drawing::SystemColors::Control;
			this->buttonSet->Location = System::Drawing::Point(56, 334);
			this->buttonSet->Name = L"buttonSet";
			this->buttonSet->Size = System::Drawing::Size(115, 41);
			this->buttonSet->TabIndex = 14;
			this->buttonSet->Text = L"Set value";
			this->buttonSet->UseVisualStyleBackColor = false;
			this->buttonSet->Click += gcnew System::EventHandler(this, &MyForm::buttonSet_Click);
			// 
			// tBNewValue
			// 
			this->tBNewValue->Location = System::Drawing::Point(131, 282);
			this->tBNewValue->Name = L"tBNewValue";
			this->tBNewValue->Size = System::Drawing::Size(71, 26);
			this->tBNewValue->TabIndex = 12;
			this->tBNewValue->TextChanged += gcnew System::EventHandler(this, &MyForm::tBNewValue_TextChanged);
			// 
			// lNewValue
			// 
			this->lNewValue->AutoSize = true;
			this->lNewValue->Location = System::Drawing::Point(30, 285);
			this->lNewValue->Name = L"lNewValue";
			this->lNewValue->Size = System::Drawing::Size(79, 20);
			this->lNewValue->TabIndex = 11;
			this->lNewValue->Text = L"new value";
			// 
			// lValue
			// 
			this->lValue->AutoSize = true;
			this->lValue->Location = System::Drawing::Point(30, 245);
			this->lValue->Name = L"lValue";
			this->lValue->Size = System::Drawing::Size(61, 20);
			this->lValue->TabIndex = 10;
			this->lValue->Text = L"value is";
			// 
			// tBJ
			// 
			this->tBJ->Location = System::Drawing::Point(162, 186);
			this->tBJ->Name = L"tBJ";
			this->tBJ->Size = System::Drawing::Size(45, 26);
			this->tBJ->TabIndex = 9;
			this->tBJ->TextChanged += gcnew System::EventHandler(this, &MyForm::tBJ_TextChanged);
			// 
			// tBI
			// 
			this->tBI->Location = System::Drawing::Point(63, 186);
			this->tBI->Name = L"tBI";
			this->tBI->Size = System::Drawing::Size(45, 26);
			this->tBI->TabIndex = 8;
			this->tBI->TextChanged += gcnew System::EventHandler(this, &MyForm::tBI_TextChanged);
			// 
			// labJ
			// 
			this->labJ->AutoSize = true;
			this->labJ->Location = System::Drawing::Point(127, 192);
			this->labJ->Name = L"labJ";
			this->labJ->Size = System::Drawing::Size(29, 20);
			this->labJ->TabIndex = 7;
			this->labJ->Text = L"j = ";
			// 
			// labI
			// 
			this->labI->AutoSize = true;
			this->labI->Location = System::Drawing::Point(30, 192);
			this->labI->Name = L"labI";
			this->labI->Size = System::Drawing::Size(29, 20);
			this->labI->TabIndex = 6;
			this->labI->Text = L"i = ";
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::SystemColors::Control;
			this->buttonClear->Location = System::Drawing::Point(177, 118);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(122, 38);
			this->buttonClear->TabIndex = 5;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonFill
			// 
			this->buttonFill->BackColor = System::Drawing::SystemColors::Control;
			this->buttonFill->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonFill->Location = System::Drawing::Point(34, 118);
			this->buttonFill->Name = L"buttonFill";
			this->buttonFill->Size = System::Drawing::Size(122, 39);
			this->buttonFill->TabIndex = 4;
			this->buttonFill->Text = L"Fill";
			this->buttonFill->UseVisualStyleBackColor = false;
			this->buttonFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// tBColumns
			// 
			this->tBColumns->Location = System::Drawing::Point(177, 67);
			this->tBColumns->Name = L"tBColumns";
			this->tBColumns->Size = System::Drawing::Size(122, 26);
			this->tBColumns->TabIndex = 3;
			this->tBColumns->TextChanged += gcnew System::EventHandler(this, &MyForm::tBColumns_TextChanged);
			// 
			// tBRows
			// 
			this->tBRows->ForeColor = System::Drawing::Color::Black;
			this->tBRows->Location = System::Drawing::Point(34, 67);
			this->tBRows->Name = L"tBRows";
			this->tBRows->Size = System::Drawing::Size(122, 26);
			this->tBRows->TabIndex = 2;
			this->tBRows->TextChanged += gcnew System::EventHandler(this, &MyForm::tBRows_TextChanged);
			// 
			// lColumns
			// 
			this->lColumns->AutoSize = true;
			this->lColumns->Location = System::Drawing::Point(203, 44);
			this->lColumns->Name = L"lColumns";
			this->lColumns->Size = System::Drawing::Size(71, 20);
			this->lColumns->TabIndex = 1;
			this->lColumns->Text = L"Columns";
			// 
			// lRows
			// 
			this->lRows->AutoSize = true;
			this->lRows->Location = System::Drawing::Point(69, 44);
			this->lRows->Name = L"lRows";
			this->lRows->Size = System::Drawing::Size(49, 20);
			this->lRows->TabIndex = 0;
			this->lRows->Text = L"Rows";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fIleToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(928, 33);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fIleToolStripMenuItem
			// 
			this->fIleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fIleToolStripMenuItem->Name = L"fIleToolStripMenuItem";
			this->fIleToolStripMenuItem->Size = System::Drawing::Size(55, 29);
			this->fIleToolStripMenuItem->Text = L"FIle";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(262, 34);
			this->readToolStripMenuItem->Text = L"Read         Ctrl + R";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(262, 34);
			this->writeToolStripMenuItem->Text = L"Write        Ctrl + W";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(262, 34);
			this->exitToolStripMenuItem->Text = L"Exit           Alt + F4";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
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
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// panelDisplay
			// 
			this->panelDisplay->Controls->Add(this->tableLayoutPanel1);
			this->panelDisplay->Location = System::Drawing::Point(12, 36);
			this->panelDisplay->Name = L"panelDisplay";
			this->panelDisplay->Size = System::Drawing::Size(553, 598);
			this->panelDisplay->TabIndex = 4;
			this->panelDisplay->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelDisplay_Paint);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(39, 83);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 0)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(450, 450);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 646);
			this->Controls->Add(this->panelDisplay);
			this->Controls->Add(this->panelControl);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->panelControl->ResumeLayout(false);
			this->panelControl->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panelDisplay->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->KeyPreview = true;
	/*MessageBox::Show("Hello!", "MyForm");
	return;*/
}

private: System::Void tBRows_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cleanRows = false;
}
private: System::Void tBColumns_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cleanColumns = false;
}
private: System::Void buttonFill_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanRows == false && cleanColumns == false) {
		tableLayoutPanel1->Controls->Clear();
		m = Convert::ToInt64(tBRows->Text);
		n = Convert::ToInt64(tBColumns->Text);
		if (m>10 || n>10) {
			MessageBox::Show("Value too long!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		arr = new int* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[m];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i+j < m) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = 0;
				}
			}
		}
		tableLayoutPanel1->ColumnCount = n;
		tableLayoutPanel1->RowCount = m;
		this->labelArray = gcnew array<array<System::Windows::Forms::Label^>^>(n);
		for (int i = 0; i < n; i++) {
			this->labelArray[i] = gcnew array<Label^>(m);
			for (int j = 0; j < m; j++) {
				this->labelArray[i][j] = (gcnew System::Windows::Forms::Label());
				this->labelArray[i][j]->Name = L"label1";
				this->labelArray[i][j]->Location = System::Drawing::Point(3, 0);
				this->labelArray[i][j]->AutoSize = false;
				this->labelArray[i][j]->Size = System::Drawing::Size(25, 25);
				this->labelArray[i][j]->Text = L"" + arr[i][j];
				//std::cout << "i: " << i << "j: "<< j << std::endl;
				tableLayoutPanel1->Controls->Add(labelArray[i][j], i, j);
			}
		}
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tBRows->Text = "";
	tBColumns->Text = "";
	cleanRows = true;
	cleanColumns = true;
	tBI->Text = "";
	tBJ->Text = "";
	cleanI = true;
	cleanJ = true;
	tableLayoutPanel1->Controls->Clear();
}
private: System::Void tBI_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cleanI = false;
}
private: System::Void tBJ_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cleanJ = false;
}
private: System::Void tBNewValue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cleanNewVal = false;
}
private: System::Void buttonSet_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanNewVal == false) {
		if ((cleanI != false || cleanJ != false)||(cleanRows != false || cleanColumns!= false)) {
			MessageBox::Show("Didn't insert i, j values!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		newVal = Convert::ToInt64(tBNewValue->Text);
		arr[iVal][jVal] = newVal;
		this->labelArray[iVal][jVal]->Text = L"" + newVal;
		cleanNewVal = false;
		tBNewValue->Text = "";
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void buttonGet_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanI == false && cleanJ == false) {
		iVal = Convert::ToInt64(tBI->Text);
		jVal = Convert::ToInt64(tBJ->Text);
		if ((iVal > n-1 || iVal < 0) || (jVal > m - 1 || jVal < 0)) {
			MessageBox::Show("Inserted value is incorect!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			tBI->Text = "";
			tBJ->Text = "";
			cleanI = true;
			cleanJ = true;
			return;
		}
		lVal->Text = L"" + arr[iVal][jVal];
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panelDisplay_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanRows == false && cleanColumns == false) {
		tableLayoutPanel1->Controls->Clear();
		m = Convert::ToInt64(tBRows->Text);
		n = Convert::ToInt64(tBColumns->Text);
		if (m > 10 || n > 10) {
			MessageBox::Show("Value too long!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		arr = new int* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[m];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i + j < m) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = 0;
				}
			}
		}
		tableLayoutPanel1->ColumnCount = n;
		tableLayoutPanel1->RowCount = m;
		this->labelArray = gcnew array<array<System::Windows::Forms::Label^>^>(n);
		for (int i = 0; i < n; i++) {
			this->labelArray[i] = gcnew array<Label^>(m);
			for (int j = 0; j < m; j++) {
				this->labelArray[i][j] = (gcnew System::Windows::Forms::Label());
				this->labelArray[i][j]->Name = L"label1";
				this->labelArray[i][j]->Location = System::Drawing::Point(3, 0);
				this->labelArray[i][j]->AutoSize = false;
				this->labelArray[i][j]->Size = System::Drawing::Size(25, 25);
				this->labelArray[i][j]->Text = L"" + arr[i][j];
				//std::cout << "i: " << i << "j: "<< j << std::endl;
				tableLayoutPanel1->Controls->Add(labelArray[i][j], i, j);
			}
		}
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanI == false && cleanJ == false) {
		iVal = Convert::ToInt64(tBI->Text);
		jVal = Convert::ToInt64(tBJ->Text);
		if ((iVal > n - 1 || iVal < 0) || (jVal > m - 1 || jVal < 0)) {
			MessageBox::Show("Inserted value is incorect!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			tBI->Text = "";
			tBJ->Text = "";
			cleanI = true;
			cleanJ = true;
			return;
		}
		lVal->Text = L"" + arr[iVal][jVal];
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cleanNewVal == false) {
		if ((cleanI != false || cleanJ != false) || (cleanRows != false || cleanColumns != false)) {
			MessageBox::Show("Didn't insert i, j values!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		newVal = Convert::ToInt64(tBNewValue->Text);
		arr[iVal][jVal] = newVal;
		this->labelArray[iVal][jVal]->Text = L"" + newVal;
		cleanNewVal = false;
		tBNewValue->Text = "";
	}
	else {
		MessageBox::Show("No value inserted!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
}
private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	tBRows->Text = "";
	tBColumns->Text = "";
	cleanRows = true;
	cleanColumns = true;
	tBI->Text = "";
	tBJ->Text = "";
	cleanI = true;
	cleanJ = true;
	tableLayoutPanel1->Controls->Clear();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you realy want close the program?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		return;
	}
}
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter= "txt files (*.txt) | *.txt";
	openFileDialog->FilterIndex = 2;
	openFileDialog->RestoreDirectory = true;

	String^ filePath;
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		filePath = openFileDialog->FileName;
	}
	char* charName = (char*)(Marshal::StringToHGlobalAnsi(filePath)).ToPointer();
	//std::cout << charName;

	FILE* ReadFile = fopen(charName, "r");
	fscanf(ReadFile, "%i", &n);
	tBRows->Text = " " + n;
	fscanf(ReadFile, "%i", &m);
	tBColumns->Text = " " + m;

	if (m > 10 || n > 10) {
		MessageBox::Show("Value too long!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		fclose(ReadFile);
		return;
	}
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf(ReadFile, "%i", &arr[i][j]);
		}
	}

	tableLayoutPanel1->ColumnCount = n;
	tableLayoutPanel1->RowCount = m;
	this->labelArray = gcnew array<array<System::Windows::Forms::Label^>^>(n);
	for (int i = 0; i < n; i++) {
		this->labelArray[i] = gcnew array<Label^>(m);
		for (int j = 0; j < m; j++) {
			this->labelArray[i][j] = (gcnew System::Windows::Forms::Label());
			this->labelArray[i][j]->Name = L"label1";
			this->labelArray[i][j]->Location = System::Drawing::Point(3, 0);
			this->labelArray[i][j]->AutoSize = false;
			this->labelArray[i][j]->Size = System::Drawing::Size(25, 25);
			this->labelArray[i][j]->Text = L"" + arr[i][j];
			//std::cout << "i: " << i << "j: "<< j << std::endl;
			tableLayoutPanel1->Controls->Add(labelArray[i][j], i, j);
		}
	}
	fclose(ReadFile);
}
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "txt files (*.txt) | *.txt";
	openFileDialog->FilterIndex = 2;
	openFileDialog->RestoreDirectory = true;

	String^ filePath;
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		filePath = openFileDialog->FileName;
	}
	char* charName = (char*)(Marshal::StringToHGlobalAnsi(filePath)).ToPointer();
	//std::cout << charName;
	
	FILE* WriteFile = fopen(charName, "w");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf(WriteFile, "%i ", arr[j][i]);
		}
		fprintf(WriteFile, "\n");
	}
	fclose(WriteFile);
	MessageBox::Show("Result writed in file!", "MyForm", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->Control && e->KeyCode == Keys::R) {
		//e->readToolStripMenuItem = true;
		readToolStripMenuItem_Click(sender, e);
	}
	if (e->Control && e->KeyCode == Keys::W) {
		//e->readToolStripMenuItem = true;
		writeToolStripMenuItem_Click(sender, e);
	}
	if (e->Alt && e->KeyCode == Keys::F4) {
		//e->readToolStripMenuItem = true;
		exitToolStripMenuItem_Click(sender, e);
	}
}
};
}