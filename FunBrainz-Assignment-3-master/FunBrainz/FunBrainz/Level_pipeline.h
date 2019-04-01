


#pragma once
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<vector>
#include<algorithm>
#include "Pipeline_Game.h"

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
	/// Summary for Level_pipeline
	/// </summary>
	public ref class Level_pipeline : public System::Windows::Forms::Form
	{
	public:
		Level_pipeline(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Level_pipeline(Form^ obj1)
		{
			InitializeComponent();
			caller = obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level_pipeline()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnl_Levels;
	protected: 
	private: System::Windows::Forms::Button^  btn_Expert;
	private: System::Windows::Forms::Button^  btn_Advanced;
	private: System::Windows::Forms::Button^  btn_Hard;
	private: System::Windows::Forms::Button^  btn_Medium;
	private: System::Windows::Forms::Button^  btn_Easy;
	private: System::Windows::Forms::Panel^  pnl_Levels_Displayed;
	private: System::Windows::Forms::Button^  btn_1;
	private: System::Windows::Forms::Button^  btn_47;
	private: System::Windows::Forms::Button^  btn_48;
	private: System::Windows::Forms::Button^  btn_49;
	private: System::Windows::Forms::Button^  btn_50;




	private: System::Windows::Forms::Button^  btn_46;

	private: System::Windows::Forms::Button^  btn_42;
	private: System::Windows::Forms::Button^  btn_43;
	private: System::Windows::Forms::Button^  btn_44;
	private: System::Windows::Forms::Button^  btn_45;





	private: System::Windows::Forms::Button^  btn_41;

	private: System::Windows::Forms::Button^  btn_37;
	private: System::Windows::Forms::Button^  btn_38;
	private: System::Windows::Forms::Button^  btn_39;
	private: System::Windows::Forms::Button^  btn_40;




	private: System::Windows::Forms::Button^  btn_36;

	private: System::Windows::Forms::Button^  btn_32;
	private: System::Windows::Forms::Button^  btn_33;
	private: System::Windows::Forms::Button^  btn_34;
	private: System::Windows::Forms::Button^  btn_35;




	private: System::Windows::Forms::Button^  btn_31;

	private: System::Windows::Forms::Button^  btn_27;
	private: System::Windows::Forms::Button^  btn_28;
	private: System::Windows::Forms::Button^  btn_29;
	private: System::Windows::Forms::Button^  btn_30;




	private: System::Windows::Forms::Button^  btn_26;

	private: System::Windows::Forms::Button^  btn_22;
	private: System::Windows::Forms::Button^  btn_23;
	private: System::Windows::Forms::Button^  btn_24;
	private: System::Windows::Forms::Button^  btn_25;





	private: System::Windows::Forms::Button^  btn_21;

	private: System::Windows::Forms::Button^  btn_17;
	private: System::Windows::Forms::Button^  btn_18;
	private: System::Windows::Forms::Button^  btn_19;
	private: System::Windows::Forms::Button^  btn_20;




	private: System::Windows::Forms::Button^  btn_16;

	private: System::Windows::Forms::Button^  btn_12;
	private: System::Windows::Forms::Button^  btn_13;
	private: System::Windows::Forms::Button^  btn_14;
	private: System::Windows::Forms::Button^  btn_15;





	private: System::Windows::Forms::Button^  btn_11;

	private: System::Windows::Forms::Button^  btn_7;
	private: System::Windows::Forms::Button^  btn_8;
	private: System::Windows::Forms::Button^  btn_9;
	private: System::Windows::Forms::Button^  btn_10;





	private: System::Windows::Forms::Button^  btn_6;

	private: System::Windows::Forms::Button^  btn_2;
	private: System::Windows::Forms::Button^  btn_3;
	private: System::Windows::Forms::Button^  btn_4;
	private: System::Windows::Forms::Button^  btn_5;





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
			this->pnl_Levels = (gcnew System::Windows::Forms::Panel());
			this->btn_Expert = (gcnew System::Windows::Forms::Button());
			this->btn_Advanced = (gcnew System::Windows::Forms::Button());
			this->btn_Hard = (gcnew System::Windows::Forms::Button());
			this->btn_Medium = (gcnew System::Windows::Forms::Button());
			this->btn_Easy = (gcnew System::Windows::Forms::Button());
			this->pnl_Levels_Displayed = (gcnew System::Windows::Forms::Panel());
			this->btn_47 = (gcnew System::Windows::Forms::Button());
			this->btn_48 = (gcnew System::Windows::Forms::Button());
			this->btn_49 = (gcnew System::Windows::Forms::Button());
			this->btn_50 = (gcnew System::Windows::Forms::Button());
			this->btn_46 = (gcnew System::Windows::Forms::Button());
			this->btn_42 = (gcnew System::Windows::Forms::Button());
			this->btn_43 = (gcnew System::Windows::Forms::Button());
			this->btn_44 = (gcnew System::Windows::Forms::Button());
			this->btn_45 = (gcnew System::Windows::Forms::Button());
			this->btn_41 = (gcnew System::Windows::Forms::Button());
			this->btn_37 = (gcnew System::Windows::Forms::Button());
			this->btn_38 = (gcnew System::Windows::Forms::Button());
			this->btn_39 = (gcnew System::Windows::Forms::Button());
			this->btn_40 = (gcnew System::Windows::Forms::Button());
			this->btn_36 = (gcnew System::Windows::Forms::Button());
			this->btn_32 = (gcnew System::Windows::Forms::Button());
			this->btn_33 = (gcnew System::Windows::Forms::Button());
			this->btn_34 = (gcnew System::Windows::Forms::Button());
			this->btn_35 = (gcnew System::Windows::Forms::Button());
			this->btn_31 = (gcnew System::Windows::Forms::Button());
			this->btn_27 = (gcnew System::Windows::Forms::Button());
			this->btn_28 = (gcnew System::Windows::Forms::Button());
			this->btn_29 = (gcnew System::Windows::Forms::Button());
			this->btn_30 = (gcnew System::Windows::Forms::Button());
			this->btn_26 = (gcnew System::Windows::Forms::Button());
			this->btn_22 = (gcnew System::Windows::Forms::Button());
			this->btn_23 = (gcnew System::Windows::Forms::Button());
			this->btn_24 = (gcnew System::Windows::Forms::Button());
			this->btn_25 = (gcnew System::Windows::Forms::Button());
			this->btn_21 = (gcnew System::Windows::Forms::Button());
			this->btn_17 = (gcnew System::Windows::Forms::Button());
			this->btn_18 = (gcnew System::Windows::Forms::Button());
			this->btn_19 = (gcnew System::Windows::Forms::Button());
			this->btn_20 = (gcnew System::Windows::Forms::Button());
			this->btn_16 = (gcnew System::Windows::Forms::Button());
			this->btn_12 = (gcnew System::Windows::Forms::Button());
			this->btn_13 = (gcnew System::Windows::Forms::Button());
			this->btn_14 = (gcnew System::Windows::Forms::Button());
			this->btn_15 = (gcnew System::Windows::Forms::Button());
			this->btn_11 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_10 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->pnl_Levels->SuspendLayout();
			this->pnl_Levels_Displayed->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_Levels
			// 
			this->pnl_Levels->Controls->Add(this->btn_Expert);
			this->pnl_Levels->Controls->Add(this->btn_Advanced);
			this->pnl_Levels->Controls->Add(this->btn_Hard);
			this->pnl_Levels->Controls->Add(this->btn_Medium);
			this->pnl_Levels->Controls->Add(this->btn_Easy);
			this->pnl_Levels->Location = System::Drawing::Point(12, 30);
			this->pnl_Levels->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_Levels->Name = L"pnl_Levels";
			this->pnl_Levels->Size = System::Drawing::Size(269, 426);
			this->pnl_Levels->TabIndex = 5;
			// 
			// btn_Expert
			// 
			this->btn_Expert->Location = System::Drawing::Point(15, 335);
			this->btn_Expert->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Expert->Name = L"btn_Expert";
			this->btn_Expert->Size = System::Drawing::Size(245, 66);
			this->btn_Expert->TabIndex = 9;
			this->btn_Expert->Text = L"EXPERT";
			this->btn_Expert->UseVisualStyleBackColor = true;
			this->btn_Expert->Click += gcnew System::EventHandler(this, &Level_pipeline::btn_Expert_Click);
			// 
			// btn_Advanced
			// 
			this->btn_Advanced->Location = System::Drawing::Point(15, 262);
			this->btn_Advanced->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Advanced->Name = L"btn_Advanced";
			this->btn_Advanced->Size = System::Drawing::Size(245, 66);
			this->btn_Advanced->TabIndex = 8;
			this->btn_Advanced->Text = L"ADVANCED";
			this->btn_Advanced->UseVisualStyleBackColor = true;
			this->btn_Advanced->Click += gcnew System::EventHandler(this, &Level_pipeline::btn_Advanced_Click);
			// 
			// btn_Hard
			// 
			this->btn_Hard->Location = System::Drawing::Point(15, 190);
			this->btn_Hard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Hard->Name = L"btn_Hard";
			this->btn_Hard->Size = System::Drawing::Size(245, 66);
			this->btn_Hard->TabIndex = 7;
			this->btn_Hard->Text = L"HARD";
			this->btn_Hard->UseVisualStyleBackColor = true;
			this->btn_Hard->Click += gcnew System::EventHandler(this, &Level_pipeline::btn_Hard_Click);
			// 
			// btn_Medium
			// 
			this->btn_Medium->Location = System::Drawing::Point(15, 116);
			this->btn_Medium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Medium->Name = L"btn_Medium";
			this->btn_Medium->Size = System::Drawing::Size(245, 66);
			this->btn_Medium->TabIndex = 6;
			this->btn_Medium->Text = L"MEDIUM";
			this->btn_Medium->UseVisualStyleBackColor = true;
			this->btn_Medium->Click += gcnew System::EventHandler(this, &Level_pipeline::btn_Medium_Click);
			// 
			// btn_Easy
			// 
			this->btn_Easy->Location = System::Drawing::Point(15, 43);
			this->btn_Easy->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Easy->Name = L"btn_Easy";
			this->btn_Easy->Size = System::Drawing::Size(245, 66);
			this->btn_Easy->TabIndex = 5;
			this->btn_Easy->Text = L"EASY";
			this->btn_Easy->UseVisualStyleBackColor = true;
			this->btn_Easy->Click += gcnew System::EventHandler(this, &Level_pipeline::btn_Easy_Click);
			// 
			// pnl_Levels_Displayed
			// 
			this->pnl_Levels_Displayed->Controls->Add(this->btn_47);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_48);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_49);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_50);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_46);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_42);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_43);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_44);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_45);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_41);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_37);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_38);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_39);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_40);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_36);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_32);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_33);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_34);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_35);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_31);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_27);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_28);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_29);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_30);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_26);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_22);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_23);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_24);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_25);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_21);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_17);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_18);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_19);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_20);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_16);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_12);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_13);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_14);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_15);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_11);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_7);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_8);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_9);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_10);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_6);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_2);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_3);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_4);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_5);
			this->pnl_Levels_Displayed->Controls->Add(this->btn_1);
			this->pnl_Levels_Displayed->Location = System::Drawing::Point(299, 12);
			this->pnl_Levels_Displayed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_Levels_Displayed->Name = L"pnl_Levels_Displayed";
			this->pnl_Levels_Displayed->Size = System::Drawing::Size(696, 510);
			this->pnl_Levels_Displayed->TabIndex = 6;
			// 
			// btn_47
			// 
			this->btn_47->Location = System::Drawing::Point(360, 246);
			this->btn_47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_47->Name = L"btn_47";
			this->btn_47->Size = System::Drawing::Size(47, 48);
			this->btn_47->TabIndex = 79;
			this->btn_47->Text = L"47";
			this->btn_47->UseVisualStyleBackColor = true;
			this->btn_47->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_48
			// 
			this->btn_48->Location = System::Drawing::Point(412, 246);
			this->btn_48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_48->Name = L"btn_48";
			this->btn_48->Size = System::Drawing::Size(47, 48);
			this->btn_48->TabIndex = 78;
			this->btn_48->Text = L"48";
			this->btn_48->UseVisualStyleBackColor = true;
			this->btn_48->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_49
			// 
			this->btn_49->Location = System::Drawing::Point(467, 246);
			this->btn_49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_49->Name = L"btn_49";
			this->btn_49->Size = System::Drawing::Size(47, 48);
			this->btn_49->TabIndex = 77;
			this->btn_49->Text = L"49";
			this->btn_49->UseVisualStyleBackColor = true;
			this->btn_49->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_50
			// 
			this->btn_50->Location = System::Drawing::Point(519, 246);
			this->btn_50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_50->Name = L"btn_50";
			this->btn_50->Size = System::Drawing::Size(47, 48);
			this->btn_50->TabIndex = 76;
			this->btn_50->Text = L"50";
			this->btn_50->UseVisualStyleBackColor = true;
			this->btn_50->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_46
			// 
			this->btn_46->Location = System::Drawing::Point(307, 246);
			this->btn_46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_46->Name = L"btn_46";
			this->btn_46->Size = System::Drawing::Size(47, 48);
			this->btn_46->TabIndex = 75;
			this->btn_46->Text = L"46";
			this->btn_46->UseVisualStyleBackColor = true;
			this->btn_46->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_42
			// 
			this->btn_42->Location = System::Drawing::Point(95, 246);
			this->btn_42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_42->Name = L"btn_42";
			this->btn_42->Size = System::Drawing::Size(47, 48);
			this->btn_42->TabIndex = 74;
			this->btn_42->Text = L"42";
			this->btn_42->UseVisualStyleBackColor = true;
			this->btn_42->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_43
			// 
			this->btn_43->Location = System::Drawing::Point(148, 246);
			this->btn_43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_43->Name = L"btn_43";
			this->btn_43->Size = System::Drawing::Size(47, 48);
			this->btn_43->TabIndex = 73;
			this->btn_43->Text = L"43";
			this->btn_43->UseVisualStyleBackColor = true;
			this->btn_43->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_44
			// 
			this->btn_44->Location = System::Drawing::Point(201, 246);
			this->btn_44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_44->Name = L"btn_44";
			this->btn_44->Size = System::Drawing::Size(47, 48);
			this->btn_44->TabIndex = 72;
			this->btn_44->Text = L"44";
			this->btn_44->UseVisualStyleBackColor = true;
			this->btn_44->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_45
			// 
			this->btn_45->Location = System::Drawing::Point(253, 246);
			this->btn_45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_45->Name = L"btn_45";
			this->btn_45->Size = System::Drawing::Size(47, 48);
			this->btn_45->TabIndex = 71;
			this->btn_45->Text = L"45";
			this->btn_45->UseVisualStyleBackColor = true;
			this->btn_45->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_41
			// 
			this->btn_41->Location = System::Drawing::Point(43, 246);
			this->btn_41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_41->Name = L"btn_41";
			this->btn_41->Size = System::Drawing::Size(47, 48);
			this->btn_41->TabIndex = 70;
			this->btn_41->Text = L"41";
			this->btn_41->UseVisualStyleBackColor = true;
			this->btn_41->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_37
			// 
			this->btn_37->Location = System::Drawing::Point(360, 192);
			this->btn_37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_37->Name = L"btn_37";
			this->btn_37->Size = System::Drawing::Size(47, 48);
			this->btn_37->TabIndex = 69;
			this->btn_37->Text = L"37";
			this->btn_37->UseVisualStyleBackColor = true;
			this->btn_37->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_38
			// 
			this->btn_38->Location = System::Drawing::Point(413, 192);
			this->btn_38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_38->Name = L"btn_38";
			this->btn_38->Size = System::Drawing::Size(47, 48);
			this->btn_38->TabIndex = 68;
			this->btn_38->Text = L"38";
			this->btn_38->UseVisualStyleBackColor = true;
			this->btn_38->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_39
			// 
			this->btn_39->Location = System::Drawing::Point(467, 192);
			this->btn_39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_39->Name = L"btn_39";
			this->btn_39->Size = System::Drawing::Size(47, 48);
			this->btn_39->TabIndex = 67;
			this->btn_39->Text = L"39";
			this->btn_39->UseVisualStyleBackColor = true;
			this->btn_39->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_40
			// 
			this->btn_40->Location = System::Drawing::Point(519, 192);
			this->btn_40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_40->Name = L"btn_40";
			this->btn_40->Size = System::Drawing::Size(47, 48);
			this->btn_40->TabIndex = 66;
			this->btn_40->Text = L"40";
			this->btn_40->UseVisualStyleBackColor = true;
			this->btn_40->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_36
			// 
			this->btn_36->Location = System::Drawing::Point(307, 192);
			this->btn_36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_36->Name = L"btn_36";
			this->btn_36->Size = System::Drawing::Size(47, 48);
			this->btn_36->TabIndex = 65;
			this->btn_36->Text = L"36";
			this->btn_36->UseVisualStyleBackColor = true;
			this->btn_36->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_32
			// 
			this->btn_32->Location = System::Drawing::Point(95, 192);
			this->btn_32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_32->Name = L"btn_32";
			this->btn_32->Size = System::Drawing::Size(47, 48);
			this->btn_32->TabIndex = 64;
			this->btn_32->Text = L"32";
			this->btn_32->UseVisualStyleBackColor = true;
			this->btn_32->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_33
			// 
			this->btn_33->Location = System::Drawing::Point(148, 192);
			this->btn_33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_33->Name = L"btn_33";
			this->btn_33->Size = System::Drawing::Size(47, 48);
			this->btn_33->TabIndex = 63;
			this->btn_33->Text = L"33";
			this->btn_33->UseVisualStyleBackColor = true;
			this->btn_33->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_34
			// 
			this->btn_34->Location = System::Drawing::Point(201, 192);
			this->btn_34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_34->Name = L"btn_34";
			this->btn_34->Size = System::Drawing::Size(47, 48);
			this->btn_34->TabIndex = 62;
			this->btn_34->Text = L"34";
			this->btn_34->UseVisualStyleBackColor = true;
			this->btn_34->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_35
			// 
			this->btn_35->Location = System::Drawing::Point(253, 192);
			this->btn_35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_35->Name = L"btn_35";
			this->btn_35->Size = System::Drawing::Size(47, 48);
			this->btn_35->TabIndex = 61;
			this->btn_35->Text = L"35";
			this->btn_35->UseVisualStyleBackColor = true;
			this->btn_35->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_31
			// 
			this->btn_31->Location = System::Drawing::Point(43, 192);
			this->btn_31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_31->Name = L"btn_31";
			this->btn_31->Size = System::Drawing::Size(47, 48);
			this->btn_31->TabIndex = 60;
			this->btn_31->Text = L"31";
			this->btn_31->UseVisualStyleBackColor = true;
			this->btn_31->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_27
			// 
			this->btn_27->Location = System::Drawing::Point(360, 138);
			this->btn_27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_27->Name = L"btn_27";
			this->btn_27->Size = System::Drawing::Size(47, 48);
			this->btn_27->TabIndex = 59;
			this->btn_27->Text = L"27";
			this->btn_27->UseVisualStyleBackColor = true;
			this->btn_27->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_28
			// 
			this->btn_28->Location = System::Drawing::Point(413, 138);
			this->btn_28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_28->Name = L"btn_28";
			this->btn_28->Size = System::Drawing::Size(47, 48);
			this->btn_28->TabIndex = 58;
			this->btn_28->Text = L"28";
			this->btn_28->UseVisualStyleBackColor = true;
			this->btn_28->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_29
			// 
			this->btn_29->Location = System::Drawing::Point(467, 138);
			this->btn_29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_29->Name = L"btn_29";
			this->btn_29->Size = System::Drawing::Size(47, 48);
			this->btn_29->TabIndex = 57;
			this->btn_29->Text = L"29";
			this->btn_29->UseVisualStyleBackColor = true;
			this->btn_29->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_30
			// 
			this->btn_30->Location = System::Drawing::Point(519, 138);
			this->btn_30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_30->Name = L"btn_30";
			this->btn_30->Size = System::Drawing::Size(47, 48);
			this->btn_30->TabIndex = 56;
			this->btn_30->Text = L"30";
			this->btn_30->UseVisualStyleBackColor = true;
			this->btn_30->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_26
			// 
			this->btn_26->Location = System::Drawing::Point(307, 138);
			this->btn_26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_26->Name = L"btn_26";
			this->btn_26->Size = System::Drawing::Size(47, 48);
			this->btn_26->TabIndex = 55;
			this->btn_26->Text = L"26";
			this->btn_26->UseVisualStyleBackColor = true;
			this->btn_26->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_22
			// 
			this->btn_22->Location = System::Drawing::Point(95, 138);
			this->btn_22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_22->Name = L"btn_22";
			this->btn_22->Size = System::Drawing::Size(47, 48);
			this->btn_22->TabIndex = 54;
			this->btn_22->Text = L"22";
			this->btn_22->UseVisualStyleBackColor = true;
			this->btn_22->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_23
			// 
			this->btn_23->Location = System::Drawing::Point(148, 138);
			this->btn_23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_23->Name = L"btn_23";
			this->btn_23->Size = System::Drawing::Size(47, 48);
			this->btn_23->TabIndex = 53;
			this->btn_23->Text = L"23";
			this->btn_23->UseVisualStyleBackColor = true;
			this->btn_23->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_24
			// 
			this->btn_24->Location = System::Drawing::Point(201, 138);
			this->btn_24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_24->Name = L"btn_24";
			this->btn_24->Size = System::Drawing::Size(47, 48);
			this->btn_24->TabIndex = 52;
			this->btn_24->Text = L"24";
			this->btn_24->UseVisualStyleBackColor = true;
			this->btn_24->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_25
			// 
			this->btn_25->Location = System::Drawing::Point(253, 138);
			this->btn_25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_25->Name = L"btn_25";
			this->btn_25->Size = System::Drawing::Size(47, 48);
			this->btn_25->TabIndex = 51;
			this->btn_25->Text = L"25";
			this->btn_25->UseVisualStyleBackColor = true;
			this->btn_25->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_21
			// 
			this->btn_21->Location = System::Drawing::Point(43, 138);
			this->btn_21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_21->Name = L"btn_21";
			this->btn_21->Size = System::Drawing::Size(47, 48);
			this->btn_21->TabIndex = 50;
			this->btn_21->Text = L"21";
			this->btn_21->UseVisualStyleBackColor = true;
			this->btn_21->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_17
			// 
			this->btn_17->Location = System::Drawing::Point(360, 86);
			this->btn_17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_17->Name = L"btn_17";
			this->btn_17->Size = System::Drawing::Size(47, 48);
			this->btn_17->TabIndex = 49;
			this->btn_17->Text = L"17";
			this->btn_17->UseVisualStyleBackColor = true;
			this->btn_17->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_18
			// 
			this->btn_18->Location = System::Drawing::Point(413, 86);
			this->btn_18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_18->Name = L"btn_18";
			this->btn_18->Size = System::Drawing::Size(47, 48);
			this->btn_18->TabIndex = 48;
			this->btn_18->Text = L"18";
			this->btn_18->UseVisualStyleBackColor = true;
			this->btn_18->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_19
			// 
			this->btn_19->Location = System::Drawing::Point(467, 86);
			this->btn_19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_19->Name = L"btn_19";
			this->btn_19->Size = System::Drawing::Size(47, 48);
			this->btn_19->TabIndex = 47;
			this->btn_19->Text = L"19";
			this->btn_19->UseVisualStyleBackColor = true;
			this->btn_19->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_20
			// 
			this->btn_20->Location = System::Drawing::Point(519, 86);
			this->btn_20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_20->Name = L"btn_20";
			this->btn_20->Size = System::Drawing::Size(47, 48);
			this->btn_20->TabIndex = 46;
			this->btn_20->Text = L"20";
			this->btn_20->UseVisualStyleBackColor = true;
			this->btn_20->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_16
			// 
			this->btn_16->Location = System::Drawing::Point(307, 86);
			this->btn_16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_16->Name = L"btn_16";
			this->btn_16->Size = System::Drawing::Size(47, 48);
			this->btn_16->TabIndex = 45;
			this->btn_16->Text = L"16";
			this->btn_16->UseVisualStyleBackColor = true;
			this->btn_16->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_12
			// 
			this->btn_12->Location = System::Drawing::Point(95, 86);
			this->btn_12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_12->Name = L"btn_12";
			this->btn_12->Size = System::Drawing::Size(47, 48);
			this->btn_12->TabIndex = 44;
			this->btn_12->Text = L"12";
			this->btn_12->UseVisualStyleBackColor = true;
			this->btn_12->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_13
			// 
			this->btn_13->Location = System::Drawing::Point(148, 86);
			this->btn_13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_13->Name = L"btn_13";
			this->btn_13->Size = System::Drawing::Size(47, 48);
			this->btn_13->TabIndex = 43;
			this->btn_13->Text = L"13";
			this->btn_13->UseVisualStyleBackColor = true;
			this->btn_13->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_14
			// 
			this->btn_14->Location = System::Drawing::Point(201, 86);
			this->btn_14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_14->Name = L"btn_14";
			this->btn_14->Size = System::Drawing::Size(47, 48);
			this->btn_14->TabIndex = 42;
			this->btn_14->Text = L"14";
			this->btn_14->UseVisualStyleBackColor = true;
			this->btn_14->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_15
			// 
			this->btn_15->Location = System::Drawing::Point(253, 86);
			this->btn_15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_15->Name = L"btn_15";
			this->btn_15->Size = System::Drawing::Size(47, 48);
			this->btn_15->TabIndex = 41;
			this->btn_15->Text = L"15";
			this->btn_15->UseVisualStyleBackColor = true;
			this->btn_15->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_11
			// 
			this->btn_11->Location = System::Drawing::Point(43, 86);
			this->btn_11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_11->Name = L"btn_11";
			this->btn_11->Size = System::Drawing::Size(47, 48);
			this->btn_11->TabIndex = 40;
			this->btn_11->Text = L"11";
			this->btn_11->UseVisualStyleBackColor = true;
			this->btn_11->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_7
			// 
			this->btn_7->Location = System::Drawing::Point(360, 32);
			this->btn_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(47, 48);
			this->btn_7->TabIndex = 9;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_8
			// 
			this->btn_8->Location = System::Drawing::Point(413, 32);
			this->btn_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(47, 48);
			this->btn_8->TabIndex = 8;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_9
			// 
			this->btn_9->Location = System::Drawing::Point(467, 32);
			this->btn_9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(47, 48);
			this->btn_9->TabIndex = 7;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_10
			// 
			this->btn_10->Location = System::Drawing::Point(519, 32);
			this->btn_10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_10->Name = L"btn_10";
			this->btn_10->Size = System::Drawing::Size(47, 48);
			this->btn_10->TabIndex = 6;
			this->btn_10->Text = L"10";
			this->btn_10->UseVisualStyleBackColor = true;
			this->btn_10->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_6
			// 
			this->btn_6->Location = System::Drawing::Point(307, 32);
			this->btn_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(47, 48);
			this->btn_6->TabIndex = 5;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_2
			// 
			this->btn_2->Location = System::Drawing::Point(95, 32);
			this->btn_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(47, 48);
			this->btn_2->TabIndex = 4;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_3
			// 
			this->btn_3->Location = System::Drawing::Point(148, 32);
			this->btn_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(47, 48);
			this->btn_3->TabIndex = 3;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_4
			// 
			this->btn_4->Location = System::Drawing::Point(201, 32);
			this->btn_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(47, 48);
			this->btn_4->TabIndex = 2;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_5
			// 
			this->btn_5->Location = System::Drawing::Point(253, 32);
			this->btn_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(47, 48);
			this->btn_5->TabIndex = 1;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// btn_1
			// 
			this->btn_1->Location = System::Drawing::Point(43, 32);
			this->btn_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(47, 48);
			this->btn_1->TabIndex = 0;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &Level_pipeline::level_click);
			// 
			// Level_pipeline
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 721);
			this->Controls->Add(this->pnl_Levels_Displayed);
			this->Controls->Add(this->pnl_Levels);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Level_pipeline";
			this->Text = L"Level_pipeline";
			this->Load += gcnew System::EventHandler(this, &Level_pipeline::Level_pipeline_Load);
			this->Shown += gcnew System::EventHandler(this, &Level_pipeline::Level_pipeline_Shown);
			this->VisibleChanged += gcnew System::EventHandler(this, &Level_pipeline::Level_pipeline_VisibleChanged);
			this->pnl_Levels->ResumeLayout(false);
			this->pnl_Levels_Displayed->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Form^ caller;
		static int level_flag=0;
		static array<String^>^ answer_type = gcnew array<String^>(10000);
		static array<String^>^ answer_index = gcnew array<String^>(10000);
		static int count=0;
		static int flag=0;
		
	public: void func()
			{
				this->Hide();
			}
	private: System::Void Level_pipeline_Load(System::Object^  sender, System::EventArgs^  e) {
				
				try {
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
				}
				btn_Easy->PerformClick();
			 }


