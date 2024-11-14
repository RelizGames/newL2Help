#pragma once

#include "AACalc.h"
#include "ManorCalk.h"


namespace L2Help {

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
		AACalc^ AACalk;
		ManorCalk^ ManCalk;
	private: System::Windows::Forms::ToolStripMenuItem^ ˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem;
	public:
		

		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AACalc^ Calk = gcnew AACalc();
			Calk->MdiParent = this;
			Calk->Dock = DockStyle::Fill;
			Calk->Show();
			AACalk = Calk;
		}
	private: System::Windows::Forms::ToolStripMenuItem^ Ï‡ÌÓToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ManCalc;

	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡„‡‰˚ToolStripMenuItem;

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

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aAToolStripMenuItem;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ï‡ÌÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ManCalc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ì‡„‡‰˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DimGray;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aAToolStripMenuItem,
					this->Ï‡ÌÓToolStripMenuItem, this->˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aAToolStripMenuItem
			// 
			this->aAToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->aAToolStripMenuItem->Checked = true;
			this->aAToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->aAToolStripMenuItem->Name = L"aAToolStripMenuItem";
			this->aAToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->aAToolStripMenuItem->Text = L"AA";
			this->aAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aAToolStripMenuItem_Click);
			// 
			// Ï‡ÌÓToolStripMenuItem
			// 
			this->Ï‡ÌÓToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ManCalc,
					this->Ì‡„‡‰˚ToolStripMenuItem
			});
			this->Ï‡ÌÓToolStripMenuItem->Name = L"Ï‡ÌÓToolStripMenuItem";
			this->Ï‡ÌÓToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->Ï‡ÌÓToolStripMenuItem->Text = L"Ã‡ÌÓ";
			// 
			// ManCalc
			// 
			this->ManCalc->Name = L"ManCalc";
			this->ManCalc->Size = System::Drawing::Size(144, 22);
			this->ManCalc->Text = L" ‡Î¸ÍÛÎˇÚÓ";
			this->ManCalc->Click += gcnew System::EventHandler(this, &MainForm::Í‡Î¸ÍÛÎˇÚÓToolStripMenuItem_Click);
			// 
			// Ì‡„‡‰˚ToolStripMenuItem
			// 
			this->Ì‡„‡‰˚ToolStripMenuItem->Name = L"Ì‡„‡‰˚ToolStripMenuItem";
			this->Ì‡„‡‰˚ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->Ì‡„‡‰˚ToolStripMenuItem->Text = L"Õ‡„‡‰˚";
			// 
			// ˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem
			// 
			this->˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem->Name = L"˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem";
			this->˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->˚ÌÓÍœÂ‰ÏÂÚÓ‚ToolStripMenuItem->Text = L"–˚ÌÓÍ ÔÂ‰ÏÂÚÓ‚";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 611);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"L2Help";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//«‡ÏÂÌ‡ ÔÓÌÂÎÂÈ
private: Void PanelVisible(bool AA, bool ManorCalc) {
	AACalk->Visible = AA;
	if (ManCalk) {ManCalk->Visible = ManorCalc;}
	
}
	   // ÌÓÍ‡ ¿¿
private: System::Void aAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelVisible(true, false);
		
	}
	   // ÌÓÔÍ‡ Ã‡ÌÓ- ‡Î¸ÍÛÎˇÚÓ
private: System::Void Í‡Î¸ÍÛÎˇÚÓToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!ManCalk) {
		ManCalk = gcnew ManorCalk();
		ManCalk->MdiParent = this;
		ManCalk->Dock = DockStyle::Fill;
		ManCalk->Show();

		PanelVisible(false, true);
	}
	else {
		PanelVisible(false, true);
	}
}
};
}
