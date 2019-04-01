#pragma once
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<algorithm>
//#include "Form1.h"

using namespace std;

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Game_2048 : public System::Windows::Forms::Form
	{
	public:
		Game_2048(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Game_2048(Form^ obj1)
		{
			InitializeComponent();
			caller=obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game_2048()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn11;
	protected:

	protected:

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  btn33;

	private: System::Windows::Forms::Button^  btn32;

	private: System::Windows::Forms::Button^  btn31;

	private: System::Windows::Forms::Button^  btn24;

	private: System::Windows::Forms::Button^  btn23;

	private: System::Windows::Forms::Button^  btn22;

	private: System::Windows::Forms::Button^  btn21;

	private: System::Windows::Forms::Button^  btn14;

	private: System::Windows::Forms::Button^  btn13;

	private: System::Windows::Forms::Button^  btn12;
	private: System::Windows::Forms::Button^  btn34;
	private: System::Windows::Forms::Button^  btn44;




	private: System::Windows::Forms::Button^  btn43;

	private: System::Windows::Forms::Button^  btn42;

	private: System::Windows::Forms::Button^  btn41;
	private: System::Windows::Forms::Button^  btnLeft;
	private: System::Windows::Forms::Button^  btnDown;
	private: System::Windows::Forms::Button^  btnRight;
	private: System::Windows::Forms::Button^  btnUp;
	private: System::Windows::Forms::Button^  btnNewGame;
	private: System::Windows::Forms::Label^  lbl_Score_Title;
	private: System::Windows::Forms::Label^  lbl_Score_Value;
	private: System::Windows::Forms::Label^  lblMax_Score_Title;
	private: System::Windows::Forms::Label^  lblMax_Score_Value;
	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_2048_Game;
	private: System::Windows::Forms::PictureBox^  pictureBox1;








	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game_2048::typeid));
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->btn33 = (gcnew System::Windows::Forms::Button());
			this->btn32 = (gcnew System::Windows::Forms::Button());
			this->btn31 = (gcnew System::Windows::Forms::Button());
			this->btn24 = (gcnew System::Windows::Forms::Button());
			this->btn23 = (gcnew System::Windows::Forms::Button());
			this->btn22 = (gcnew System::Windows::Forms::Button());
			this->btn21 = (gcnew System::Windows::Forms::Button());
			this->btn14 = (gcnew System::Windows::Forms::Button());
			this->btn13 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn34 = (gcnew System::Windows::Forms::Button());
			this->btn44 = (gcnew System::Windows::Forms::Button());
			this->btn43 = (gcnew System::Windows::Forms::Button());
			this->btn42 = (gcnew System::Windows::Forms::Button());
			this->btn41 = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->lbl_Score_Title = (gcnew System::Windows::Forms::Label());
			this->lbl_Score_Value = (gcnew System::Windows::Forms::Label());
			this->lblMax_Score_Title = (gcnew System::Windows::Forms::Label());
			this->lblMax_Score_Value = (gcnew System::Windows::Forms::Label());
			this->btn_Back_To_Main_From_2048_Game = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn11
			// 
			this->btn11->BackColor = System::Drawing::Color::Cornsilk;
			this->btn11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn11->Location = System::Drawing::Point(268, 111);
			this->btn11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(83, 64);
			this->btn11->TabIndex = 0;
			this->btn11->Text = L"button1";
			this->btn11->UseVisualStyleBackColor = false;
			// 
			// btn33
			// 
			this->btn33->BackColor = System::Drawing::Color::Cornsilk;
			this->btn33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn33->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn33->Location = System::Drawing::Point(444, 249);
			this->btn33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn33->Name = L"btn33";
			this->btn33->Size = System::Drawing::Size(83, 64);
			this->btn33->TabIndex = 3;
			this->btn33->Text = L"button1";
			this->btn33->UseVisualStyleBackColor = false;
			// 
			// btn32
			// 
			this->btn32->BackColor = System::Drawing::Color::Cornsilk;
			this->btn32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn32->Location = System::Drawing::Point(356, 249);
			this->btn32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn32->Name = L"btn32";
			this->btn32->Size = System::Drawing::Size(83, 64);
			this->btn32->TabIndex = 4;
			this->btn32->Text = L"button1";
			this->btn32->UseVisualStyleBackColor = false;
			// 
			// btn31
			// 
			this->btn31->BackColor = System::Drawing::Color::Cornsilk;
			this->btn31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn31->Location = System::Drawing::Point(268, 249);
			this->btn31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn31->Name = L"btn31";
			this->btn31->Size = System::Drawing::Size(83, 64);
			this->btn31->TabIndex = 5;
			this->btn31->Text = L"button1";
			this->btn31->UseVisualStyleBackColor = false;
			// 
			// btn24
			// 
			this->btn24->BackColor = System::Drawing::Color::Cornsilk;
			this->btn24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn24->Location = System::Drawing::Point(532, 180);
			this->btn24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn24->Name = L"btn24";
			this->btn24->Size = System::Drawing::Size(83, 64);
			this->btn24->TabIndex = 6;
			this->btn24->Text = L"button1";
			this->btn24->UseVisualStyleBackColor = false;
			// 
			// btn23
			// 
			this->btn23->BackColor = System::Drawing::Color::Cornsilk;
			this->btn23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn23->Location = System::Drawing::Point(444, 180);
			this->btn23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn23->Name = L"btn23";
			this->btn23->Size = System::Drawing::Size(83, 64);
			this->btn23->TabIndex = 7;
			this->btn23->Text = L"button1";
			this->btn23->UseVisualStyleBackColor = false;
			// 
			// btn22
			// 
			this->btn22->BackColor = System::Drawing::Color::Cornsilk;
			this->btn22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn22->Location = System::Drawing::Point(356, 180);
			this->btn22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn22->Name = L"btn22";
			this->btn22->Size = System::Drawing::Size(83, 64);
			this->btn22->TabIndex = 8;
			this->btn22->Text = L"button1";
			this->btn22->UseVisualStyleBackColor = false;
			// 
			// btn21
			// 
			this->btn21->BackColor = System::Drawing::Color::Cornsilk;
			this->btn21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn21->Location = System::Drawing::Point(268, 180);
			this->btn21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn21->Name = L"btn21";
			this->btn21->Size = System::Drawing::Size(83, 64);
			this->btn21->TabIndex = 9;
			this->btn21->Text = L"button1";
			this->btn21->UseVisualStyleBackColor = false;
			// 
			// btn14
			// 
			this->btn14->BackColor = System::Drawing::Color::Cornsilk;
			this->btn14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn14->Location = System::Drawing::Point(532, 111);
			this->btn14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn14->Name = L"btn14";
			this->btn14->Size = System::Drawing::Size(83, 64);
			this->btn14->TabIndex = 10;
			this->btn14->Text = L"button1";
			this->btn14->UseVisualStyleBackColor = false;
			// 
			// btn13
			// 
			this->btn13->BackColor = System::Drawing::Color::Cornsilk;
			this->btn13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn13->Location = System::Drawing::Point(444, 111);
			this->btn13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn13->Name = L"btn13";
			this->btn13->Size = System::Drawing::Size(83, 64);
			this->btn13->TabIndex = 11;
			this->btn13->Text = L"button1";
			this->btn13->UseVisualStyleBackColor = false;
			// 
			// btn12
			// 
			this->btn12->BackColor = System::Drawing::Color::Cornsilk;
			this->btn12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn12->Location = System::Drawing::Point(356, 111);
			this->btn12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(83, 64);
			this->btn12->TabIndex = 12;
			this->btn12->Text = L"button1";
			this->btn12->UseVisualStyleBackColor = false;
			// 
			// btn34
			// 
			this->btn34->BackColor = System::Drawing::Color::Cornsilk;
			this->btn34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn34->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn34->Location = System::Drawing::Point(532, 249);
			this->btn34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn34->Name = L"btn34";
			this->btn34->Size = System::Drawing::Size(83, 64);
			this->btn34->TabIndex = 13;
			this->btn34->Text = L"button1";
			this->btn34->UseVisualStyleBackColor = false;
			// 
			// btn44
			// 
			this->btn44->BackColor = System::Drawing::Color::Cornsilk;
			this->btn44->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn44->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn44->Location = System::Drawing::Point(532, 318);
			this->btn44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn44->Name = L"btn44";
			this->btn44->Size = System::Drawing::Size(83, 64);
			this->btn44->TabIndex = 14;
			this->btn44->Text = L"button1";
			this->btn44->UseVisualStyleBackColor = false;
			// 
			// btn43
			// 
			this->btn43->BackColor = System::Drawing::Color::Cornsilk;
			this->btn43->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn43->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn43->Location = System::Drawing::Point(444, 318);
			this->btn43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn43->Name = L"btn43";
			this->btn43->Size = System::Drawing::Size(83, 64);
			this->btn43->TabIndex = 15;
			this->btn43->Text = L"button1";
			this->btn43->UseVisualStyleBackColor = false;
			// 
			// btn42
			// 
			this->btn42->BackColor = System::Drawing::Color::Cornsilk;
			this->btn42->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn42->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn42->Location = System::Drawing::Point(356, 318);
			this->btn42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn42->Name = L"btn42";
			this->btn42->Size = System::Drawing::Size(83, 64);
			this->btn42->TabIndex = 16;
			this->btn42->Text = L"button1";
			this->btn42->UseVisualStyleBackColor = false;
			// 
			// btn41
			// 
			this->btn41->BackColor = System::Drawing::Color::Cornsilk;
			this->btn41->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn41->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn41->Location = System::Drawing::Point(268, 318);
			this->btn41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn41->Name = L"btn41";
			this->btn41->Size = System::Drawing::Size(83, 64);
			this->btn41->TabIndex = 17;
			this->btn41->Text = L"button1";
			this->btn41->UseVisualStyleBackColor = false;
			// 
			// btnLeft
			// 
			this->btnLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.5F));
			this->btnLeft->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLeft->Location = System::Drawing::Point(676, 210);
			this->btnLeft->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(80, 41);
			this->btnLeft->TabIndex = 18;
			this->btnLeft->Text = L"LEFT";
			this->btnLeft->UseVisualStyleBackColor = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &Game_2048::btnLeft_Click);
			// 
			// btnDown
			// 
			this->btnDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnDown->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDown->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.5F));
			this->btnDown->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDown->Location = System::Drawing::Point(763, 210);
			this->btnDown->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(80, 41);
			this->btnDown->TabIndex = 19;
			this->btnDown->Text = L"DOWN";
			this->btnDown->UseVisualStyleBackColor = false;
			this->btnDown->Click += gcnew System::EventHandler(this, &Game_2048::btnDown_Click);
			// 
			// btnRight
			// 
			this->btnRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.5F));
			this->btnRight->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRight->Location = System::Drawing::Point(848, 210);
			this->btnRight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(80, 41);
			this->btnRight->TabIndex = 20;
			this->btnRight->Text = L"RIGHT";
			this->btnRight->UseVisualStyleBackColor = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &Game_2048::btnRight_Click);
			// 
			// btnUp
			// 
			this->btnUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.5F));
			this->btnUp->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnUp->Location = System::Drawing::Point(763, 158);
			this->btnUp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(80, 41);
			this->btnUp->TabIndex = 21;
			this->btnUp->Text = L"UP";
			this->btnUp->UseVisualStyleBackColor = false;
			this->btnUp->Click += gcnew System::EventHandler(this, &Game_2048::btnUp_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(41)), 
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btnNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btnNewGame->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnNewGame->Location = System::Drawing::Point(728, 80);
			this->btnNewGame->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(159, 41);
			this->btnNewGame->TabIndex = 22;
			this->btnNewGame->Text = L"NEW GAME";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &Game_2048::btnNewGame_Click);
			// 
			// lbl_Score_Title
			// 
			this->lbl_Score_Title->AutoSize = true;
			this->lbl_Score_Title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(246)), 
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->lbl_Score_Title->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbl_Score_Title->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->lbl_Score_Title->Location = System::Drawing::Point(80, 225);
			this->lbl_Score_Title->Name = L"lbl_Score_Title";
			this->lbl_Score_Title->Size = System::Drawing::Size(76, 23);
			this->lbl_Score_Title->TabIndex = 23;
			this->lbl_Score_Title->Text = L"SCORE";
			// 
			// lbl_Score_Value
			// 
			this->lbl_Score_Value->AutoSize = true;
			this->lbl_Score_Value->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(246)), 
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->lbl_Score_Value->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbl_Score_Value->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->lbl_Score_Value->Location = System::Drawing::Point(171, 225);
			this->lbl_Score_Value->Name = L"lbl_Score_Value";
			this->lbl_Score_Value->Size = System::Drawing::Size(21, 23);
			this->lbl_Score_Value->TabIndex = 24;
			this->lbl_Score_Value->Text = L"0";
			// 
			// lblMax_Score_Title
			// 
			this->lblMax_Score_Title->AutoSize = true;
			this->lblMax_Score_Title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), 
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->lblMax_Score_Title->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblMax_Score_Title->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->lblMax_Score_Title->Location = System::Drawing::Point(25, 276);
			this->lblMax_Score_Title->Name = L"lblMax_Score_Title";
			this->lblMax_Score_Title->Size = System::Drawing::Size(126, 23);
			this->lblMax_Score_Title->TabIndex = 25;
			this->lblMax_Score_Title->Text = L"MAX SCORE";
			// 
			// lblMax_Score_Value
			// 
			this->lblMax_Score_Value->AutoSize = true;
			this->lblMax_Score_Value->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), 
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->lblMax_Score_Value->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblMax_Score_Value->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->lblMax_Score_Value->Location = System::Drawing::Point(171, 276);
			this->lblMax_Score_Value->Name = L"lblMax_Score_Value";
			this->lblMax_Score_Value->Size = System::Drawing::Size(21, 23);
			this->lblMax_Score_Value->TabIndex = 26;
			this->lblMax_Score_Value->Text = L"0";
			// 
			// btn_Back_To_Main_From_2048_Game
			// 
			this->btn_Back_To_Main_From_2048_Game->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_Back_To_Main_From_2048_Game->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Back_To_Main_From_2048_Game->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_Back_To_Main_From_2048_Game->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Back_To_Main_From_2048_Game->Location = System::Drawing::Point(763, 292);
			this->btn_Back_To_Main_From_2048_Game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Back_To_Main_From_2048_Game->Name = L"btn_Back_To_Main_From_2048_Game";
			this->btn_Back_To_Main_From_2048_Game->Size = System::Drawing::Size(80, 34);
			this->btn_Back_To_Main_From_2048_Game->TabIndex = 27;
			this->btn_Back_To_Main_From_2048_Game->Text = L"BACK";
			this->btn_Back_To_Main_From_2048_Game->UseVisualStyleBackColor = false;
			this->btn_Back_To_Main_From_2048_Game->Click += gcnew System::EventHandler(this, &Game_2048::btn_Back_To_Main_From_2048_Game_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			//this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(25, 210);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 49);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// Game_2048
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1019, 526);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_Back_To_Main_From_2048_Game);
			this->Controls->Add(this->lblMax_Score_Value);
			this->Controls->Add(this->lblMax_Score_Title);
			this->Controls->Add(this->lbl_Score_Value);
			this->Controls->Add(this->lbl_Score_Title);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnDown);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btn41);
			this->Controls->Add(this->btn42);
			this->Controls->Add(this->btn43);
			this->Controls->Add(this->btn44);
			this->Controls->Add(this->btn34);
			this->Controls->Add(this->btn12);
			this->Controls->Add(this->btn13);
			this->Controls->Add(this->btn14);
			this->Controls->Add(this->btn21);
			this->Controls->Add(this->btn22);
			this->Controls->Add(this->btn23);
			this->Controls->Add(this->btn24);
			this->Controls->Add(this->btn31);
			this->Controls->Add(this->btn32);
			this->Controls->Add(this->btn33);
			this->Controls->Add(this->btn11);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Game_2048";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game_2048";
			this->Load += gcnew System::EventHandler(this, &Game_2048::Game_2048_Load);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game_2048::KeyUp_form);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Form^ caller;
	public:
		int convert_string_to_int(String^ s){
			int n = s->Length;
			int base = 1;
			int ans = 0;
			for (int i = s->Length - 1; i >= 0; i--){
				ans += (s[i] - 48) * base;
				base *= 10;
			}
			return ans;
		}
		void ColorChanger(array<Button ^, 2> ^buttons){		
			int ColorArray[][3] = {
				{248,236,143},
				{255,196,77},
				{255,152,48},
				{245,104,28},
				{217,79,0},
				{191,54,4},
				{166,17,3},
				{136,0,0},
				{97,5,0},
				{55,0,3},
				{31,0,7},
				{255,248,220}
			};
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(convert_string_to_int(buttons[j,i]->Text) == 2){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[0][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[0][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[0][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 4){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[1][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[1][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[1][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 8){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[2][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[2][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[2][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 16){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[3][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[3][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[3][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 32){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[4][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[4][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[4][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 64){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[5][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[5][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[5][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 128){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[6][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[6][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[6][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 256){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[7][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[7][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[7][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 512){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[8][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[8][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[8][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 1024){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[9][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[9][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[9][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(convert_string_to_int(buttons[j,i]->Text) == 2048){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[10][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[10][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[10][2])));
						buttons[j,i]->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
					}
					if(buttons[j,i]->Text == ""){ 
						buttons[j,i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[11][0])), static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[11][1])), 
							static_cast<System::Int32>(static_cast<System::Byte>(ColorArray[11][2])));
					}
				}
			}
		}
		bool isFull(){
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool flag = 1;
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text == ""){
						flag = 0;
					}
				}
			}
			return flag;
		}
		void Begin(){

			btnLeft->Enabled = true;
			btnRight->Enabled = true;
			btnUp->Enabled = true;
			btnDown->Enabled = true;
			lbl_Score_Value->Text = "0";
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < 4; j++){
					buttons[i, j]->Text = "";
				}
			}
			srand(time(0));
			int row1 = rand() % 4;
			int col1 = rand() % 4;
			buttons[row1, col1]->Text = "2";
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					buttons[row2, col2]->Text = "2";
					break;
				}
			}
			ColorChanger(buttons);
			try {
				OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
				int stuID = 1;

				String ^ Sql = "Select [Max_Score] from 2048_Game where [StudentID] = " + stuID + ";";
				OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				int dummy = (int)command->ExecuteScalar();
				lblMax_Score_Value->Text = dummy.ToString();
				con->Close();
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		bool is_Game_Over(){
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			//FOR LEFT MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR RIGHT MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR UP MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR DOWN MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			return (!hasMoved);
		}

		void Move_Left(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text),convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					int stu_ID=1;
					int rand_no = rand()%(34);
					int number_of_times_played;
					String^ scores="";
					String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					con->Open();
					number_of_times_played = (int)(command->ExecuteScalar());
					scores=(String^)(command2->ExecuteScalar());
					number_of_times_played++;
					String^ dummy = lbl_Score_Value->Text+",";
					scores+=dummy;
					MessageBox::Show(scores);
					String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					command3->ExecuteScalar();
					command4->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[i, j]->Text = help_arr_2[j];
					//MessageBox::Show(buttons[i,j]->Text);
				}
			}
			ColorChanger(buttons);
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();

			if (hasMoved == false){
				MessageBox::Show("Can't move left");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
			ColorChanger(buttons);
		}
		void Move_Right(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					int stu_ID=1;
					int rand_no = rand()%(34);
					int number_of_times_played;
					String^ scores="";
					String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					con->Open();
					number_of_times_played = (int)(command->ExecuteScalar());
					scores=(String^)(command2->ExecuteScalar());
					number_of_times_played++;
					String^ dummy = lbl_Score_Value->Text+",";
					scores+=dummy;
					String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					command3->ExecuteScalar();
					command4->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[i, j]->Text = help_arr_2[j];
				}
			}
			ColorChanger(buttons);
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move right");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
			ColorChanger(buttons);
		}
		void Move_Up(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					int stu_ID=1;
					int rand_no = rand()%(34);
					int number_of_times_played;
					String^ scores="";
					String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					con->Open();
					number_of_times_played = (int)(command->ExecuteScalar());
					scores=(String^)(command2->ExecuteScalar());
					number_of_times_played++;
					String^ dummy = lbl_Score_Value->Text+",";
					scores+=dummy;
					MessageBox::Show(scores);
					String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					command3->ExecuteScalar();
					command4->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[j, i]->Text = help_arr_2[j];
				}
			}
			ColorChanger(buttons);
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move up");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
			ColorChanger(buttons);
		}
		void Move_Down(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					int stu_ID=1;
					int rand_no = rand()%(34);
					int number_of_times_played;
					String^ scores="";
					String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					con->Open();
					number_of_times_played = (int)(command->ExecuteScalar());
					scores=(String^)(command2->ExecuteScalar());
					number_of_times_played++;
					String^ dummy = lbl_Score_Value->Text+",";
					scores+=dummy;
					String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					command3->ExecuteScalar();
					command4->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[j, i]->Text = help_arr_2[j];
				}
			}
			ColorChanger(buttons);
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move down");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
			ColorChanger(buttons);
		}

		void is_2048_found()
		{
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool is_won = false;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (buttons[i, j]->Text == "2048"){
						is_won = true;
						break;
					}
				}
			}
			if (is_won){
				MessageBox::Show("You Won");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					int stu_ID=1;
					int rand_no = rand()%(34);
					int number_of_times_played;
					String^ scores="";
					String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					con->Open();
					number_of_times_played = (int)(command->ExecuteScalar());
					scores=(String^)(command2->ExecuteScalar());
					number_of_times_played++;
					String^ dummy = lbl_Score_Value->Text+",";
					scores+=dummy;
					MessageBox::Show(scores);
					String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					command3->ExecuteScalar();
					command4->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}

		}
	private: System::Void btnLeft_Click(System::Object^  sender, System::EventArgs^  e) {

				 Move_Left();
				 is_2048_found();
			 }
	private: System::Void btnDown_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Down();
				 is_2048_found();

			 }
	private: System::Void btnRight_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Right();
				 is_2048_found();
			 }
	private: System::Void btnUp_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Up();
				 is_2048_found();
			 }
	private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 int stu_ID=1;
					 int rand_no = rand()%(34);
					 int number_of_times_played;
					 String^ scores="";
					 String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					 String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					 con->Open();
					 number_of_times_played = (int)(command->ExecuteScalar());
					 scores=(String^)(command2->ExecuteScalar());
					 number_of_times_played++;
					 String^ dummy = lbl_Score_Value->Text+",";
					 scores+=dummy;
					 String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					 String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					 OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					 command3->ExecuteScalar();
					 command4->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 Begin();
			 }



	private: System::Void KeyUp_form(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (e->KeyValue == 37)
				 {
					 Move_Left();
					 is_2048_found();
				 }
				 else if (e->KeyValue == 38)
				 {
					 Move_Up();
					 is_2048_found();
				 }
				 else if (e->KeyValue == 39)
				 {
					 Move_Right();
					 is_2048_found();
				 }
				 else if (e->KeyValue == 40)
				 {
					 Move_Down();
					 is_2048_found();
				 }

			 }

	private: System::Void btn_Back_To_Main_From_2048_Game_Click(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 int stu_ID=1;
					 int rand_no = rand()%(34);
					 int number_of_times_played;
					 String^ scores="";
					 String ^ Sql = "Select [Number_of_Times_Played] from 2048_Game where [StudentID] = " + stu_ID + ";";
					 String ^ Sq2 = "Select [Scores] from 2048_Game where [StudentID] = " + stu_ID + ";";

					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					 con->Open();
					 number_of_times_played = (int)(command->ExecuteScalar());
					 scores=(String^)(command2->ExecuteScalar());
					 number_of_times_played++;
					 String^ dummy = lbl_Score_Value->Text+",";
					 scores+=dummy;
					 String ^ Sq3 = "UPDATE 2048_Game SET [Number_of_Times_Played] = " + number_of_times_played + " Where [StudentID] = " + stu_ID + ";";
					 String ^ Sq4 = "UPDATE 2048_Game SET [Scores] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
					 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
					 OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq4, con);
					 command3->ExecuteScalar();
					 command4->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 this->Hide();
				 caller->Show();
			 }
	private: System::Void Game_2048_Load(System::Object^  sender, System::EventArgs^  e) {
				 btnNewGame->PerformClick();
			 }
	};
}