private: System::Void level_click(System::Object^  sender, System::EventArgs^  e) {
			 Button^ btn = ((Button^)sender);
			 int level = System::Int64::Parse(btn->Text);	
			 Pipeline_Game^ form = gcnew Pipeline_Game(this,level,level_flag,answer_type,answer_index,count);
			 form->Show();
			 this->Hide();
		 }
private: System::Void btn_Easy_Click(System::Object^  sender, System::EventArgs^  e) {
			 level_flag=0;
			 int levels_completed = 0;
			 try {
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
				 
				 int stuID = 1;

				 String ^ Sql = "Select [Levels_Completed_Easy] from Pipeline_Scoring where [StudentID] = " + stuID + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);				 
				 con->Open();
				 levels_completed = (int)(command->ExecuteScalar());
				 Debug::WriteLine("level "+System::Convert::ToString(levels_completed));
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }
			 
			 for (int i=0;i<levels_completed;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 level_btn->BackColor = System::Drawing::Color::Green;
				 level_btn->Enabled = true;
			 }
			 
			 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(levels_completed+1)];
			 level_btn->BackColor = System::Drawing::Color::Red;
			 level_btn->Enabled = true;
			 for (int i=levels_completed+1;i<50;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 //MessageBox::Show( ((Button^)level_btn)->Text);
				 ((Button^)level_btn)->Enabled=false;
				 level_btn->BackColor = System::Drawing::Color::Empty;
			 }
		 }
