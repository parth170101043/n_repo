#pragma once
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<vector>
#include<algorithm>
//#include "Level_pipeline.h"


using namespace std;
using namespace System::Data::OleDb;
using namespace System::Diagnostics;

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pipeline_Game
	/// </summary>
	public ref class Pipeline_Game : public System::Windows::Forms::Form
	{
	public:
		Pipeline_Game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pipeline_Game(Form^ obj1,int level, int level_flag,static array<String^>^ arr,static array<String^>^ arr2,int num)
		{
			InitializeComponent();
			caller = obj1;
			level_flag_of_puzzle=level_flag;
			level_of_puzzle=level;
			answer_type=arr;
			answer_index=arr2;
			count=num;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pipeline_Game()
		{
			if (components)
			{
				delete components;
			}
		}


	protected: 

	protected: 





























	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_Pipeline_Game;


































	private: System::Windows::Forms::Panel^  panel_5X5;
	private: System::Windows::Forms::PictureBox^  PB5_55;
	private: System::Windows::Forms::PictureBox^  PB5_51;
	private: System::Windows::Forms::PictureBox^  PB5_52;
	private: System::Windows::Forms::PictureBox^  PB5_53;
	private: System::Windows::Forms::PictureBox^  PB5_54;
	private: System::Windows::Forms::PictureBox^  PB5_45;
	private: System::Windows::Forms::PictureBox^  PB5_35;
	private: System::Windows::Forms::PictureBox^  PB5_15;
	private: System::Windows::Forms::PictureBox^  PB5_25;
	private: System::Windows::Forms::PictureBox^  PB5_41;
	private: System::Windows::Forms::PictureBox^  PB5_42;
	private: System::Windows::Forms::PictureBox^  PB5_43;
	private: System::Windows::Forms::PictureBox^  PB5_44;
	private: System::Windows::Forms::PictureBox^  PB5_34;
	private: System::Windows::Forms::PictureBox^  PB5_12;
	private: System::Windows::Forms::PictureBox^  PB5_13;
	private: System::Windows::Forms::PictureBox^  PB5_14;
	private: System::Windows::Forms::PictureBox^  PB5_21;
	private: System::Windows::Forms::PictureBox^  PB5_22;
	private: System::Windows::Forms::PictureBox^  PB5_23;
	private: System::Windows::Forms::PictureBox^  PB5_24;
	private: System::Windows::Forms::PictureBox^  PB5_31;
	private: System::Windows::Forms::PictureBox^  PB5_32;
	private: System::Windows::Forms::PictureBox^  PB5_33;
	private: System::Windows::Forms::PictureBox^  PB5_11;
private: System::Windows::Forms::Timer^  timer;
private: System::Windows::Forms::Label^  lbl_timer;
private: System::Windows::Forms::Label^  lbl_star1;
private: System::Windows::Forms::Label^  lbl_star2;

private: System::Windows::Forms::Label^  lbl_star3;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  lbl_panelstar3;
private: System::Windows::Forms::Label^  lbl_panelstar2;
private: System::Windows::Forms::Label^  lbl_panelstar1;
private: System::Windows::Forms::Button^  btn_next;
private: System::Windows::Forms::Button^  btn_retry;
private: System::Windows::Forms::Button^  btn_level;
private: System::Windows::Forms::Button^  btn_helper;

private: System::ComponentModel::IContainer^  components;






































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
			this->btn_Back_To_Main_From_Pipeline_Game = (gcnew System::Windows::Forms::Button());
			this->panel_5X5 = (gcnew System::Windows::Forms::Panel());
			this->PB5_55 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_51 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_52 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_53 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_54 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_45 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_35 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_15 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_25 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_41 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_42 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_43 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_44 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_34 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_12 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_13 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_14 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_21 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_22 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_23 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_24 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_31 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_32 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_33 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_11 = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_timer = (gcnew System::Windows::Forms::Label());
			this->lbl_star1 = (gcnew System::Windows::Forms::Label());
			this->lbl_star2 = (gcnew System::Windows::Forms::Label());
			this->lbl_star3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_panelstar3 = (gcnew System::Windows::Forms::Label());
			this->lbl_panelstar2 = (gcnew System::Windows::Forms::Label());
			this->lbl_panelstar1 = (gcnew System::Windows::Forms::Label());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_retry = (gcnew System::Windows::Forms::Button());
			this->btn_level = (gcnew System::Windows::Forms::Button());
			this->btn_helper = (gcnew System::Windows::Forms::Button());
			this->panel_5X5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_11))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Back_To_Main_From_Pipeline_Game
			// 
			this->btn_Back_To_Main_From_Pipeline_Game->Location = System::Drawing::Point(881, 42);
			this->btn_Back_To_Main_From_Pipeline_Game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Back_To_Main_From_Pipeline_Game->Name = L"btn_Back_To_Main_From_Pipeline_Game";
			this->btn_Back_To_Main_From_Pipeline_Game->Size = System::Drawing::Size(75, 23);
			this->btn_Back_To_Main_From_Pipeline_Game->TabIndex = 16;
			this->btn_Back_To_Main_From_Pipeline_Game->Text = L"BACK";
			this->btn_Back_To_Main_From_Pipeline_Game->UseVisualStyleBackColor = true;
			this->btn_Back_To_Main_From_Pipeline_Game->Click += gcnew System::EventHandler(this, &Pipeline_Game::btn_Back_To_Main_From_Pipeline_Game_Click);
			// 
			// panel_5X5
			// 
			this->panel_5X5->Controls->Add(this->PB5_55);
			this->panel_5X5->Controls->Add(this->PB5_51);
			this->panel_5X5->Controls->Add(this->PB5_52);
			this->panel_5X5->Controls->Add(this->PB5_53);
			this->panel_5X5->Controls->Add(this->PB5_54);
			this->panel_5X5->Controls->Add(this->PB5_45);
			this->panel_5X5->Controls->Add(this->PB5_35);
			this->panel_5X5->Controls->Add(this->PB5_15);
			this->panel_5X5->Controls->Add(this->PB5_25);
			this->panel_5X5->Controls->Add(this->PB5_41);
			this->panel_5X5->Controls->Add(this->PB5_42);
			this->panel_5X5->Controls->Add(this->PB5_43);
			this->panel_5X5->Controls->Add(this->PB5_44);
			this->panel_5X5->Controls->Add(this->PB5_34);
			this->panel_5X5->Controls->Add(this->PB5_12);
			this->panel_5X5->Controls->Add(this->PB5_13);
			this->panel_5X5->Controls->Add(this->PB5_14);
			this->panel_5X5->Controls->Add(this->PB5_21);
			this->panel_5X5->Controls->Add(this->PB5_22);
			this->panel_5X5->Controls->Add(this->PB5_23);
			this->panel_5X5->Controls->Add(this->PB5_24);
			this->panel_5X5->Controls->Add(this->PB5_31);
			this->panel_5X5->Controls->Add(this->PB5_32);
			this->panel_5X5->Controls->Add(this->PB5_33);
			this->panel_5X5->Controls->Add(this->PB5_11);
			this->panel_5X5->Location = System::Drawing::Point(193, 71);
			this->panel_5X5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_5X5->Name = L"panel_5X5";
			this->panel_5X5->Size = System::Drawing::Size(621, 578);
			this->panel_5X5->TabIndex = 34;
			// 
			// PB5_55
			// 
			this->PB5_55->Location = System::Drawing::Point(443, 380);
			this->PB5_55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_55->Name = L"PB5_55";
			this->PB5_55->Size = System::Drawing::Size(91, 90);
			this->PB5_55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_55->TabIndex = 40;
			this->PB5_55->TabStop = false;
			this->PB5_55->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_51
			// 
			this->PB5_51->Location = System::Drawing::Point(84, 380);
			this->PB5_51->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_51->Name = L"PB5_51";
			this->PB5_51->Size = System::Drawing::Size(91, 90);
			this->PB5_51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_51->TabIndex = 39;
			this->PB5_51->TabStop = false;
			this->PB5_51->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_52
			// 
			this->PB5_52->Location = System::Drawing::Point(173, 380);
			this->PB5_52->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_52->Name = L"PB5_52";
			this->PB5_52->Size = System::Drawing::Size(91, 90);
			this->PB5_52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_52->TabIndex = 38;
			this->PB5_52->TabStop = false;
			this->PB5_52->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_53
			// 
			this->PB5_53->Location = System::Drawing::Point(264, 380);
			this->PB5_53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_53->Name = L"PB5_53";
			this->PB5_53->Size = System::Drawing::Size(91, 90);
			this->PB5_53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_53->TabIndex = 37;
			this->PB5_53->TabStop = false;
			this->PB5_53->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_54
			// 
			this->PB5_54->Location = System::Drawing::Point(355, 380);
			this->PB5_54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_54->Name = L"PB5_54";
			this->PB5_54->Size = System::Drawing::Size(91, 90);
			this->PB5_54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_54->TabIndex = 36;
			this->PB5_54->TabStop = false;
			this->PB5_54->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_45
			// 
			this->PB5_45->Location = System::Drawing::Point(443, 290);
			this->PB5_45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_45->Name = L"PB5_45";
			this->PB5_45->Size = System::Drawing::Size(91, 90);
			this->PB5_45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_45->TabIndex = 35;
			this->PB5_45->TabStop = false;
			this->PB5_45->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_35
			// 
			this->PB5_35->Location = System::Drawing::Point(443, 199);
			this->PB5_35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_35->Name = L"PB5_35";
			this->PB5_35->Size = System::Drawing::Size(91, 90);
			this->PB5_35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_35->TabIndex = 34;
			this->PB5_35->TabStop = false;
			this->PB5_35->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_15
			// 
			this->PB5_15->Location = System::Drawing::Point(443, 20);
			this->PB5_15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_15->Name = L"PB5_15";
			this->PB5_15->Size = System::Drawing::Size(91, 90);
			this->PB5_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_15->TabIndex = 33;
			this->PB5_15->TabStop = false;
			this->PB5_15->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_25
			// 
			this->PB5_25->Location = System::Drawing::Point(443, 110);
			this->PB5_25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_25->Name = L"PB5_25";
			this->PB5_25->Size = System::Drawing::Size(91, 90);
			this->PB5_25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_25->TabIndex = 32;
			this->PB5_25->TabStop = false;
			this->PB5_25->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_41
			// 
			this->PB5_41->Location = System::Drawing::Point(84, 290);
			this->PB5_41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_41->Name = L"PB5_41";
			this->PB5_41->Size = System::Drawing::Size(91, 90);
			this->PB5_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_41->TabIndex = 31;
			this->PB5_41->TabStop = false;
			this->PB5_41->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_42
			// 
			this->PB5_42->Location = System::Drawing::Point(173, 290);
			this->PB5_42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_42->Name = L"PB5_42";
			this->PB5_42->Size = System::Drawing::Size(91, 90);
			this->PB5_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_42->TabIndex = 30;
			this->PB5_42->TabStop = false;
			this->PB5_42->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_43
			// 
			this->PB5_43->Location = System::Drawing::Point(264, 290);
			this->PB5_43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_43->Name = L"PB5_43";
			this->PB5_43->Size = System::Drawing::Size(91, 90);
			this->PB5_43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_43->TabIndex = 29;
			this->PB5_43->TabStop = false;
			this->PB5_43->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_44
			// 
			this->PB5_44->Location = System::Drawing::Point(355, 290);
			this->PB5_44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_44->Name = L"PB5_44";
			this->PB5_44->Size = System::Drawing::Size(91, 90);
			this->PB5_44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_44->TabIndex = 28;
			this->PB5_44->TabStop = false;
			this->PB5_44->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_34
			// 
			this->PB5_34->Location = System::Drawing::Point(355, 199);
			this->PB5_34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_34->Name = L"PB5_34";
			this->PB5_34->Size = System::Drawing::Size(91, 90);
			this->PB5_34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_34->TabIndex = 27;
			this->PB5_34->TabStop = false;
			this->PB5_34->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_12
			// 
			this->PB5_12->Location = System::Drawing::Point(173, 20);
			this->PB5_12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_12->Name = L"PB5_12";
			this->PB5_12->Size = System::Drawing::Size(91, 90);
			this->PB5_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_12->TabIndex = 26;
			this->PB5_12->TabStop = false;
			this->PB5_12->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_13
			// 
			this->PB5_13->Location = System::Drawing::Point(264, 20);
			this->PB5_13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_13->Name = L"PB5_13";
			this->PB5_13->Size = System::Drawing::Size(91, 90);
			this->PB5_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_13->TabIndex = 25;
			this->PB5_13->TabStop = false;
			this->PB5_13->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_14
			// 
			this->PB5_14->Location = System::Drawing::Point(355, 20);
			this->PB5_14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_14->Name = L"PB5_14";
			this->PB5_14->Size = System::Drawing::Size(91, 90);
			this->PB5_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_14->TabIndex = 24;
			this->PB5_14->TabStop = false;
			this->PB5_14->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_21
			// 
			this->PB5_21->Location = System::Drawing::Point(84, 110);
			this->PB5_21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_21->Name = L"PB5_21";
			this->PB5_21->Size = System::Drawing::Size(91, 90);
			this->PB5_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_21->TabIndex = 23;
			this->PB5_21->TabStop = false;
			this->PB5_21->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_22
			// 
			this->PB5_22->Location = System::Drawing::Point(173, 110);
			this->PB5_22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_22->Name = L"PB5_22";
			this->PB5_22->Size = System::Drawing::Size(91, 90);
			this->PB5_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_22->TabIndex = 22;
			this->PB5_22->TabStop = false;
			this->PB5_22->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_23
			// 
			this->PB5_23->Location = System::Drawing::Point(264, 110);
			this->PB5_23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_23->Name = L"PB5_23";
			this->PB5_23->Size = System::Drawing::Size(91, 90);
			this->PB5_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_23->TabIndex = 21;
			this->PB5_23->TabStop = false;
			this->PB5_23->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_24
			// 
			this->PB5_24->Location = System::Drawing::Point(355, 110);
			this->PB5_24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_24->Name = L"PB5_24";
			this->PB5_24->Size = System::Drawing::Size(91, 90);
			this->PB5_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_24->TabIndex = 20;
			this->PB5_24->TabStop = false;
			this->PB5_24->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_31
			// 
			this->PB5_31->Location = System::Drawing::Point(84, 199);
			this->PB5_31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_31->Name = L"PB5_31";
			this->PB5_31->Size = System::Drawing::Size(91, 90);
			this->PB5_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_31->TabIndex = 19;
			this->PB5_31->TabStop = false;
			this->PB5_31->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_32
			// 
			this->PB5_32->Location = System::Drawing::Point(173, 199);
			this->PB5_32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_32->Name = L"PB5_32";
			this->PB5_32->Size = System::Drawing::Size(91, 90);
			this->PB5_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_32->TabIndex = 18;
			this->PB5_32->TabStop = false;
			this->PB5_32->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_33
			// 
			this->PB5_33->Location = System::Drawing::Point(264, 199);
			this->PB5_33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_33->Name = L"PB5_33";
			this->PB5_33->Size = System::Drawing::Size(91, 90);
			this->PB5_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_33->TabIndex = 17;
			this->PB5_33->TabStop = false;
			this->PB5_33->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_11
			// 
			this->PB5_11->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->PB5_11->Location = System::Drawing::Point(84, 20);
			this->PB5_11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_11->Name = L"PB5_11";
			this->PB5_11->Size = System::Drawing::Size(91, 90);
			this->PB5_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_11->TabIndex = 16;
			this->PB5_11->TabStop = false;
			this->PB5_11->UseWaitCursor = true;
			this->PB5_11->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &Pipeline_Game::timer_Tick);
			// 
			// lbl_timer
			// 
			this->lbl_timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_timer->Location = System::Drawing::Point(856, 165);
			this->lbl_timer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_timer->Name = L"lbl_timer";
			this->lbl_timer->Size = System::Drawing::Size(77, 57);
			this->lbl_timer->TabIndex = 35;
			this->lbl_timer->Text = L"60";
			// 
			// lbl_star1
			// 
			this->lbl_star1->BackColor = System::Drawing::Color::Yellow;
			this->lbl_star1->Location = System::Drawing::Point(411, 16);
			this->lbl_star1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_star1->Name = L"lbl_star1";
			this->lbl_star1->Size = System::Drawing::Size(47, 31);
			this->lbl_star1->TabIndex = 36;
			this->lbl_star1->Text = L"1";
			// 
			// lbl_star2
			// 
			this->lbl_star2->BackColor = System::Drawing::Color::Yellow;
			this->lbl_star2->Location = System::Drawing::Point(465, 16);
			this->lbl_star2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_star2->Name = L"lbl_star2";
			this->lbl_star2->Size = System::Drawing::Size(47, 31);
			this->lbl_star2->TabIndex = 37;
			this->lbl_star2->Text = L"2";
			// 
			// lbl_star3
			// 
			this->lbl_star3->BackColor = System::Drawing::Color::Yellow;
			this->lbl_star3->Location = System::Drawing::Point(520, 16);
			this->lbl_star3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_star3->Name = L"lbl_star3";
			this->lbl_star3->Size = System::Drawing::Size(47, 31);
			this->lbl_star3->TabIndex = 38;
			this->lbl_star3->Text = L"3";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lbl_panelstar3);
			this->panel1->Controls->Add(this->lbl_panelstar2);
			this->panel1->Controls->Add(this->lbl_panelstar1);
			this->panel1->Controls->Add(this->btn_next);
			this->panel1->Controls->Add(this->btn_retry);
			this->panel1->Controls->Add(this->btn_level);
			this->panel1->Location = System::Drawing::Point(310, 224);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 272);
			this->panel1->TabIndex = 40;
			this->panel1->Visible = false;
			// 
			// lbl_panelstar3
			// 
			this->lbl_panelstar3->BackColor = System::Drawing::Color::Yellow;
			this->lbl_panelstar3->Location = System::Drawing::Point(210, 49);
			this->lbl_panelstar3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_panelstar3->Name = L"lbl_panelstar3";
			this->lbl_panelstar3->Size = System::Drawing::Size(47, 31);
			this->lbl_panelstar3->TabIndex = 41;
			this->lbl_panelstar3->Text = L"3";
			// 
			// lbl_panelstar2
			// 
			this->lbl_panelstar2->BackColor = System::Drawing::Color::Yellow;
			this->lbl_panelstar2->Location = System::Drawing::Point(155, 49);
			this->lbl_panelstar2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_panelstar2->Name = L"lbl_panelstar2";
			this->lbl_panelstar2->Size = System::Drawing::Size(47, 31);
			this->lbl_panelstar2->TabIndex = 40;
			this->lbl_panelstar2->Text = L"2";
			// 
			// lbl_panelstar1
			// 
			this->lbl_panelstar1->BackColor = System::Drawing::Color::Yellow;
			this->lbl_panelstar1->Location = System::Drawing::Point(101, 49);
			this->lbl_panelstar1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_panelstar1->Name = L"lbl_panelstar1";
			this->lbl_panelstar1->Size = System::Drawing::Size(47, 31);
			this->lbl_panelstar1->TabIndex = 39;
			this->lbl_panelstar1->Text = L"1";
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(254, 227);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(75, 23);
			this->btn_next->TabIndex = 2;
			this->btn_next->Text = L"Next";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &Pipeline_Game::btn_next_Click);
			// 
			// btn_retry
			// 
			this->btn_retry->Location = System::Drawing::Point(147, 227);
			this->btn_retry->Name = L"btn_retry";
			this->btn_retry->Size = System::Drawing::Size(75, 23);
			this->btn_retry->TabIndex = 1;
			this->btn_retry->Text = L"Retry";
			this->btn_retry->UseVisualStyleBackColor = true;
			this->btn_retry->Click += gcnew System::EventHandler(this, &Pipeline_Game::btn_retry_Click);
			// 
			// btn_level
			// 
			this->btn_level->Location = System::Drawing::Point(37, 227);
			this->btn_level->Name = L"btn_level";
			this->btn_level->Size = System::Drawing::Size(75, 23);
			this->btn_level->TabIndex = 0;
			this->btn_level->Text = L"Levels";
			this->btn_level->UseVisualStyleBackColor = true;
			this->btn_level->Click += gcnew System::EventHandler(this, &Pipeline_Game::btn_level_Click);
			// 
			// btn_helper
			// 
			this->btn_helper->Location = System::Drawing::Point(0, 0);
			this->btn_helper->Name = L"btn_helper";
			this->btn_helper->Size = System::Drawing::Size(20, 22);
			this->btn_helper->TabIndex = 41;
			this->btn_helper->UseVisualStyleBackColor = true;
			this->btn_helper->Click += gcnew System::EventHandler(this, &Pipeline_Game::Pipeline_Game_Load);
			// 
			// Pipeline_Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 721);
			this->Controls->Add(this->btn_helper);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbl_star3);
			this->Controls->Add(this->lbl_star2);
			this->Controls->Add(this->lbl_star1);
			this->Controls->Add(this->lbl_timer);
			this->Controls->Add(this->panel_5X5);
			this->Controls->Add(this->btn_Back_To_Main_From_Pipeline_Game);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Pipeline_Game";
			this->Text = L"Pipeline_Game";
			this->Load += gcnew System::EventHandler(this, &Pipeline_Game::Pipeline_Game_Load);
			this->panel_5X5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_11))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Form^ caller;
		static int level_of_puzzle;
		static int level_flag_of_puzzle;
		static int stu_ID;
		static int **visited;
		static int count_2=0;
		static vector<int> *v;
		static int **encoding_of_image_loaded;
		static char **type_of_image_loaded;
		static array<String^>^ answer_type ;
		static array<String^>^ answer_index ;
		static int count=0;

		static int Second = 60;
		static int stars = 3;
		static int next_flag = 0;

		static String ^ str_1 = "media\\Type_A[0].jpg";
		static Image^ Type_A_0 = gcnew Bitmap(str_1);
		static String ^ str_2 = "media\\Type_A[1].jpg";
		static Image^ Type_A_1 = gcnew Bitmap(str_2);
		static String ^ str_3 = "media\\Type_A[0].jpg";
		static Image^ Type_A_2 = gcnew Bitmap(str_3);
		static String ^ str_4 = "media\\Type_A[1].jpg";
		static Image^ Type_A_3 = gcnew Bitmap(str_4);

		static String ^ str1 = "media\\Type_B[0].jpg";
		static Image^ Type_B_0 = gcnew Bitmap(str1);
		static String ^ str2 = "media\\Type_B[1].jpg";
		static Image^ Type_B_1 = gcnew Bitmap(str2);
		static String ^ str3 = "media\\Type_B[2].jpg";
		static Image^ Type_B_2 = gcnew Bitmap(str3);
		static String ^ str4 = "media\\Type_B[3].jpg";
		static Image^ Type_B_3 = gcnew Bitmap(str4);

		static String ^ str__1 = "media\\Type_C[0].jpg";
		static Image^ Type_C_0 = gcnew Bitmap(str__1);
		static String ^ str__2 = "media\\Type_C[1].jpg";
		static Image^ Type_C_1 = gcnew Bitmap(str__2);
		static String ^ str__3 = "media\\Type_C[2].jpg";
		static Image^ Type_C_2 = gcnew Bitmap(str__3);
		static String ^ str__4 = "media\\Type_C[3].jpg";
		static Image^ Type_C_3 = gcnew Bitmap(str__4);

		static String ^ garbage = "media\\Type_G.jpg";
		static Image^ Type_G = gcnew Bitmap(garbage);
		//left=0
		//right=1;
		//up=2
		//down=3
		void making_encodings(int n){
			//MessageBox::Show("stage1");
			String^ vector_path = "";
			int length_of_path=0;
			for(int i=0;i<v->size();i++){
				if(v->at(i) == 0){
					vector_path+=L'L';
				}
				if(v->at(i) == 1){
					vector_path+=L'R';
				}
				if(v->at(i) == 2){
					vector_path+=L'U';
				}
				if(v->at(i) == 3){
					vector_path+=L'D';
				}
				//MessageBox::Show(System::Convert::ToString(v->at(i)));
			}
			//MessageBox::Show(vector_path);
			int prev_x=0;
			int prev_y=0;
			//1 for type A
			//2 for type B
			//3 for type C
			//-1 for garbage
			int **type_of_image=new int*[n];
			int **answer_matrix=new int*[n];
			for(int i=0;i<n;i++){
				answer_matrix[i]=new int[n];
				for(int j=0;j<n;j++){
					answer_matrix[i][j]=-1;
				}
			}
			for(int i=0;i<n;i++){
				type_of_image[i]=new int[n];
				for(int j=0;j<n;j++){
					type_of_image[i][j]=-1;
				}
			}
			//MessageBox::Show("stage2");
			type_of_image[0][0]=3;
			type_of_image[n-1][n-1]=3;
			//MessageBox::Show("stage3");
			if(v->at(0)==1){
				prev_x=0;
				prev_y=1;
				answer_matrix[0][0]=0;
			}
			if(v->at(0)==3){
				prev_x=1;
				prev_y=0;
				answer_matrix[0][0]=1;
			}
			int curr_x=0;
			int curr_y=0;
			if(v->at(0)==1){
				curr_y++;
			}
			if(v->at(0)==0){
				curr_y--;
			}
			if(v->at(0)==2){
				curr_x--;
			}
			if(v->at(0)==3){
				curr_x++;
			}
			for(int i=1;i<v->size();i++){
				if(v->at(i)==1){
					curr_y++;
				}
				if(v->at(i)==0){
					curr_y--;
				}
				if(v->at(i)==2){
					curr_x--;
				}
				if(v->at(i)==3){
					curr_x++;
				}
				//MessageBox::Show("stage4");
				int val2=v->at(i);
				int val1=v->at(i-1);
				if(val1==val2){
					type_of_image[prev_x][prev_y]=1;
					if(val1==1 || val1==0){
						answer_matrix[prev_x][prev_y]=0;
					}else{
						answer_matrix[prev_x][prev_y]=1;
					}
				}else{
					type_of_image[prev_x][prev_y]=2;
					if(val1==0 && val2==2){
						answer_matrix[prev_x][prev_y]=3;
					}
					if(val1==0 && val2==3){
						answer_matrix[prev_x][prev_y]=0;
					}
					if(val1==1 && val2==2){
						answer_matrix[prev_x][prev_y]=2;
					}
					if(val1==1 && val2==3){
						answer_matrix[prev_x][prev_y]=1;
					}
					if(val1==2 && val2==0){
						answer_matrix[prev_x][prev_y]=1;
					}
					if(val1==3 && val2==0){
						answer_matrix[prev_x][prev_y]=2;
					}
					if(val1==2 && val2==1){
						answer_matrix[prev_x][prev_y]=0;
					}
					if(val1==3 && val2==1){
						answer_matrix[prev_x][prev_y]=3;
					}
				}
				prev_x=curr_x;
				prev_y=curr_y;
			}
			if(v->at(v->size()-1)==1){
				answer_matrix[n-1][n-1]=2;
			}
			if(v->at(v->size()-1)==3){
				answer_matrix[n-1][n-1]=3;
			}
			//MessageBox::Show("type is coming");
			String^ type_of_image_string = "";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(type_of_image[i][j]==-1){
						type_of_image_string+=L'G';
					}
					if(type_of_image[i][j]==1){
						type_of_image_string+=L'A';
					}
					if(type_of_image[i][j]==2){
						type_of_image_string+=L'B';
					}
					if(type_of_image[i][j]==3){
						type_of_image_string+=L'C';
					}
					//type_of_image_string+=System::Convert::ToString(type_of_image[i][j]);
					//Debug::WriteLine(System::Convert::ToString(type_of_image[i][j]))
					//MessageBox::Show(System::Convert::ToString(type_of_image[i][j]));
					//cout<<type_of_image[i][j]<<" ";
				}
				//cout<<endl;
			}
			String^ Answer_Matrix = "";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(answer_matrix[i][j]==-1){
						Answer_Matrix+=System::Convert::ToString(5);
						continue;
					}
					//MessageBox::Show(System::Convert::ToString(answer_matrix[i][j]));
					Answer_Matrix+=System::Convert::ToString(answer_matrix[i][j]);
				}
			}
			length_of_path=v->size();
			//MessageBox::Show("type ended");

			//*******************************
			try{
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
				//Debug::WriteLine(firstname);
				//Debug::WriteLine("\n\n\n");
				String ^ insertString = "insert into Pipeline_Game([Type_Of_Image_String],[Path_Vector],[Answer_Matrix],[Length_of_Path_Vector]) VALUES('" +type_of_image_string+ "', '" +vector_path+ "', '" +Answer_Matrix+"', " +length_of_path+ ");";
				//Debug::WriteLine(insertString);
				//Debug::WriteLine("\n\n\n");

				//OleDbDataReader ^ dr;
				DB_Connection->Open();
				OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				//dr = cmd->ExecuteReader();
				//cmd->ExecuteNonQuery();
				cmd->Parameters->Add(gcnew OleDbParameter("@Type_Of_Image_String",type_of_image_string));
				cmd->Parameters->Add(gcnew OleDbParameter("@Path_Vector",vector_path));
				cmd->Parameters->Add(gcnew OleDbParameter("@Answer_Matrix",Answer_Matrix));
				cmd->Parameters->Add(gcnew OleDbParameter("@Length_of_Path_Vector",length_of_path));
				cmd->ExecuteNonQuery();
				DB_Connection->Close();

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		int func(int x,int y,int n,int turn){
			if(x<0 || x>n-1){
				return 0;
			}
			if(y<0 || y>n-1){
				return 0;
			}
			if(visited[x][y]==true){
				return 0;
			}else{
				visited[x][y]=true;
			}
			if(turn==0)
			{
				v->push_back(0);
			}
			if(turn==1)
			{
				v->push_back(1);
			}
			if(turn==2)
			{
				v->push_back(2);
			}
			if(turn==3)
			{
				v->push_back(3);
			}
			// cout<<"fnsein"<<endl;

			if(x==n-1 && y==n-1){
				/*if(count_2>=1){
				return 1;
				}*/
				count_2++;
				making_encodings(n);
				if(turn==0)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==1)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==2)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==3)
				{
					v->erase(v->begin()+v->size()-1);
				}

				return 1;
			}

			int l=func(x-1,y,n,0);
			if(l==1){
				visited[x-1][y]=false;
			}
			int r=func(x+1,y,n,1);
			if(r==1){
				visited[x+1][y]=false;
			}
			int u=func(x,y-1,n,2);
			if(u==1){
				visited[x][y-1]=false;
			}
			int d=func(x,y+1,n,3);
			if(d==1){
				visited[x][y+1]=false;
			}
			visited[x][y]=false;
			if(turn==0)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==1)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==2)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==3)
			{
				v->erase(v->begin()+v->size()-1);
			}
			return 0;
		}
	private: System::Void Pipeline_Game_Load(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
				 panel1->Visible=false;
				 btn_next->Visible=true;
				 next_flag=0;
				 MessageBox::Show(System::Convert::ToString(level_flag_of_puzzle));
				 int n=5;
				 encoding_of_image_loaded=new int*[n];
				 for(int i=0;i<n;i++){
					 encoding_of_image_loaded[i]=new int[n];
					 for(int j=0;j<n;j++){
						 encoding_of_image_loaded[i][j]=-1;
					 }
				 }
				 type_of_image_loaded=new char*[n];
				 for(int i=0;i<n;i++){
					 type_of_image_loaded[i]=new char[n];
					 for(int j=0;j<n;j++){
						 type_of_image_loaded[i][j]='G';
					 }

				 }
				 visited=new int*[n];
				 for(int i=0;i<n;i++){
					 visited[i]=new int[n];
					 for(int j=0;j<n;j++){
						 visited[i][j]=false;
					 }
				 }
				 v=new vector<int>[1000];
				 String^ dummy="";
				 String^ dummy2="";
				 //func(0,0,5,-1);
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 //EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN 6
					 //int stuID = 9622;
					 int rand_no = rand()%(34);
					 rand_no = rand_no+1;
					 int level_to_extract = level_flag_of_puzzle*1700;
					 level_to_extract+=((level_of_puzzle-1)*34)+rand_no;
					 MessageBox::Show(System::Convert::ToString(level_to_extract));
					 String ^ Sql = "Select [Type_Of_Image_String] from Pipeline_Game where [Level] = " + level_to_extract + ";";
					 String ^ Sq2 = "Select [Answer_Matrix] from Pipeline_Game where [Level] = " + level_to_extract + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					 con->Open();
					 dummy = (String^)(command->ExecuteScalar());
					 dummy2=(String^)(command2->ExecuteScalar());
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }



				 MessageBox::Show(dummy);
				 MessageBox::Show(dummy2);
				 array<PictureBox^,2> ^ image_array_5={ { PB5_11, PB5_12, PB5_13, PB5_14,PB5_15 }, { PB5_21, PB5_22, PB5_23, PB5_24,PB5_25 },{ PB5_31, PB5_32, PB5_33, PB5_34,PB5_35 }, { PB5_41, PB5_42, PB5_43, PB5_44,PB5_45 },{ PB5_51, PB5_52, PB5_53, PB5_54,PB5_55 } };

				 for(int i=0;i<n;i++){
					 for(int j=0;j<n;j++){
						 int random_position;
						 while(1){
							 random_position=rand()%4;
							 if(random_position!=System::Int64::Parse(System::Convert::ToString(dummy2[j+i*n]))){
								 break;
							 }
						 }
						 encoding_of_image_loaded[i][j]=random_position;
						 if(System::Convert::ToString(dummy[j+i*n])=="G"){
							 //MessageBox::Show("G");
							 int rand_orientation;
							 int rand_type=rand()%2;
							 if(rand_type==0){
								 rand_orientation=rand()%4;
								 if(rand_orientation==0){									 
									image_array_5[i,j]->Image=Type_A_0;
								 }
								 if(rand_orientation==1){
									  image_array_5[i,j]->Image=Type_A_1;
								 }
								 if(rand_orientation==2){
									 image_array_5[i,j]->Image=Type_A_2;								 
								 }
								 if(rand_orientation==3){
									 image_array_5[i,j]->Image=Type_A_3;

								 }
								 type_of_image_loaded[i][j]='A';
								 encoding_of_image_loaded[i][j]=(rand_orientation%2);
							 }else{
								 rand_orientation=rand()%4;
								 if(rand_orientation==0){
									  image_array_5[i,j]->Image=Type_B_0;								 
								 }
								 if(rand_orientation==1){
									  image_array_5[i,j]->Image=Type_B_1;								 
								 }
								 if(rand_orientation==2){
									 image_array_5[i,j]->Image=Type_B_2;
									 									 
								 }
								 if(rand_orientation==3){
								    image_array_5[i,j]->Image=Type_B_3;
																	 
								 }
								 type_of_image_loaded[i][j]='B';
								 encoding_of_image_loaded[i][j]=rand_orientation;

							 }


						 }
						 if(System::Convert::ToString(dummy[j+i*n])=="A"){
							 //MessageBox::Show("A");
							 if(random_position==0){
								  image_array_5[i,j]->Image=Type_A_0;
							 }
							 if(random_position==1){
								  image_array_5[i,j]->Image=Type_A_1;
							 }
							 if(random_position==2){
								 image_array_5[i,j]->Image=Type_A_2;
							 }
							 if(random_position==3){
								 image_array_5[i,j]->Image=Type_A_3;
							 }
							 type_of_image_loaded[i][j]='A';
							 encoding_of_image_loaded[i][j]=random_position%2;
						 }else{
							 if(System::Convert::ToString(dummy[j+i*n])=="B"){
								 //MessageBox::Show("B");
								 if(random_position==0){
									 image_array_5[i,j]->Image=Type_B_0;
								 }
								 if(random_position==1){
									 image_array_5[i,j]->Image=Type_B_1;
									 
								 }
								 if(random_position==2){
									 image_array_5[i,j]->Image=Type_B_2;
								 }
								 if(random_position==3){
									 image_array_5[i,j]->Image=Type_B_3;
								 }
								 type_of_image_loaded[i][j]='B';
								 encoding_of_image_loaded[i][j]=random_position;
							 }
							 if(System::Convert::ToString(dummy[j+i*n])=="C"){
								 //MessageBox::Show("A");
								 if(random_position==0){
									 image_array_5[i,j]->Image=Type_C_0;
									 
								 }
								 if(random_position==1){
									 image_array_5[i,j]->Image=Type_C_1;
									 
								 }
								 if(random_position==2){
									 image_array_5[i,j]->Image=Type_C_2;
									 
								 }
								 if(random_position==3){
									 image_array_5[i,j]->Image=Type_C_3;
									 
								 }
								 type_of_image_loaded[i][j]='C';
								 encoding_of_image_loaded[i][j]=random_position%4;
							 }
						 }
					 }
				 }
				 type_of_image_loaded[0][0]='C';
				 type_of_image_loaded[n-1][n-1]='C';
				 Second=60;
				 timer->Start();
				 /*try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select * from Pipeline_Game";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 String^ type_string =  reader[1]->ToString();
						 String^ answer_string = reader[4]->ToString();
						 answer_type[count]=type_string;
						 answer_index[count++]=answer_string;
						 Debug::WriteLine(System::Convert::ToString(count));
						 Debug::WriteLine(answer_type[count-1]);
						 Debug::WriteLine(answer_index[count-1]);
					 }
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }*/

			 }
	private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 PictureBox^ pb = ((PictureBox^)sender);
				 String^ var2 = pb->Name;
				 int I=System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1;
				 int J=System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1;
				 int n=5;

				 if(type_of_image_loaded[I][J]=='A'){
					 if(encoding_of_image_loaded[I][J]==0){
						 pb->Image=Type_A_1;
					 }
					 if(encoding_of_image_loaded[I][J]==1){
						 pb->Image=Type_A_2;
					 }
				 }else{
					 if(type_of_image_loaded[I][J]=='B'){
						 if(encoding_of_image_loaded[I][J]==0){
							 pb->Image=Type_B_1;
						 }
						 if(encoding_of_image_loaded[I][J]==1){
							 pb->Image=Type_B_2;
						 }
						 if(encoding_of_image_loaded[I][J]==2){
							 pb->Image=Type_B_3;
						 }
						 if(encoding_of_image_loaded[I][J]==3){
							 pb->Image=Type_B_0;
						 }
					 }
					 if(type_of_image_loaded[I][J]=='C'){
						 if(encoding_of_image_loaded[I][J]==0){
							 pb->Image=Type_C_1;
						 }
						 if(encoding_of_image_loaded[I][J]==1){
							 pb->Image=Type_C_2;
						 }
						 if(encoding_of_image_loaded[I][J]==2){
							 pb->Image=Type_C_3;
						 }
						 if(encoding_of_image_loaded[I][J]==3){
							 pb->Image=Type_C_0;
						 }
					 }
				 }
				 encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=(encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]+1)%4;
				 if(type_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=='A'){
					 encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=(encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1])%2;
				 }
				 String ^ var_A="";
				 String ^ var_T="";

				 for (int i=0;i<n;i++){
					 String^ str = gcnew String(type_of_image_loaded[i]);	
					 //MessageBox::Show(str->Substring(0,4));
					 for(int j=0;j<n;j++){

						 var_A+=(System::Convert::ToString(encoding_of_image_loaded[i][j]));
						 var_T+=str[j];
					 }
				 }
				 /* MessageBox::Show(var_A);
				 MessageBox::Show(var_T);*/

				 int isSolved=0;
				 for(int i=0;i<count;i++){
					 isSolved=1;
					 for(int j=0;j<n*n;j++){
						 if(answer_index[i][j]=='5'){
							 continue;
						 }
						 if(answer_index[i][j]!=var_A[j] || answer_type[i][j]!=var_T[j]){
							 //MessageBox::Show("rejected");
							 isSolved=0;
							 break;
						 }
					 }
					 if(isSolved==1){
						 timer->Stop();
						 MessageBox::Show("Correct answer");
						 String^ level_flag_string="";
						 if (level_flag_of_puzzle==0)
						 {
							 level_flag_string="Levels_Completed_Easy";
						 }
						 if (level_flag_of_puzzle==1)
						 {
							 level_flag_string="Levels_Completed_Medium";
						 }
						 if (level_flag_of_puzzle==2)
						 {
							 level_flag_string="Levels_Completed_Hard";
						 }
						 if (level_flag_of_puzzle==3)
						 {
							 level_flag_string="Levels_Completed_Advanced";
						 }
						 if (level_flag_of_puzzle==4)
						 {
							 level_flag_string="Levels_Completed_Expert";
						 }
						 //****************************update stud id according to caller form
						 stu_ID=1;
						 //****************
						 int current_level;
						 try {
							 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
							 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							 
							 String ^ Sq2 = "Select [" + level_flag_string +"] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
							 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
							 con->Open();
							 current_level=(int)(command2->ExecuteScalar());
							 
							 con->Close();
						 }
						 catch (Exception ^ ex) {
							 MessageBox::Show(ex->Message);
						 }

						 if(level_flag_of_puzzle==0){
							 try {
								 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
								 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
								 int stu_ID=1;
								 String^ scores="";
								 String ^ Sq2 = "Select [Score_Easy] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
								 con->Open();
								 scores=(String^)(command2->ExecuteScalar());
								 MessageBox::Show(System::Convert::ToString(current_level));
								 MessageBox::Show(System::Convert::ToString(level_of_puzzle));
								 if(level_of_puzzle<=current_level){
									 array<String^>^ arr = gcnew array<String^>(1000);
									 for(int i=0;i<1000;i++){
										 arr[i]="";
									 }
									 arr=scores->Split(',');
									 MessageBox::Show(System::Convert::ToString(stars));
									 arr[level_of_puzzle]=System::Convert::ToString(stars);
									 scores=",";
									 for(int i=1;i<current_level+1;i++){
										 MessageBox::Show(arr[i]);
										 scores+=(arr[i]+",");
									 }
									 MessageBox::Show(scores);
								 }else{
									 scores+=(System::Convert::ToString(stars))+",";
								 }
								 String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Easy] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
								 command3->ExecuteScalar();
								 con->Close();
							 }
							 catch (Exception ^ ex) {
								 MessageBox::Show(ex->Message);
							 }
						 }
						 if(level_flag_of_puzzle==1){
							 try {
								 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
								 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
								 int stu_ID=1;
								 String^ scores="";
								 String ^ Sq2 = "Select [Score_Medium] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
								 con->Open();
								 scores=(String^)(command2->ExecuteScalar());
								 MessageBox::Show(System::Convert::ToString(current_level));
								 MessageBox::Show(System::Convert::ToString(level_of_puzzle));
								 if(level_of_puzzle<=current_level){
									 array<String^>^ arr = gcnew array<String^>(1000);
									 for(int i=0;i<1000;i++){
										 arr[i]="";
									 }
									 arr=scores->Split(',');
									 MessageBox::Show(System::Convert::ToString(stars));
									 arr[level_of_puzzle]=System::Convert::ToString(stars);
									 scores=",";
									 for(int i=1;i<current_level+1;i++){
										 MessageBox::Show(arr[i]);
										 scores+=(arr[i]+",");
									 }
									 MessageBox::Show(scores);
								 }else{
									 scores+=(System::Convert::ToString(stars))+",";
								 }
								 String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Medium] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
								 command3->ExecuteScalar();
								 con->Close();
							 }
							 catch (Exception ^ ex) {
								 MessageBox::Show(ex->Message);
							 }
						 }
						 if(level_flag_of_puzzle==2){
							 try {
								 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
								 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
								 int stu_ID=1;
								 String^ scores="";
								 String ^ Sq2 = "Select [Score_Hard] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
								 con->Open();
								 scores=(String^)(command2->ExecuteScalar());
								 MessageBox::Show(System::Convert::ToString(current_level));
								 MessageBox::Show(System::Convert::ToString(level_of_puzzle));
								 if(level_of_puzzle<=current_level){
									 array<String^>^ arr = gcnew array<String^>(1000);
									 for(int i=0;i<1000;i++){
										 arr[i]="";
									 }
									 arr=scores->Split(',');
									 MessageBox::Show(System::Convert::ToString(stars));
									 arr[level_of_puzzle]=System::Convert::ToString(stars);
									 scores=",";
									 for(int i=1;i<current_level+1;i++){
										 MessageBox::Show(arr[i]);
										 scores+=(arr[i]+",");
									 }
									 MessageBox::Show(scores);
								 }else{
									 scores+=(System::Convert::ToString(stars))+",";
								 }
								 String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Hard] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
								 command3->ExecuteScalar();
								 con->Close();
							 }
							 catch (Exception ^ ex) {
								 MessageBox::Show(ex->Message);
							 }
						 }
						 if(level_flag_of_puzzle==3){
							 try {
								 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
								 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
								 int stu_ID=1;
								 String^ scores="";
								 String ^ Sq2 = "Select [Score_Advanced] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
								 con->Open();
								 scores=(String^)(command2->ExecuteScalar());
								 MessageBox::Show(System::Convert::ToString(current_level));
								 MessageBox::Show(System::Convert::ToString(level_of_puzzle));
								 if(level_of_puzzle<=current_level){
									 array<String^>^ arr = gcnew array<String^>(1000);
									 for(int i=0;i<1000;i++){
										 arr[i]="";
									 }
									 arr=scores->Split(',');
									 MessageBox::Show(System::Convert::ToString(stars));
									 arr[level_of_puzzle]=System::Convert::ToString(stars);
									 scores=",";
									 for(int i=1;i<current_level+1;i++){
										 MessageBox::Show(arr[i]);
										 scores+=(arr[i]+",");
									 }
									 MessageBox::Show(scores);
								 }else{
									 scores+=(System::Convert::ToString(stars))+",";
								 }
								 String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Advanced] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
								 command3->ExecuteScalar();
								 con->Close();
							 }
							 catch (Exception ^ ex) {
								 MessageBox::Show(ex->Message);
							 }
						 }
						 
						 if(level_flag_of_puzzle==4){
							 try {
								 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
								 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
								 int stu_ID=1;
								 String^ scores="";
								 String ^ Sq2 = "Select [Score_Expert] from Pipeline_Scoring where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
								 con->Open();
								 scores=(String^)(command2->ExecuteScalar());
								 MessageBox::Show(System::Convert::ToString(current_level));
								 MessageBox::Show(System::Convert::ToString(level_of_puzzle));
								 if(level_of_puzzle<=current_level){
									 array<String^>^ arr = gcnew array<String^>(1000);
									 for(int i=0;i<1000;i++){
										 arr[i]="";
									 }
									 arr=scores->Split(',');
									 MessageBox::Show(System::Convert::ToString(stars));
									 arr[level_of_puzzle]=System::Convert::ToString(stars);
									 scores=",";
									 for(int i=1;i<current_level+1;i++){
										 MessageBox::Show(arr[i]);
										 scores+=(arr[i]+",");
									 }
									 MessageBox::Show(scores);
								 }else{
									 scores+=(System::Convert::ToString(stars))+",";
								 }
								 String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Expert] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
								 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq3, con);
								 command3->ExecuteScalar();
								 con->Close();
							 }
							 catch (Exception ^ ex) {
								 MessageBox::Show(ex->Message);
							 }
						 }

						 if(level_of_puzzle<=current_level){
							 btn_Back_To_Main_From_Pipeline_Game->PerformClick();
							 return;
						 }

						 

						 try {
							 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
							 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							 String ^ Sql = "UPDATE Pipeline_Scoring SET [" + level_flag_string +"] = " + level_of_puzzle + " Where [StudentID] = " + stu_ID + ";";
							 MessageBox::Show(Sql);
							 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
							 con->Open();
							 command->ExecuteScalar();
							 con->Close();
						 }
						 catch (Exception ^ ex) {
							 MessageBox::Show(ex->Message);
						 }
						 //btn_Back_To_Main_From_Pipeline_Game->PerformClick();
						 panel1->Visible=true;						 
					 }
				 }
			 }
	private: System::Void btn_Back_To_Main_From_Pipeline_Game_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer->Stop();
				 caller->Show();
				 this->Hide();
				 
				
			 }

	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Second--;
				 lbl_timer->Text = System::Convert::ToString(Second);
				 if(Second==40)
				 {
					stars--;
					lbl_star3->BackColor = System::Drawing::Color::Empty;
					lbl_panelstar3->BackColor = System::Drawing::Color::Empty;
				 }
				 if(Second==30)
				 {
					stars--;
					lbl_star2->BackColor = System::Drawing::Color::Empty;
					lbl_panelstar2->BackColor = System::Drawing::Color::Empty;
				 }
				 if(Second==0)
				 {
					 timer->Stop();
					 lbl_panelstar1->BackColor = System::Drawing::Color::Empty;
					 MessageBox::Show("Times UP");
					 panel1->Visible=true;
					 btn_next->Visible=false;
					 //btn_Back_To_Main_From_Pipeline_Game->PerformClick();
				 }
				 
			 }
private: System::Void btn_level_Click(System::Object^  sender, System::EventArgs^  e) {
				btn_Back_To_Main_From_Pipeline_Game->PerformClick();
		 }
private: System::Void btn_retry_Click(System::Object^  sender, System::EventArgs^  e) {
			btn_helper->PerformClick(); 
		 }
private: System::Void btn_next_Click(System::Object^  sender, System::EventArgs^  e) {
				next_flag=1;
			 btn_Back_To_Main_From_Pipeline_Game->PerformClick();
		 }
};
}

