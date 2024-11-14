#pragma once

#include <iostream>
#include <string>
#include <cstdint> // for specific size integers
#include <fstream> // for file handling


namespace L2Help {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	using namespace std;

	/// <summary>
	/// Summary for ManorCalk
	/// </summary>
	public ref class ManorCalk : public System::Windows::Forms::Form
	{
	public:

		Image^ image;
		int Amount, Prise, Itog, ProdPrice, BaseP;

	private: System::Windows::Forms::Label^ BasePrice;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Materials;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ SellPrice;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ itog;
	private: System::Windows::Forms::Button^ Oriharukon;

	public:
		Bitmap^ image2;

		ManorCalk(void)
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
		~ManorCalk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ANugget;
	private: System::Windows::Forms::Button^ AnimalBone;
	private: System::Windows::Forms::Button^ AnimaSkin;
	private: System::Windows::Forms::Button^ Asofe;
	private: System::Windows::Forms::Button^ BHemp;
	private: System::Windows::Forms::Button^ Charcoal;
	private: System::Windows::Forms::Button^ Coal;
	private: System::Windows::Forms::Button^ CBP;
	private: System::Windows::Forms::Button^ Cokes;
	private: System::Windows::Forms::Button^ Cord;
	private: System::Windows::Forms::Button^ CLeather;
	private: System::Windows::Forms::Button^ DMP;
	private: System::Windows::Forms::Button^ Enria;
	private: System::Windows::Forms::Button^ HGS;
	private: System::Windows::Forms::Button^ IO;
	private: System::Windows::Forms::Button^ Leather;
	private: System::Windows::Forms::Button^ MThread;

	private: System::Windows::Forms::Button^ MOre;
	private: System::Windows::Forms::Button^ MGlue;
	private: System::Windows::Forms::Button^ MHardener;
	private: System::Windows::Forms::Button^ MLubricant;

	private: System::Windows::Forms::Button^ OO;
	private: System::Windows::Forms::Button^ SilverNugget;
	private: System::Windows::Forms::Button^ Steel;
	private: System::Windows::Forms::Button^ Steem;
	private: System::Windows::Forms::Button^ Suede;

	private: System::Windows::Forms::Button^ Thons;
	private: System::Windows::Forms::Button^ Thread;
	private: System::Windows::Forms::Button^ Varnish;
	private: System::Windows::Forms::Button^ VOP;

	private: System::Windows::Forms::Button^ MFiber;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ AmountFruit;
	private: System::Windows::Forms::MaskedTextBox^ FruitPrice;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ IconImage;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManorCalk::typeid));
			this->ANugget = (gcnew System::Windows::Forms::Button());
			this->AnimalBone = (gcnew System::Windows::Forms::Button());
			this->AnimaSkin = (gcnew System::Windows::Forms::Button());
			this->Asofe = (gcnew System::Windows::Forms::Button());
			this->BHemp = (gcnew System::Windows::Forms::Button());
			this->Charcoal = (gcnew System::Windows::Forms::Button());
			this->Coal = (gcnew System::Windows::Forms::Button());
			this->CBP = (gcnew System::Windows::Forms::Button());
			this->Cokes = (gcnew System::Windows::Forms::Button());
			this->Cord = (gcnew System::Windows::Forms::Button());
			this->CLeather = (gcnew System::Windows::Forms::Button());
			this->DMP = (gcnew System::Windows::Forms::Button());
			this->Enria = (gcnew System::Windows::Forms::Button());
			this->HGS = (gcnew System::Windows::Forms::Button());
			this->IO = (gcnew System::Windows::Forms::Button());
			this->Leather = (gcnew System::Windows::Forms::Button());
			this->MThread = (gcnew System::Windows::Forms::Button());
			this->MOre = (gcnew System::Windows::Forms::Button());
			this->MGlue = (gcnew System::Windows::Forms::Button());
			this->MHardener = (gcnew System::Windows::Forms::Button());
			this->MLubricant = (gcnew System::Windows::Forms::Button());
			this->OO = (gcnew System::Windows::Forms::Button());
			this->SilverNugget = (gcnew System::Windows::Forms::Button());
			this->Steel = (gcnew System::Windows::Forms::Button());
			this->Steem = (gcnew System::Windows::Forms::Button());
			this->Suede = (gcnew System::Windows::Forms::Button());
			this->Thons = (gcnew System::Windows::Forms::Button());
			this->Thread = (gcnew System::Windows::Forms::Button());
			this->Varnish = (gcnew System::Windows::Forms::Button());
			this->VOP = (gcnew System::Windows::Forms::Button());
			this->MFiber = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AmountFruit = (gcnew System::Windows::Forms::MaskedTextBox());
			this->FruitPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->BasePrice = (gcnew System::Windows::Forms::Label());
			this->IconImage = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Materials = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SellPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->itog = (gcnew System::Windows::Forms::Label());
			this->Oriharukon = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconImage))->BeginInit();
			this->SuspendLayout();
			// 
			// ANugget
			// 
			this->ANugget->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ANugget.BackgroundImage")));
			this->ANugget->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ANugget->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ANugget->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->ANugget->Location = System::Drawing::Point(575, 22);
			this->ANugget->Name = L"ANugget";
			this->ANugget->Size = System::Drawing::Size(50, 50);
			this->ANugget->TabIndex = 0;
			this->ANugget->UseVisualStyleBackColor = true;
			this->ANugget->Click += gcnew System::EventHandler(this, &ManorCalk::ANugget_Click);
			// 
			// AnimalBone
			// 
			this->AnimalBone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AnimalBone.BackgroundImage")));
			this->AnimalBone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AnimalBone->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AnimalBone->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AnimalBone->Location = System::Drawing::Point(15, 22);
			this->AnimalBone->Name = L"AnimalBone";
			this->AnimalBone->Size = System::Drawing::Size(50, 50);
			this->AnimalBone->TabIndex = 1;
			this->AnimalBone->UseVisualStyleBackColor = true;
			this->AnimalBone->Click += gcnew System::EventHandler(this, &ManorCalk::button1_Click);
			// 
			// AnimaSkin
			// 
			this->AnimaSkin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AnimaSkin.BackgroundImage")));
			this->AnimaSkin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AnimaSkin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AnimaSkin->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->AnimaSkin->Location = System::Drawing::Point(71, 22);
			this->AnimaSkin->Name = L"AnimaSkin";
			this->AnimaSkin->Size = System::Drawing::Size(50, 50);
			this->AnimaSkin->TabIndex = 2;
			this->AnimaSkin->UseVisualStyleBackColor = true;
			this->AnimaSkin->Click += gcnew System::EventHandler(this, &ManorCalk::button2_Click);
			// 
			// Asofe
			// 
			this->Asofe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Asofe.BackgroundImage")));
			this->Asofe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Asofe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Asofe->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Asofe->Location = System::Drawing::Point(799, 22);
			this->Asofe->Name = L"Asofe";
			this->Asofe->Size = System::Drawing::Size(50, 50);
			this->Asofe->TabIndex = 3;
			this->Asofe->UseVisualStyleBackColor = true;
			this->Asofe->Click += gcnew System::EventHandler(this, &ManorCalk::Asofe_Click);
			// 
			// BHemp
			// 
			this->BHemp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BHemp.BackgroundImage")));
			this->BHemp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BHemp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BHemp->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->BHemp->Location = System::Drawing::Point(239, 89);
			this->BHemp->Name = L"BHemp";
			this->BHemp->Size = System::Drawing::Size(50, 50);
			this->BHemp->TabIndex = 4;
			this->BHemp->UseVisualStyleBackColor = true;
			this->BHemp->Click += gcnew System::EventHandler(this, &ManorCalk::BHemp_Click);
			// 
			// Charcoal
			// 
			this->Charcoal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Charcoal.BackgroundImage")));
			this->Charcoal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Charcoal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Charcoal->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Charcoal->Location = System::Drawing::Point(463, 22);
			this->Charcoal->Name = L"Charcoal";
			this->Charcoal->Size = System::Drawing::Size(50, 50);
			this->Charcoal->TabIndex = 5;
			this->Charcoal->UseVisualStyleBackColor = true;
			this->Charcoal->Click += gcnew System::EventHandler(this, &ManorCalk::Charcoal_Click);
			// 
			// Coal
			// 
			this->Coal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Coal.BackgroundImage")));
			this->Coal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Coal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Coal->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Coal->Location = System::Drawing::Point(127, 22);
			this->Coal->Name = L"Coal";
			this->Coal->Size = System::Drawing::Size(50, 50);
			this->Coal->TabIndex = 6;
			this->Coal->UseVisualStyleBackColor = true;
			this->Coal->Click += gcnew System::EventHandler(this, &ManorCalk::Coal_Click);
			// 
			// CBP
			// 
			this->CBP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CBP.BackgroundImage")));
			this->CBP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CBP->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CBP->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->CBP->Location = System::Drawing::Point(351, 89);
			this->CBP->Name = L"CBP";
			this->CBP->Size = System::Drawing::Size(50, 50);
			this->CBP->TabIndex = 7;
			this->CBP->UseVisualStyleBackColor = true;
			this->CBP->Click += gcnew System::EventHandler(this, &ManorCalk::CBP_Click);
			// 
			// Cokes
			// 
			this->Cokes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cokes.BackgroundImage")));
			this->Cokes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Cokes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cokes->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Cokes->Location = System::Drawing::Point(407, 89);
			this->Cokes->Name = L"Cokes";
			this->Cokes->Size = System::Drawing::Size(50, 50);
			this->Cokes->TabIndex = 8;
			this->Cokes->UseVisualStyleBackColor = true;
			this->Cokes->Click += gcnew System::EventHandler(this, &ManorCalk::Cokes_Click);
			// 
			// Cord
			// 
			this->Cord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cord.BackgroundImage")));
			this->Cord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Cord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cord->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Cord->Location = System::Drawing::Point(575, 89);
			this->Cord->Name = L"Cord";
			this->Cord->Size = System::Drawing::Size(50, 50);
			this->Cord->TabIndex = 9;
			this->Cord->UseVisualStyleBackColor = true;
			this->Cord->Click += gcnew System::EventHandler(this, &ManorCalk::Cord_Click);
			// 
			// CLeather
			// 
			this->CLeather->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CLeather.BackgroundImage")));
			this->CLeather->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CLeather->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CLeather->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->CLeather->Location = System::Drawing::Point(631, 89);
			this->CLeather->Name = L"CLeather";
			this->CLeather->Size = System::Drawing::Size(50, 50);
			this->CLeather->TabIndex = 10;
			this->CLeather->UseVisualStyleBackColor = true;
			this->CLeather->Click += gcnew System::EventHandler(this, &ManorCalk::CLeather_Click);
			// 
			// DMP
			// 
			this->DMP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DMP.BackgroundImage")));
			this->DMP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DMP->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DMP->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->DMP->Location = System::Drawing::Point(743, 22);
			this->DMP->Name = L"DMP";
			this->DMP->Size = System::Drawing::Size(50, 50);
			this->DMP->TabIndex = 11;
			this->DMP->UseVisualStyleBackColor = true;
			this->DMP->Click += gcnew System::EventHandler(this, &ManorCalk::DMP_Click);
			// 
			// Enria
			// 
			this->Enria->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Enria.BackgroundImage")));
			this->Enria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Enria->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Enria->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Enria->Location = System::Drawing::Point(855, 22);
			this->Enria->Name = L"Enria";
			this->Enria->Size = System::Drawing::Size(50, 50);
			this->Enria->TabIndex = 12;
			this->Enria->UseVisualStyleBackColor = true;
			this->Enria->Click += gcnew System::EventHandler(this, &ManorCalk::Enria_Click);
			// 
			// HGS
			// 
			this->HGS->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HGS.BackgroundImage")));
			this->HGS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HGS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HGS->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->HGS->Location = System::Drawing::Point(519, 89);
			this->HGS->Name = L"HGS";
			this->HGS->Size = System::Drawing::Size(50, 50);
			this->HGS->TabIndex = 13;
			this->HGS->UseVisualStyleBackColor = true;
			this->HGS->Click += gcnew System::EventHandler(this, &ManorCalk::HGS_Click);
			// 
			// IO
			// 
			this->IO->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IO.BackgroundImage")));
			this->IO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->IO->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->IO->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->IO->Location = System::Drawing::Point(183, 22);
			this->IO->Name = L"IO";
			this->IO->Size = System::Drawing::Size(50, 50);
			this->IO->TabIndex = 14;
			this->IO->UseVisualStyleBackColor = true;
			this->IO->Click += gcnew System::EventHandler(this, &ManorCalk::IO_Click);
			// 
			// Leather
			// 
			this->Leather->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Leather.BackgroundImage")));
			this->Leather->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Leather->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Leather->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Leather->Location = System::Drawing::Point(183, 89);
			this->Leather->Name = L"Leather";
			this->Leather->Size = System::Drawing::Size(50, 50);
			this->Leather->TabIndex = 15;
			this->Leather->UseVisualStyleBackColor = true;
			this->Leather->Click += gcnew System::EventHandler(this, &ManorCalk::Leather_Click);
			// 
			// MThread
			// 
			this->MThread->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MThread.BackgroundImage")));
			this->MThread->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MThread->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MThread->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MThread->Location = System::Drawing::Point(463, 89);
			this->MThread->Name = L"MThread";
			this->MThread->Size = System::Drawing::Size(50, 50);
			this->MThread->TabIndex = 16;
			this->MThread->UseVisualStyleBackColor = true;
			this->MThread->Click += gcnew System::EventHandler(this, &ManorCalk::MThread_Click);
			// 
			// MOre
			// 
			this->MOre->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MOre.BackgroundImage")));
			this->MOre->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MOre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MOre->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MOre->Location = System::Drawing::Point(631, 22);
			this->MOre->Name = L"MOre";
			this->MOre->Size = System::Drawing::Size(50, 50);
			this->MOre->TabIndex = 18;
			this->MOre->UseVisualStyleBackColor = true;
			this->MOre->Click += gcnew System::EventHandler(this, &ManorCalk::MOre_Click);
			// 
			// MGlue
			// 
			this->MGlue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MGlue.BackgroundImage")));
			this->MGlue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MGlue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MGlue->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MGlue->Location = System::Drawing::Point(15, 89);
			this->MGlue->Name = L"MGlue";
			this->MGlue->Size = System::Drawing::Size(50, 50);
			this->MGlue->TabIndex = 19;
			this->MGlue->UseVisualStyleBackColor = true;
			this->MGlue->Click += gcnew System::EventHandler(this, &ManorCalk::MGlue_Click);
			// 
			// MHardener
			// 
			this->MHardener->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MHardener.BackgroundImage")));
			this->MHardener->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MHardener->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MHardener->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MHardener->Location = System::Drawing::Point(71, 89);
			this->MHardener->Name = L"MHardener";
			this->MHardener->Size = System::Drawing::Size(50, 50);
			this->MHardener->TabIndex = 20;
			this->MHardener->UseVisualStyleBackColor = true;
			this->MHardener->Click += gcnew System::EventHandler(this, &ManorCalk::MHardener_Click);
			// 
			// MLubricant
			// 
			this->MLubricant->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MLubricant.BackgroundImage")));
			this->MLubricant->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MLubricant->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MLubricant->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MLubricant->Location = System::Drawing::Point(127, 89);
			this->MLubricant->Name = L"MLubricant";
			this->MLubricant->Size = System::Drawing::Size(50, 50);
			this->MLubricant->TabIndex = 21;
			this->MLubricant->UseVisualStyleBackColor = true;
			this->MLubricant->Click += gcnew System::EventHandler(this, &ManorCalk::MLubricant_Click);
			// 
			// OO
			// 
			this->OO->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OO.BackgroundImage")));
			this->OO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->OO->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OO->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->OO->Location = System::Drawing::Point(687, 22);
			this->OO->Name = L"OO";
			this->OO->Size = System::Drawing::Size(50, 50);
			this->OO->TabIndex = 23;
			this->OO->UseVisualStyleBackColor = true;
			this->OO->Click += gcnew System::EventHandler(this, &ManorCalk::OO_Click);
			// 
			// SilverNugget
			// 
			this->SilverNugget->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SilverNugget.BackgroundImage")));
			this->SilverNugget->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SilverNugget->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SilverNugget->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->SilverNugget->Location = System::Drawing::Point(519, 22);
			this->SilverNugget->Name = L"SilverNugget";
			this->SilverNugget->Size = System::Drawing::Size(50, 50);
			this->SilverNugget->TabIndex = 24;
			this->SilverNugget->UseVisualStyleBackColor = true;
			this->SilverNugget->Click += gcnew System::EventHandler(this, &ManorCalk::SilverNugget_Click);
			// 
			// Steel
			// 
			this->Steel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Steel.BackgroundImage")));
			this->Steel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Steel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Steel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Steel->Location = System::Drawing::Point(295, 89);
			this->Steel->Name = L"Steel";
			this->Steel->Size = System::Drawing::Size(50, 50);
			this->Steel->TabIndex = 25;
			this->Steel->UseVisualStyleBackColor = true;
			this->Steel->Click += gcnew System::EventHandler(this, &ManorCalk::Steel_Click);
			// 
			// Steem
			// 
			this->Steem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Steem.BackgroundImage")));
			this->Steem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Steem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Steem->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Steem->Location = System::Drawing::Point(239, 22);
			this->Steem->Name = L"Steem";
			this->Steem->Size = System::Drawing::Size(50, 50);
			this->Steem->TabIndex = 26;
			this->Steem->UseVisualStyleBackColor = true;
			this->Steem->Click += gcnew System::EventHandler(this, &ManorCalk::Steem_Click);
			// 
			// Suede
			// 
			this->Suede->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Suede.BackgroundImage")));
			this->Suede->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Suede->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Suede->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Suede->Location = System::Drawing::Point(295, 22);
			this->Suede->Name = L"Suede";
			this->Suede->Size = System::Drawing::Size(50, 50);
			this->Suede->TabIndex = 27;
			this->Suede->UseVisualStyleBackColor = true;
			this->Suede->Click += gcnew System::EventHandler(this, &ManorCalk::Suede_Click);
			// 
			// Thons
			// 
			this->Thons->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Thons.BackgroundImage")));
			this->Thons->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Thons->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Thons->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Thons->Location = System::Drawing::Point(911, 22);
			this->Thons->Name = L"Thons";
			this->Thons->Size = System::Drawing::Size(50, 50);
			this->Thons->TabIndex = 29;
			this->Thons->UseVisualStyleBackColor = true;
			this->Thons->Click += gcnew System::EventHandler(this, &ManorCalk::Thons_Click);
			// 
			// Thread
			// 
			this->Thread->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Thread.BackgroundImage")));
			this->Thread->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Thread->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Thread->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Thread->Location = System::Drawing::Point(351, 22);
			this->Thread->Name = L"Thread";
			this->Thread->Size = System::Drawing::Size(50, 50);
			this->Thread->TabIndex = 30;
			this->Thread->UseVisualStyleBackColor = true;
			this->Thread->Click += gcnew System::EventHandler(this, &ManorCalk::Thread_Click);
			// 
			// Varnish
			// 
			this->Varnish->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Varnish.BackgroundImage")));
			this->Varnish->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Varnish->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Varnish->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Varnish->Location = System::Drawing::Point(407, 22);
			this->Varnish->Name = L"Varnish";
			this->Varnish->Size = System::Drawing::Size(50, 50);
			this->Varnish->TabIndex = 31;
			this->Varnish->UseVisualStyleBackColor = true;
			this->Varnish->Click += gcnew System::EventHandler(this, &ManorCalk::Varnish_Click);
			// 
			// VOP
			// 
			this->VOP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VOP.BackgroundImage")));
			this->VOP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->VOP->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->VOP->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->VOP->Location = System::Drawing::Point(687, 89);
			this->VOP->Name = L"VOP";
			this->VOP->Size = System::Drawing::Size(50, 50);
			this->VOP->TabIndex = 32;
			this->VOP->UseVisualStyleBackColor = true;
			this->VOP->Click += gcnew System::EventHandler(this, &ManorCalk::VOP_Click);
			// 
			// MFiber
			// 
			this->MFiber->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MFiber.BackgroundImage")));
			this->MFiber->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MFiber->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MFiber->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->MFiber->Location = System::Drawing::Point(743, 89);
			this->MFiber->Name = L"MFiber";
			this->MFiber->Size = System::Drawing::Size(50, 50);
			this->MFiber->TabIndex = 33;
			this->MFiber->UseVisualStyleBackColor = true;
			this->MFiber->Click += gcnew System::EventHandler(this, &ManorCalk::MFiber_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 25);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Количество фруктов:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(23, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 25);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Цена покупки:";
			// 
			// AmountFruit
			// 
			this->AmountFruit->BackColor = System::Drawing::Color::DarkGray;
			this->AmountFruit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AmountFruit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AmountFruit->Location = System::Drawing::Point(273, 282);
			this->AmountFruit->Mask = L"000000";
			this->AmountFruit->Name = L"AmountFruit";
			this->AmountFruit->Size = System::Drawing::Size(86, 28);
			this->AmountFruit->TabIndex = 36;
			this->AmountFruit->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ManorCalk::AmountFruit_KeyUp);
			// 
			// FruitPrice
			// 
			this->FruitPrice->BackColor = System::Drawing::Color::DarkGray;
			this->FruitPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FruitPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FruitPrice->Location = System::Drawing::Point(273, 338);
			this->FruitPrice->Mask = L"000000";
			this->FruitPrice->Name = L"FruitPrice";
			this->FruitPrice->Size = System::Drawing::Size(86, 28);
			this->FruitPrice->TabIndex = 37;
			this->FruitPrice->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ManorCalk::FruitPrice_KeyUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(365, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 16);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Базовая цена:";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->BasePrice);
			this->panel2->Location = System::Drawing::Point(383, 341);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(111, 25);
			this->panel2->TabIndex = 41;
			// 
			// BasePrice
			// 
			this->BasePrice->BackColor = System::Drawing::Color::Transparent;
			this->BasePrice->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BasePrice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BasePrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BasePrice->ForeColor = System::Drawing::Color::White;
			this->BasePrice->Location = System::Drawing::Point(0, 0);
			this->BasePrice->Name = L"BasePrice";
			this->BasePrice->Size = System::Drawing::Size(111, 25);
			this->BasePrice->TabIndex = 40;
			this->BasePrice->Text = L"0";
			// 
			// IconImage
			// 
			this->IconImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->IconImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IconImage.Image")));
			this->IconImage->Location = System::Drawing::Point(404, 279);
			this->IconImage->Name = L"IconImage";
			this->IconImage->Size = System::Drawing::Size(40, 40);
			this->IconImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->IconImage->TabIndex = 42;
			this->IconImage->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(493, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 25);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Количество реурсов:";
			// 
			// Materials
			// 
			this->Materials->AutoSize = true;
			this->Materials->BackColor = System::Drawing::Color::Transparent;
			this->Materials->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Materials->ForeColor = System::Drawing::Color::White;
			this->Materials->Location = System::Drawing::Point(509, 322);
			this->Materials->Name = L"Materials";
			this->Materials->Size = System::Drawing::Size(37, 39);
			this->Materials->TabIndex = 44;
			this->Materials->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(23, 437);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 25);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Цена Продажи:";
			// 
			// SellPrice
			// 
			this->SellPrice->BackColor = System::Drawing::Color::DarkGray;
			this->SellPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SellPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SellPrice->Location = System::Drawing::Point(222, 437);
			this->SellPrice->Mask = L"000000";
			this->SellPrice->Name = L"SellPrice";
			this->SellPrice->Size = System::Drawing::Size(86, 28);
			this->SellPrice->TabIndex = 46;
			this->SellPrice->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ManorCalk::SellPrice_KeyUp);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(331, 428);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 39);
			this->label6->TabIndex = 47;
			this->label6->Text = L"=";
			// 
			// itog
			// 
			this->itog->AutoSize = true;
			this->itog->BackColor = System::Drawing::Color::Transparent;
			this->itog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->itog->ForeColor = System::Drawing::Color::White;
			this->itog->Location = System::Drawing::Point(375, 428);
			this->itog->Name = L"itog";
			this->itog->Size = System::Drawing::Size(37, 39);
			this->itog->TabIndex = 48;
			this->itog->Text = L"0";
			// 
			// Oriharukon
			// 
			this->Oriharukon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oriharukon.BackgroundImage")));
			this->Oriharukon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Oriharukon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Oriharukon->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Oriharukon->Location = System::Drawing::Point(799, 89);
			this->Oriharukon->Name = L"Oriharukon";
			this->Oriharukon->Size = System::Drawing::Size(50, 50);
			this->Oriharukon->TabIndex = 49;
			this->Oriharukon->UseVisualStyleBackColor = true;
			this->Oriharukon->Click += gcnew System::EventHandler(this, &ManorCalk::Oriharukon_Click);
			// 
			// ManorCalk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(968, 524);
			this->Controls->Add(this->Oriharukon);
			this->Controls->Add(this->itog);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->SellPrice);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Materials);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->IconImage);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->FruitPrice);
			this->Controls->Add(this->AmountFruit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MFiber);
			this->Controls->Add(this->VOP);
			this->Controls->Add(this->Varnish);
			this->Controls->Add(this->Thread);
			this->Controls->Add(this->Thons);
			this->Controls->Add(this->Suede);
			this->Controls->Add(this->Steem);
			this->Controls->Add(this->Steel);
			this->Controls->Add(this->SilverNugget);
			this->Controls->Add(this->OO);
			this->Controls->Add(this->MLubricant);
			this->Controls->Add(this->MHardener);
			this->Controls->Add(this->MGlue);
			this->Controls->Add(this->MOre);
			this->Controls->Add(this->MThread);
			this->Controls->Add(this->Leather);
			this->Controls->Add(this->IO);
			this->Controls->Add(this->HGS);
			this->Controls->Add(this->Enria);
			this->Controls->Add(this->DMP);
			this->Controls->Add(this->CLeather);
			this->Controls->Add(this->Cord);
			this->Controls->Add(this->Cokes);
			this->Controls->Add(this->CBP);
			this->Controls->Add(this->Coal);
			this->Controls->Add(this->Charcoal);
			this->Controls->Add(this->BHemp);
			this->Controls->Add(this->Asofe);
			this->Controls->Add(this->AnimaSkin);
			this->Controls->Add(this->AnimalBone);
			this->Controls->Add(this->ANugget);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ManorCalk";
			this->Text = L"ManorCalk";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:Void SetCalcParameters(Image^ fon) {

		this->BasePrice->Text = Convert::ToString(BaseP);

		//image = this->button1->BackgroundImage;
		this->IconImage->Image = dynamic_cast<Image^>(fon);

	}

	private: System::Void ANugget_Click(System::Object^ sender, System::EventArgs^ e) {

		BaseP = 5000;
		image = this->ANugget->BackgroundImage;

		SetCalcParameters(image);

	}

	private: void CalcManor() {

		if (Amount > 0 && Prise > 0) {
			int i = Amount * Prise / BaseP;
			this->Materials->Text = Convert::ToString(i);
			Itog = i;
		}
		else { return; }

		if (ProdPrice) {
			this->itog->Text = Convert::ToString(ProdPrice * Itog);
		}
	}
	
	private: void Reset() {
		this->AmountFruit->Text = "";
		this->SellPrice->Text = "";
		this->FruitPrice->Text = "";
		this->Materials->Text = "0";
		this->itog->Text = "0";
		//int Amount, Prise, Itog, ProdPrice, BaseP;
		Amount = 0;
		Prise = 0;
		Itog = 0;
		ProdPrice = 0;
		BaseP = 0;
	}

	private: System::Void AmountFruit_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (this->AmountFruit->Text->Length == 0) {
			Amount = 0;
			return;
		}
		Amount = Convert::ToInt32(this->AmountFruit->Text);
		CalcManor();
	}
	private: System::Void FruitPrice_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (this->FruitPrice->Text->Length == 0) {
			Prise = 0;
			return;
		}
		Prise = Convert::ToInt32(this->FruitPrice->Text);
		CalcManor();
	}
	private: System::Void SellPrice_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (this->SellPrice->Text->Length == 0) {
			ProdPrice = 0;
			return;
		}
		ProdPrice = Convert::ToInt32(this->SellPrice->Text);
		if (Itog > 0) {
			this->itog->Text = Convert::ToString(ProdPrice * Itog);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Reset();
		BaseP = 150;
		image = this->AnimalBone->BackgroundImage;

		SetCalcParameters(image);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Reset();
		BaseP = 150;
		image = this->AnimaSkin->BackgroundImage;

		SetCalcParameters(image);
}
	private: System::Void Asofe_Click(System::Object^ sender, System::EventArgs^ e) {
		Reset();
		BaseP = 6000;
		image = this->Asofe->BackgroundImage;

		SetCalcParameters(image);
}
private: System::Void BHemp_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 500;
	image = this->BHemp->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Charcoal_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 200;
	image = this->Charcoal->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Coal_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 200;
	image = this->Coal->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void CBP_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 1500;
	image = this->CBP->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Cokes_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 1200;
	image = this->Cokes->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Cord_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 325;
	image = this->Cord->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void CLeather_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 5700;
	image = this->CLeather->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void DMP_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 15000;
	image = this->DMP->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Enria_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 12000;
	image = this->Enria->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void HGS_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 2400;
	image = this->HGS->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void IO_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 200;
	image = this->IO->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Leather_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 900;
	image = this->Leather->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MFiber_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 700;
	image = this->MFiber->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Steem_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 100;
	image = this->Steem->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Suede_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 300;
	image = this->Suede->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Thread_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 200;
	image = this->Thread->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Varnish_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 200;
	image = this->Varnish->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void SilverNugget_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 500;
	image = this->SilverNugget->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MOre_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 1000;
	image = this->MOre->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void OO_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 3000;
	image = this->OO->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Thons_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 6000;
	image = this->Thons->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MGlue_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 6000;
	image = this->MGlue->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MHardener_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 23000;
	image = this->MHardener->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MLubricant_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 10000;
	image = this->MLubricant->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Steel_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 2000;
	image = this->Steel->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void MThread_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 2000;
	image = this->MThread->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void VOP_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 8100;
	image = this->VOP->BackgroundImage;

	SetCalcParameters(image);
}
private: System::Void Oriharukon_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
	BaseP = 24600;
	image = this->Oriharukon->BackgroundImage;

	SetCalcParameters(image);
}
};
}