private: System::Void btn_Medium_Click(System::Object^  sender, System::EventArgs^  e) {
			 level_flag=1;
			 int levels_completed = 0;
			 try {
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 int stuID = 1;

				 String ^ Sql = "Select [Levels_Completed_Medium] from Pipeline_Scoring where [StudentID] = " + stuID + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);				 
				 con->Open();
				 levels_completed = (int)(command->ExecuteScalar());
				 Debug::WriteLine("level "+System::Convert::ToString(levels_completed));
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }

			 for (int i=0;i<levels_completed;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 level_btn->BackColor = System::Drawing::Color::Green;
				 level_btn->Enabled = true;
			 }
			 
			 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(levels_completed+1)];
			 level_btn->BackColor = System::Drawing::Color::Red;
			 level_btn->Enabled = true;
			 for (int i=levels_completed+1;i<50;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 //MessageBox::Show( ((Button^)level_btn)->Text);
				 ((Button^)level_btn)->Enabled=false;
				 level_btn->BackColor = System::Drawing::Color::Empty;
			 }
		 }
private: System::Void btn_Hard_Click(System::Object^  sender, System::EventArgs^  e) {
			 level_flag=2;
			 int levels_completed = 0;
			 try {
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 int stuID = 1;

				 String ^ Sql = "Select [Levels_Completed_Hard] from Pipeline_Scoring where [StudentID] = " + stuID + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);				 
				 con->Open();
				 levels_completed = (int)(command->ExecuteScalar());
				 Debug::WriteLine("level "+System::Convert::ToString(levels_completed));
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }

			 for (int i=0;i<levels_completed;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 level_btn->BackColor = System::Drawing::Color::Green;
				 level_btn->Enabled = true;
			 }
			 
			 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(levels_completed+1)];
			 level_btn->BackColor = System::Drawing::Color::Red;
			 level_btn->Enabled = true;
			 for (int i=levels_completed+1;i<50;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 //MessageBox::Show( ((Button^)level_btn)->Text);
				 ((Button^)level_btn)->Enabled=false;
				 level_btn->BackColor = System::Drawing::Color::Empty;
			 }
		 }
