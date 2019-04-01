#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#pragma once

				 
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for operatorFilling
	/// </summary>
	public ref class operatorFilling : public System::Windows::Forms::Form
	{
	public:
		operatorFilling(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		operatorFilling(Form^ obj1)
		{
			InitializeComponent();
			caller = obj1;
			//
			//TODO: Add the constructor code here
			//
		}
		operatorFilling(int student)
		{
			InitializeComponent();
			stuID = student;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~operatorFilling()
		{
			if (components)
			{
				delete components;
			}
		}





	protected: 













	private: System::Windows::Forms::Timer^  ClockTimer;
	private: System::Windows::Forms::Label^  text1;
	private: System::Windows::Forms::Label^  text2;
	private: System::Windows::Forms::Label^  answer;
	private: System::Windows::Forms::TextBox^  inputOp1;
	private: System::Windows::Forms::Label^  equalSign;
	private: System::Windows::Forms::TextBox^  inputOp2;
	private: System::Windows::Forms::Label^  number3;
	private: System::Windows::Forms::Label^  oper2;
	private: System::Windows::Forms::Label^  lblLevel;
	private: System::Windows::Forms::Label^  number2;
	private: System::Windows::Forms::Label^  clock;
	private: System::Windows::Forms::Label^  oper1;
	private: System::Windows::Forms::Label^  lblTriesLeft;
	private: System::Windows::Forms::Label^  number1;
	private: System::Windows::Forms::Label^  lblScore;
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Button^  next;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;




	private: System::ComponentModel::IContainer^  components;


	protected: 







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(operatorFilling::typeid));
			this->ClockTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->text2 = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Label());
			this->inputOp1 = (gcnew System::Windows::Forms::TextBox());
			this->equalSign = (gcnew System::Windows::Forms::Label());
			this->inputOp2 = (gcnew System::Windows::Forms::TextBox());
			this->number3 = (gcnew System::Windows::Forms::Label());
			this->oper2 = (gcnew System::Windows::Forms::Label());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->number2 = (gcnew System::Windows::Forms::Label());
			this->clock = (gcnew System::Windows::Forms::Label());
			this->oper1 = (gcnew System::Windows::Forms::Label());
			this->lblTriesLeft = (gcnew System::Windows::Forms::Label());
			this->number1 = (gcnew System::Windows::Forms::Label());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->next = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// ClockTimer
			// 
			this->ClockTimer->Interval = 1000;
			this->ClockTimer->Tick += gcnew System::EventHandler(this, &operatorFilling::ClockTimer_Tick);
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->BackColor = System::Drawing::Color::Transparent;
			this->text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->text1->ForeColor = System::Drawing::Color::White;
			this->text1->Location = System::Drawing::Point(159, 160);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(19, 25);
			this->text1->TabIndex = 7;
			this->text1->Text = L"(";
			// 
			// text2
			// 
			this->text2->AutoSize = true;
			this->text2->BackColor = System::Drawing::Color::Transparent;
			this->text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->text2->ForeColor = System::Drawing::Color::White;
			this->text2->Location = System::Drawing::Point(412, 160);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(19, 25);
			this->text2->TabIndex = 8;
			this->text2->Text = L")";
			// 
			// answer
			// 
			this->answer->AutoSize = true;
			this->answer->BackColor = System::Drawing::Color::Transparent;
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer->ForeColor = System::Drawing::Color::White;
			this->answer->Location = System::Drawing::Point(523, 160);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(47, 25);
			this->answer->TabIndex = 6;
			this->answer->Text = L"ans";
			// 
			// inputOp1
			// 
			this->inputOp1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->inputOp1->Location = System::Drawing::Point(110, 160);
			this->inputOp1->Name = L"inputOp1";
			this->inputOp1->Size = System::Drawing::Size(40, 31);
			this->inputOp1->TabIndex = 9;
			// 
			// equalSign
			// 
			this->equalSign->AutoSize = true;
			this->equalSign->BackColor = System::Drawing::Color::Transparent;
			this->equalSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->equalSign->ForeColor = System::Drawing::Color::White;
			this->equalSign->Location = System::Drawing::Point(459, 160);
			this->equalSign->Name = L"equalSign";
			this->equalSign->Size = System::Drawing::Size(24, 25);
			this->equalSign->TabIndex = 5;
			this->equalSign->Text = L"=";
			// 
			// inputOp2
			// 
			this->inputOp2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->inputOp2->Location = System::Drawing::Point(270, 160);
			this->inputOp2->Name = L"inputOp2";
			this->inputOp2->Size = System::Drawing::Size(39, 31);
			this->inputOp2->TabIndex = 10;
			// 
			// number3
			// 
			this->number3->AutoSize = true;
			this->number3->BackColor = System::Drawing::Color::Transparent;
			this->number3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number3->ForeColor = System::Drawing::Color::White;
			this->number3->Location = System::Drawing::Point(329, 160);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(65, 25);
			this->number3->TabIndex = 4;
			this->number3->Text = L"num3";
			this->number3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// oper2
			// 
			this->oper2->AutoSize = true;
			this->oper2->BackColor = System::Drawing::Color::Transparent;
			this->oper2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oper2->ForeColor = System::Drawing::Color::White;
			this->oper2->Location = System::Drawing::Point(549, 297);
			this->oper2->Name = L"oper2";
			this->oper2->Size = System::Drawing::Size(48, 25);
			this->oper2->TabIndex = 3;
			this->oper2->Text = L"op2";
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->BackColor = System::Drawing::Color::Transparent;
			this->lblLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblLevel->ForeColor = System::Drawing::Color::White;
			this->lblLevel->Location = System::Drawing::Point(429, 55);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(57, 25);
			this->lblLevel->TabIndex = 12;
			this->lblLevel->Text = L"level";
			// 
			// number2
			// 
			this->number2->AutoSize = true;
			this->number2->BackColor = System::Drawing::Color::Transparent;
			this->number2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number2->ForeColor = System::Drawing::Color::White;
			this->number2->Location = System::Drawing::Point(184, 160);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(65, 25);
			this->number2->TabIndex = 2;
			this->number2->Text = L"num2";
			this->number2->Click += gcnew System::EventHandler(this, &operatorFilling::number2_Click);
			// 
			// clock
			// 
			this->clock->AutoSize = true;
			this->clock->BackColor = System::Drawing::Color::Transparent;
			this->clock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->clock->Location = System::Drawing::Point(10, 29);
			this->clock->Name = L"clock";
			this->clock->Size = System::Drawing::Size(69, 29);
			this->clock->TabIndex = 13;
			this->clock->Text = L"clock";
			// 
			// oper1
			// 
			this->oper1->AutoSize = true;
			this->oper1->BackColor = System::Drawing::Color::Transparent;
			this->oper1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oper1->ForeColor = System::Drawing::Color::White;
			this->oper1->Location = System::Drawing::Point(486, 297);
			this->oper1->Name = L"oper1";
			this->oper1->Size = System::Drawing::Size(48, 25);
			this->oper1->TabIndex = 1;
			this->oper1->Text = L"op1";
			// 
			// lblTriesLeft
			// 
			this->lblTriesLeft->AutoSize = true;
			this->lblTriesLeft->BackColor = System::Drawing::Color::Transparent;
			this->lblTriesLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTriesLeft->ForeColor = System::Drawing::Color::White;
			this->lblTriesLeft->Location = System::Drawing::Point(301, 273);
			this->lblTriesLeft->Name = L"lblTriesLeft";
			this->lblTriesLeft->Size = System::Drawing::Size(102, 25);
			this->lblTriesLeft->TabIndex = 14;
			this->lblTriesLeft->Text = L"Tries Left";
			// 
			// number1
			// 
			this->number1->AutoSize = true;
			this->number1->BackColor = System::Drawing::Color::Transparent;
			this->number1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number1->ForeColor = System::Drawing::Color::White;
			this->number1->Location = System::Drawing::Point(32, 160);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(65, 25);
			this->number1->TabIndex = 0;
			this->number1->Text = L"num1";
			this->number1->Click += gcnew System::EventHandler(this, &operatorFilling::num1_Click);
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->BackColor = System::Drawing::Color::Transparent;
			this->lblScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblScore->ForeColor = System::Drawing::Color::White;
			this->lblScore->Location = System::Drawing::Point(48, 261);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(65, 25);
			this->lblScore->TabIndex = 15;
			this->lblScore->Text = L"score";
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Brown;
			this->submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::White;
			this->submit->Location = System::Drawing::Point(464, 224);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(133, 35);
			this->submit->TabIndex = 11;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &operatorFilling::submit_Click);
			// 
			// panel1
			// 
			//this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->next);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->answer);
			this->panel1->Controls->Add(this->oper2);
			this->panel1->Controls->Add(this->oper1);
			this->panel1->Controls->Add(this->lblScore);
			this->panel1->Controls->Add(this->lblTriesLeft);
			this->panel1->Controls->Add(this->lblLevel);
			this->panel1->Controls->Add(this->submit);
			this->panel1->Controls->Add(this->equalSign);
			this->panel1->Controls->Add(this->inputOp2);
			this->panel1->Controls->Add(this->number1);
			this->panel1->Controls->Add(this->inputOp1);
			this->panel1->Controls->Add(this->number2);
			this->panel1->Controls->Add(this->text2);
			this->panel1->Controls->Add(this->number3);
			this->panel1->Controls->Add(this->text1);
			this->panel1->Location = System::Drawing::Point(27, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(631, 349);
			this->panel1->TabIndex = 16;
			// 
			// next
			// 
			this->next->BackColor = System::Drawing::Color::Brown;
			this->next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::Color::White;
			this->next->Location = System::Drawing::Point(464, 224);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(133, 35);
			this->next->TabIndex = 20;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &operatorFilling::next_Click);
			// 
			// panel3
			// 
			//this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->Controls->Add(this->clock);
			this->panel3->Location = System::Drawing::Point(71, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(60, 71);
			this->panel3->TabIndex = 16;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(682, 384);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(220, 294);
			this->panel5->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(71, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Yippee";
			// 
			// panel6
			// 
			//this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Location = System::Drawing::Point(41, 85);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(117, 125);
			this->panel6->TabIndex = 17;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Location = System::Drawing::Point(141, 394);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(220, 294);
			this->panel4->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(60, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 25);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Hello! ";
			// 
			// panel2
			// 
			//this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(35, 77);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(130, 143);
			this->panel2->TabIndex = 17;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Location = System::Drawing::Point(664, 71);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(220, 294);
			this->panel7->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(71, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 25);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Oops!!";
			// 
			// panel8
			// 
			//this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Location = System::Drawing::Point(35, 77);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(126, 139);
			this->panel8->TabIndex = 17;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// operatorFilling
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(885, 440);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Name = L"operatorFilling";
			this->Text = L"operatorFilling";
			this->Load += gcnew System::EventHandler(this, &operatorFilling::operatorFilling_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	Form^ caller;
int num1,num2 , num3  ,level , ctrQ , counter , score , triesLeft,stuID;

private : System::Void GenerateQuestion (int level)
{

				 array<System::String ^>^ s = gcnew array<System::String ^>  { "+" , "-" , "*" , "/" } ;

				 long int ans;


				 int range ;
				 double temp=2;
				 range = pow( temp , level + 3 );
				 
				 int op1,op2;
				 op1 = rand()%2;

				 num1 = rand() % range;
				 num2 = rand() % range;

				 op2 = rand()%4;

				 ans = 0;
				 if ( op2 >= 2) 
				 {
					if( range < 50 )
					{
						range /= 2 ;
						num3 = 1 + rand() % range;
					}

					else
					{
						num3 = 1 + rand() % ( rand() % 50 );
					}

					if ( op2 == 2)
					{
						ans = num2 * num3;		
					}

					else
					{
						range = pow( temp , level );
						ans = rand() % range + 1 ;

						num3 = rand() % range + 1 ;

						if(num3 > 30)
						{
							num3 = rand() % 30 +1 ;					
						}

						num2 = num3 * ans;
					
					}
				 }
					
				 else
				 {
					num3 = rand() % range;
					
					if( op2 == 0)
					{
						ans = num2 + num3;	
					}

					else if(op2 == 1 )
					{
						ans = num2 - num3;	
					}

					else
					{
						MessageBox::Show("Error");
					}
				 }

				 if(op1 == 0)
				 {
					ans += num1;
				 }

				 else
				 {
					ans -= num1;
					ans *= -1 ;
				 }

				 number1 -> Text = System::Convert::ToString(num1);
				 number2 -> Text = System::Convert::ToString(num2);

				 oper1 -> Text = s[op1]; 
				 oper2 -> Text = s[op2];

				 number3 -> Text = System::Convert::ToString(num3);
				 answer -> Text = System::Convert::ToString(ans);
		  
}

private: System::Void operatorFilling_Load(System::Object^  sender, System::EventArgs^  e) {

			 panel4->BringToFront();
			 panel5->BringToFront();
			 panel7->BringToFront();

			 panel4->Top=91;
			 panel4->Left=676;
			
			 
			 panel5->Top=91;
			 panel5->Left=676;
			 
			 panel7->Top=91;
			 panel7->Left=676;

			 
			 panel4->Show();
			panel5->Hide();
			panel7->Hide();
			next->Hide();

			 level=1;
			 ctrQ=0;
			 triesLeft = 3;
			 lblTriesLeft->Text = System::Convert::ToString(triesLeft);

			 counter=30;
			 score = 0;

			 lblScore -> Text = System :: Convert :: ToString(score);
			 clock->Text = System::Convert::ToString(counter);
			 ClockTimer->Start();

			 lblLevel->Text = System::Convert::ToString(level);
			 GenerateQuestion(level);


			 }
private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {

			long int ans; 

			if( inputOp2->Text == "+")
			{
				ans = num2 + num3;
			}

			else if ( inputOp2->Text =="-")
			{
				ans = num2 - num3;
			}

			else if ( inputOp2->Text == "*")
			{
				ans = num2 * num3;
			}

			else if ( inputOp2->Text == "/")
			{
				ans = num2 / num3;
			}

			if( inputOp1->Text == "+")
			{
				ans += num1;
			}

			else if ( inputOp1->Text =="-")
			{
				ans = num1 - ans;
			}

			else if ( inputOp1->Text == "*")
			{
				ans *= num1 ;
			}

			else if ( inputOp1->Text == "/")
			{
				if (ans == 0)
				{
					goto l1;
				}

				ans = num1 / ans ;
			}
			
			if ( System::Convert::ToString(ans) == answer->Text )
			{
			    score += 10 + (3 * counter) ;
				lblScore ->Text = (System::Convert::ToString(score));
				
				ClockTimer->Stop();

				MessageBox::Show("Correct");
				
				submit->Hide();
				next->Show();

				panel4->Hide();
				panel7->Hide();
				panel5->BringToFront();
				panel5->Show();
				

				ctrQ++;
				if(ctrQ % 5 == 0 )
				{
					level++;
			     	lblLevel->Text = System::Convert::ToString(level);
					
					if(level == 6 )
					{
						goto success ;
					}
				}
				

			}

			else
			{
				l1:
				score -= 5; 
				lblScore ->Text = (System::Convert::ToString(score));
				panel4->Hide();
				panel5->Hide();
				
				panel7->BringToFront();
				panel7->Show();

				MessageBox::Show("Wrong");
				triesLeft --;
			    lblTriesLeft->Text = System::Convert::ToString(triesLeft);

				if(triesLeft == 0 )
				{
					goto failure;
				}

				
			inputOp1->Text = "";
			inputOp2->Text = "";
			}



			/*
			MessageBox::Show(System::Convert::ToString(ans));
			MessageBox::Show(System::Convert::ToString(num1));
			MessageBox::Show(System::Convert::ToString(num2));
			MessageBox::Show(System::Convert::ToString(num3));
			*/
		 
			if(level == 6)
			{
				ClockTimer->Stop();

				success :
				MessageBox::Show("Game complete");

			}

			if(triesLeft == 0)
			{
				failure:
				ClockTimer->Stop();
				
				MessageBox::Show("You Lost");
			}
		 
		 
		 }
private: System::Void ClockTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 counter--;
			 if(counter<0){
			
				ClockTimer->Stop();
	    		lblScore ->Text = (System::Convert::ToString(score));
				panel4->Hide();
				panel5->Hide();
				panel7->BringToFront();
				panel7->Show();

				MessageBox::Show("Time Over");
				triesLeft --;
			    lblTriesLeft->Text = System::Convert::ToString(triesLeft);

				counter=30;
				ClockTimer->Start();
				GenerateQuestion(level);
				
			 
			 
			 }

			 clock->Text = System::Convert::ToString(counter);
		 }
private: System::Void next_Click(System::Object^  sender, System::EventArgs^  e) {

					
							ClockTimer->Start();
							counter=30;
							inputOp1->Text = "";
							inputOp2->Text = "";
			 				GenerateQuestion(level);
							next->Hide();
							submit->Show();

					panel5->Hide();
				
					panel4->BringToFront();
					panel7->Hide();
					panel4->Show();



		 }
private: System::Void number2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
