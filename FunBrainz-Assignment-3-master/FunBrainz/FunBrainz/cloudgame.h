#pragma once
#include "GlobalFuncs.h"
#include <stdio.h>  
#include <utility> 
#include<cmath>
#include<ctime>
#include<string>
#include<iostream>
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cloudgame
	/// </summary>
	public ref class cloudgame : public System::Windows::Forms::Form
	{
	public:
		cloudgame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		cloudgame(int cat)							//constructor to take information which category is chosen 
		{										
			category = cat;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cloudgame()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Label^  Question;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button5;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Question = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &cloudgame::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 2;
			this->timer2->Tick += gcnew System::EventHandler(this, &cloudgame::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 4;
			this->timer3->Tick += gcnew System::EventHandler(this, &cloudgame::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 5;
			this->timer4->Tick += gcnew System::EventHandler(this, &cloudgame::timer4_Tick);
			// 
			// Question
			// 
			this->Question->AutoSize = true;
			this->Question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Question->Location = System::Drawing::Point(211, 36);
			this->Question->Name = L"Question";
			this->Question->Size = System::Drawing::Size(99, 32);
			this->Question->TabIndex = 1;
			this->Question->Text = L"label1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(688, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Score";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(836, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 38);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 52);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cloudgame::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 53);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cloudgame::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(35, 23);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 49);
			this->button3->TabIndex = 12;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &cloudgame::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(32, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 59);
			this->button4->TabIndex = 13;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &cloudgame::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(140, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(191, 100);
			this->panel1->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(255, 225);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(331, 372);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 16;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button4);
			this->panel4->Location = System::Drawing::Point(206, 534);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 100);
			this->panel4->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 32);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &cloudgame::button5_Click);
			// 
			// cloudgame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 702);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Question);
			this->Name = L"cloudgame";
			this->Text = L"cloudgame";
			this->Load += gcnew System::EventHandler(this, &cloudgame::cloudgame_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int xloc,xloc1,xloc2,xloc3;
	int category;
	int answer;
	int sliderFlag,sliderFlag1,sliderFlag2,sliderFlag3;
	int timesplayed;
	int score;
	int level;

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {   //to make panel1 in motion
			 if (sliderFlag ==0)   
			 {
				 xloc++;
				 panel1->Left++;
				 
			 }
			 else
			 {
				 xloc--;
				 panel1->Left--;
				 
			 }

			 if (xloc == 0 || xloc ==300)
			 {
				 sliderFlag++;
				 sliderFlag %= 2;
			 }
		 }
		 
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel2 in motion
			 if (sliderFlag1 ==0)
			 {
				 xloc1+=3;
				 panel2->Left+=3;
				 
			 }
			 else
			 {
				 xloc1-=3;
				 panel2->Left-=3;
				 
			 }

			 if (xloc1 == 0 || xloc1 == 300)
			 {
				 sliderFlag1++;
				 sliderFlag1 %= 2;
			 }
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel3 in motion
			if (sliderFlag2 ==0)
			 {
				 xloc2+=4;
				 panel3->Left+=2;
				 
			 }
			 else
			 {
				 xloc2-=4;
				 panel3->Left-=2;
				
			 }

			 if (xloc2 == 0 || xloc2 == 360)
			 {
				 sliderFlag2++;
				 sliderFlag2 %= 2;
			 }
		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel4 in motion
	   	    if (sliderFlag3 ==0)
			 {
				 xloc3+=2;
				 panel4->Left+=4;
				 
			 }
			 else
			 {
				 xloc3-=2;
				 panel4->Left-=4;
				
			 }

			 if (xloc3 == 0 || xloc3 == 250)
			 {
				 sliderFlag3++;
				 sliderFlag3 %= 2;
			 }
		 }			   

private: System::Void cloudgame_Load(System::Object^  sender, System::EventArgs^  e) {
			 StartGame();
    }