private: System::Void btn_Advanced_Click(System::Object^  sender, System::EventArgs^  e) {
			 level_flag=3;
			 int levels_completed = 0;
			 try {
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 int stuID = 1;

				 String ^ Sql = "Select [Levels_Completed_Advanced] from Pipeline_Scoring where [StudentID] = " + stuID + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);				 
				 con->Open();
				 levels_completed = (int)(command->ExecuteScalar());
				 Debug::WriteLine("level "+System::Convert::ToString(levels_completed));
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }

			 for (int i=0;i<levels_completed;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 level_btn->BackColor = System::Drawing::Color::Green;
				 level_btn->Enabled = true;
			 }
			 
			 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(levels_completed+1)];
			 level_btn->BackColor = System::Drawing::Color::Red;
			 level_btn->Enabled = true;
			 for (int i=levels_completed+1;i<50;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 //MessageBox::Show( ((Button^)level_btn)->Text);
				 ((Button^)level_btn)->Enabled=false;
				 level_btn->BackColor = System::Drawing::Color::Empty;
			 }
		 }
private: System::Void btn_Expert_Click(System::Object^  sender, System::EventArgs^  e) {
			 level_flag=4;
			 int levels_completed = 0;
			 try {
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 int stuID = 1;

				 String ^ Sql = "Select [Levels_Completed_Expert] from Pipeline_Scoring where [StudentID] = " + stuID + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);				 
				 con->Open();
				 levels_completed = (int)(command->ExecuteScalar());
				 Debug::WriteLine("level "+System::Convert::ToString(levels_completed));
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }

			 for (int i=0;i<levels_completed;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 level_btn->BackColor = System::Drawing::Color::Green;
				 level_btn->Enabled = true;
			 }
			 
			 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(levels_completed+1)];
			 level_btn->BackColor = System::Drawing::Color::Red;
			 level_btn->Enabled = true;
			 for (int i=levels_completed+1;i<50;i++)
			 {
				 Control^ level_btn = pnl_Levels_Displayed->Controls["btn_"+System::Convert::ToString(i+1)];
				 //MessageBox::Show( ((Button^)level_btn)->Text);
				 ((Button^)level_btn)->Enabled=false;
				 level_btn->BackColor = System::Drawing::Color::Empty;
			 }
		 }
private: System::Void Level_pipeline_Shown(System::Object^  sender, System::EventArgs^  e) {
			 btn_Easy->PerformClick();
		 }
private: System::Void Level_pipeline_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(Pipeline_Game::next_flag==1)
			 {
				 btn_Hard->PerformClick();
				 MessageBox::Show(System::Convert::ToString((Pipeline_Game::level_of_puzzle)+1));				
				int level = (Pipeline_Game::level_of_puzzle)+1;	
				Pipeline_Game^ form = gcnew Pipeline_Game(this,level,level_flag,answer_type,answer_index,count);
				form->Show();
				//MessageBox::Show("this is the one we want"+level_btn->Text);
				//this->Hide();
			 }
			 else
				btn_Easy->PerformClick();

		 }
};
}

