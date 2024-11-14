#pragma once
#include <iostream>
#include <string>

namespace L2Help {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AACalc
	/// </summary>
	public ref class AACalc : public System::Windows::Forms::Form
	{
	public:
		AACalc(void)
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
		~AACalc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;






	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	public:

		int Red;
		int Green;
		int Blue;
		float SellPrise;

	private: System::Windows::Forms::Label^ Adena;
	public:

	private: System::Windows::Forms::MaskedTextBox^ RedMBox;
	private: System::Windows::Forms::MaskedTextBox^ GreenMBox;
	private: System::Windows::Forms::MaskedTextBox^ BlueMBox;
	private: System::Windows::Forms::MaskedTextBox^ SellMBox;
	private: System::Windows::Forms::Label^ RedSt;
	private: System::Windows::Forms::Label^ GreenST;
	private: System::Windows::Forms::Label^ BlueST;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::MaskedTextBox^ AACaunt;





	private: System::Windows::Forms::Label^ label2;
		   

		

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AACalc::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Adena = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RedMBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->GreenMBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->BlueMBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SellMBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->RedSt = (gcnew System::Windows::Forms::Label());
			this->GreenST = (gcnew System::Windows::Forms::Label());
			this->BlueST = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->AACaunt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			resources->ApplyResources(this->imageList1, L"imageList1");
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// panel4
			// 
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// panel5
			// 
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Name = L"label1";
			// 
			// Adena
			// 
			resources->ApplyResources(this->Adena, L"Adena");
			this->Adena->BackColor = System::Drawing::Color::Transparent;
			this->Adena->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Adena->Name = L"Adena";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Name = L"label2";
			// 
			// RedMBox
			// 
			this->RedMBox->BackColor = System::Drawing::Color::DarkGray;
			this->RedMBox->BeepOnError = true;
			this->RedMBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->RedMBox, L"RedMBox");
			this->RedMBox->Name = L"RedMBox";
			this->RedMBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AACalc::RedMBox_KeyUp);
			// 
			// GreenMBox
			// 
			this->GreenMBox->BackColor = System::Drawing::Color::DarkGray;
			this->GreenMBox->BeepOnError = true;
			this->GreenMBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->GreenMBox, L"GreenMBox");
			this->GreenMBox->Name = L"GreenMBox";
			this->GreenMBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AACalc::GreenMBox_KeyUp);
			// 
			// BlueMBox
			// 
			this->BlueMBox->BackColor = System::Drawing::Color::DarkGray;
			this->BlueMBox->BeepOnError = true;
			this->BlueMBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->BlueMBox, L"BlueMBox");
			this->BlueMBox->Name = L"BlueMBox";
			this->BlueMBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AACalc::BlueMBox_KeyUp);
			// 
			// SellMBox
			// 
			this->SellMBox->BackColor = System::Drawing::Color::DarkGray;
			this->SellMBox->BeepOnError = true;
			this->SellMBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->SellMBox, L"SellMBox");
			this->SellMBox->Name = L"SellMBox";
			this->SellMBox->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AACalc::maskedTextBox1_KeyUp);
			// 
			// RedSt
			// 
			resources->ApplyResources(this->RedSt, L"RedSt");
			this->RedSt->BackColor = System::Drawing::Color::DarkGray;
			this->RedSt->Name = L"RedSt";
			// 
			// GreenST
			// 
			resources->ApplyResources(this->GreenST, L"GreenST");
			this->GreenST->BackColor = System::Drawing::Color::DarkGray;
			this->GreenST->Name = L"GreenST";
			// 
			// BlueST
			// 
			resources->ApplyResources(this->BlueST, L"BlueST");
			this->BlueST->BackColor = System::Drawing::Color::DarkGray;
			this->BlueST->Name = L"BlueST";
			// 
			// panel6
			// 
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// AACaunt
			// 
			this->AACaunt->BackColor = System::Drawing::Color::DarkGray;
			this->AACaunt->BeepOnError = true;
			this->AACaunt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->AACaunt, L"AACaunt");
			this->AACaunt->Name = L"AACaunt";
			this->AACaunt->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AACalc::AACaunt_KeyUp);
			// 
			// AACalc
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->AACaunt);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->BlueST);
			this->Controls->Add(this->GreenST);
			this->Controls->Add(this->RedSt);
			this->Controls->Add(this->SellMBox);
			this->Controls->Add(this->BlueMBox);
			this->Controls->Add(this->GreenMBox);
			this->Controls->Add(this->RedMBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Adena);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AACalc";
			this->Opacity = 0.6;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void CalcAA() {

			int Res = Red * 10 + Green * 5 + Blue * 3;

			this->label1->Text = Convert::ToString(Res);

			if (SellPrise != 0) {
				int Aden = Res * SellPrise;
				this->Adena->Text = Convert::ToString(Aden);
			}
			else
			{

			}
		}

private: System::Void RedMBox_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (this->RedMBox->Text->Length == 0) {
		Red = 0;
		CalcAA();
		return;
	}

	Red = Convert::ToInt64(this->RedMBox->Text);

	CalcAA();
}

private: System::Void GreenMBox_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (this->GreenMBox->Text->Length == 0) {
		Green = 0;
		CalcAA();
		return;
	}

	Green = Convert::ToInt64(this->GreenMBox->Text);
	CalcAA();
}
private: System::Void BlueMBox_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (this->BlueMBox->Text->Length == 0) {
		Blue = 0;
		CalcAA();
		return;
	}

	Blue = Convert::ToInt64(this->BlueMBox->Text);
	CalcAA();
}
private: System::Void maskedTextBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	
	if (this->SellMBox->Text->Length < 3) {

		std::cout << this->SellMBox->Text->Length << "\n";
		this->RedSt->Text = "0";
		this->GreenST->Text = "0";
		this->BlueST->Text = "0";
		SellPrise = 0;
		this->Adena->Text = "0";

		return;
	}
		
		SellPrise = Convert::ToDouble(this->SellMBox->Text);
		CalcAA();

		this->RedSt->Text = Convert::ToString(Convert::ToDouble(SellMBox->Text) * 10);
		this->GreenST->Text = Convert::ToString(Convert::ToDouble(SellMBox->Text) * 5);
		this->BlueST->Text = Convert::ToString(Convert::ToDouble(SellMBox->Text) * 3);
	
}

private: System::Void AACaunt_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (this->AACaunt->Text->Length == 0) {return;}

	int AA = Convert::ToInt64(this->AACaunt->Text);
	int aa2 = Convert::ToInt64(AA * SellPrise);
	if (SellPrise > 0) {
		this->Adena->Text = Convert::ToString(aa2);
	}
	
}
};
}