private: Void StartGame()
	{
				 timesplayed++;
				 score = 0;
				 //to change the level according to child's score.
				 if(score <=20)
				 {
					 level = 1;
				 }
				 else
				 {
					 if(score >20 && score <=40)
					 {
						 level = 2;
					 }
					 else
					 {
						 if(score >40 && score <=60)
						 {
							 level =3;
						 }
						 else
						 {
							 if(score >60 && score <=80)
							 {
								 level =4;
							 }
							 else
							 {
								 if(score >80 &&score <=100)
								 {
									 level =5;
								 }
								 else
								 {
									 if(score >100 && score <=120)
									 {
										 level =6;
									 }
									 else
									 {
										 if(score >120 && score <=140)
										 {
											 level =7;
										 }
										 else
										 {
											 if(score >140 &&score <=160)
											 {
												 level =8;
											 }
											 else
											 {
												 if(score >160 && score <=180)
												 {
													 level =9;
												 }
												 else
												 {
													 if(score >180)
													 {
														 level =10;
													 }
												 }
											 }
										 }
									 }
								 }
							 }
						 }
					 }
				}
				 std::pair <std::string, int> ques = GlobalFuncs::generateQuestion(category, level);	//Global Function
				 String ^ x = gcnew String(ques.first.c_str());
				 answer = ques.second;														//Answer of the generate Question
				 Question->Text = x;
				 int num=rand()%4;				//to choose any one of the panel to contain correct answer
				 if(num==0)					
				 {
					 button1->Text = (ques.second)+"";			
					 button2->Text = "" + (ques.second+3);
					 button3->Text = "" + (ques.second-4);
					 button4->Text = "" + (ques.second+6);
					 
				 }else{
				 if(num==1)
				 {
					 button2->Text = (ques.second)+"";					 
					 button1->Text = "" + (ques.second+5);
					 button3->Text = "" + (ques.second-9);
					 button4->Text = "" + (ques.second+2);
				 }
				 
				 else{
				 if(num==2)
				 {
					 button3->Text = (ques.second)+"";
					 button2->Text = "" + (ques.second-5);
					 button1->Text = "" + (ques.second+8);
					 button4->Text = "" + (ques.second+13);
				 }
				 
				 else
				 {
				 if(num==3)
				 {
					 button4->Text = (ques.second)+"";
					 button2->Text = "" + (ques.second-13);
					 button3->Text = "" + (ques.second-3);
					 button1->Text = "" + (ques.second+1);

				 }
				 }
				 }
				 }
				 
	}

private: Void nextQuestion()
			{
				if(score <=20)
				 {
					 level = 1;
				 }
				 else
				 {
					 if(score >20 && score <=40)
					 {
						 level = 2;
					 }
					 else
					 {
						 if(score >40 && score <=60)
						 {
							 level =3;
						 }
						 else
						 {
							 if(score >60 && score <=80)
							 {
								 level =4;
							 }
							 else
							 {
								 if(score >80 &&score <=100)
								 {
									 level =5;
								 }
								 else
								 {
									 if(score >100 && score <=120)
									 {
										 level =6;
									 }
									 else
									 {
										 if(score >120 && score <=140)
										 {
											 level =7;
										 }
										 else
										 {
											 if(score >140 &&score <=160)
											 {
												 level =8;
											 }
											 else
											 {
												 if(score >160 && score <=180)
												 {
													 level =9;
												 }
												 else
												 {
													 if(score >180)
													 {
														 level =10;
													 }
												 }
											 }
										 }
									 }
								 }
							 }
						 }
					 }
				}

				std::pair <std::string, int> ques = GlobalFuncs::generateQuestion(category, level);
				 String ^ x = gcnew String(ques.first.c_str());
				 answer = ques.second;
				 Question->Text = x;
				 int num=rand()%4;
				 if(num==0)
				 {
					 button1->Text = (ques.second)+"";
					 button2->Text = "" + (ques.second+5);
					 button3->Text = "" + (ques.second-6);
					 button4->Text = "" + (ques.second-12);
					 
				 }else{
				 if(num==1)
				 {
					 button2->Text = (ques.second)+"";					 
					 button1->Text = "" + (ques.second-3);
					 button3->Text = "" + (ques.second+4);
					 button4->Text = "" + (ques.second-10);
				 }
				 
				 else{
				 if(num==2)
				 {
					 button3->Text = (ques.second)+"";
					 button2->Text = "" + (ques.second-11);
					 button1->Text = "" + (ques.second+13);
					 button4->Text = "" + (ques.second+25);
				 }
				 
				 else
				 {
				 if(num==3)
				 {
					 button4->Text = (ques.second)+"";
					 button2->Text = "" + (ques.second-6);
					 button3->Text = "" + (ques.second-9);
					 button1->Text = "" + (ques.second+19);

				 }
				 }
				 }
				 }
			}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(answer+"" == button1->Text)
			{
				score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			}
			else
			{
				MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				MessageBox::Show("Your Score is " + score);
				nextQuestion();
				score=0;
				textBox1->Text = "0";
			}


		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == button2->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 nextQuestion();
				 score=0;
				 textBox1->Text = "0";
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == button3->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 nextQuestion();
				 score=0;
				 textBox1->Text = "0";
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == button4->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 nextQuestion();
				 score=0;
				 textBox1->Text = "0";
			 }

		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Your Score is" + score);
			 this->Close();
		 }
};
}
