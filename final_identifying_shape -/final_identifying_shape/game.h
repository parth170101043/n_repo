#pragma once
   #include "iostream"
namespace final_identifying_shape {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;


	/// <summary>
	/// Summary for game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		String^ name;
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		 game(String^ st)
		{
			InitializeComponent();
			name=st;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  pause_play;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  ok;
	private: System::Windows::Forms::Label^  exit_label;
	private: System::Windows::Forms::Label^  play_label;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  life_text;
	private: System::Windows::Forms::Label^  score_text;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;


	private: System::Windows::Forms::RichTextBox^  richTextBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->pause_play = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->exit_label = (gcnew System::Windows::Forms::Label());
			this->play_label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->life_text = (gcnew System::Windows::Forms::Label());
			this->score_text = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pause_play
			// 
			this->pause_play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pause_play->Location = System::Drawing::Point(618, 66);
			this->pause_play->Name = L"pause_play";
			this->pause_play->Size = System::Drawing::Size(134, 39);
			this->pause_play->TabIndex = 52;
			this->pause_play->Text = L"Pause";
			this->pause_play->UseVisualStyleBackColor = true;
			this->pause_play->Click += gcnew System::EventHandler(this, &game::pause_play_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(34, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(516, 246);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Click the Triangles,Rectangles and Circles before it pass the Screen.You will get" 
				L" 10 scores if you can click or lose one life";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Controls->Add(this->ok);
			this->panel2->Location = System::Drawing::Point(224, 111);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(590, 334);
			this->panel2->TabIndex = 31;
			// 
			// ok
			// 
			this->ok->Location = System::Drawing::Point(225, 286);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(136, 35);
			this->ok->TabIndex = 0;
			this->ok->Text = L"i got it";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &game::ok_Click);
			// 
			// exit_label
			// 
			this->exit_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exit_label->ForeColor = System::Drawing::Color::Red;
			this->exit_label->Location = System::Drawing::Point(219, 138);
			this->exit_label->Name = L"exit_label";
			this->exit_label->Size = System::Drawing::Size(89, 44);
			this->exit_label->TabIndex = 2;
			this->exit_label->Text = L"exit";
			this->exit_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->exit_label->Click += gcnew System::EventHandler(this, &game::exit_label_Click);
			// 
			// play_label
			// 
			this->play_label->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->play_label->ForeColor = System::Drawing::Color::Lime;
			this->play_label->Location = System::Drawing::Point(149, 71);
			this->play_label->Name = L"play_label";
			this->play_label->Size = System::Drawing::Size(228, 44);
			this->play_label->TabIndex = 0;
			this->play_label->Text = L"Click To Play";
			this->play_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->play_label->Click += gcnew System::EventHandler(this, &game::play_label_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &game::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Snow;
			this->panel1->Controls->Add(this->exit_label);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->play_label);
			this->panel1->Location = System::Drawing::Point(106, 445);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(541, 251);
			this->panel1->TabIndex = 51;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(118, 10);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(304, 58);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(1035, 30);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(134, 39);
			this->Exit->TabIndex = 50;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &game::Exit_Click);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(420, 59);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(137, 48);
			this->label21->TabIndex = 49;
			this->label21->Text = L"10";
			// 
			// life_text
			// 
			this->life_text->BackColor = System::Drawing::Color::Transparent;
			this->life_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->life_text->Location = System::Drawing::Point(312, 59);
			this->life_text->Name = L"life_text";
			this->life_text->Size = System::Drawing::Size(89, 48);
			this->life_text->TabIndex = 48;
			this->life_text->Text = L"LiFe";
			// 
			// score_text
			// 
			this->score_text->BackColor = System::Drawing::Color::Transparent;
			this->score_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->score_text->Location = System::Drawing::Point(841, 74);
			this->score_text->Name = L"score_text";
			this->score_text->Size = System::Drawing::Size(106, 31);
			this->score_text->TabIndex = 47;
			this->score_text->Text = L"SCORE:";
			// 
			// label18
			// 
			this->label18->Location = System::Drawing::Point(984, 169);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(137, 48);
			this->label18->TabIndex = 46;
			this->label18->Text = L"0";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->Location = System::Drawing::Point(291, 169);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 48);
			this->label17->TabIndex = 45;
			this->label17->Text = L"0";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(194, 169);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 48);
			this->label16->TabIndex = 44;
			this->label16->Text = L"0";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(103, 169);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 48);
			this->label15->TabIndex = 43;
			this->label15->Text = L"0";
			this->label15->Visible = false;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(133, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 28);
			this->label4->TabIndex = 42;
			this->label4->Text = L"0";
			this->label4->Visible = false;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(20, 169);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 48);
			this->label14->TabIndex = 41;
			this->label14->Text = L"0";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(379, 110);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 34);
			this->label13->TabIndex = 40;
			this->label13->Text = L"0";
			this->label13->Visible = false;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(291, 110);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 34);
			this->label12->TabIndex = 39;
			this->label12->Text = L"0";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(175, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 34);
			this->label11->TabIndex = 38;
			this->label11->Text = L"0";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(103, 110);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 34);
			this->label10->TabIndex = 37;
			this->label10->Text = L"0";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(18, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 34);
			this->label9->TabIndex = 36;
			this->label9->Text = L"0";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(221, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 34);
			this->label8->TabIndex = 35;
			this->label8->Text = L"0";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(953, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 48);
			this->label7->TabIndex = 34;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(953, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 48);
			this->label6->TabIndex = 33;
			this->label6->Text = L"0";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(758, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 48);
			this->label5->TabIndex = 32;
			this->label5->Text = L"0";
			this->label5->Visible = false;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(13, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 28);
			this->label3->TabIndex = 30;
			this->label3->Text = L"0";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(289, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 48);
			this->label2->TabIndex = 29;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(432, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 23);
			this->label1->TabIndex = 28;
			this->label1->Text = L"0";
			this->label1->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &game::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &game::timer3_Tick);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 675);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pause_play);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->life_text);
			this->Controls->Add(this->score_text);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"game";
			this->Text = L"game";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &game::game_Paint);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::game_MouseClick);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
private:
			int p;//used as a measurement
			int z;
			int q;
			int x;
			int time;		//total time played
			double c;
			int highscore;//variable to cunt highestscore
			String^ date;  //todays date
			String^ field;	 //game
			double d;
			double y;
			int score;
			int imgvar;
			int slide;
			Point pt1;
			Point pt2;
			Point pt3;
			Point pt4;
			Point pt5;
			Point pt6;
			Rectangle rect;
			int life;
			int totalnumberplayed;
			/*
			 Logic=from p to p-1200, above and below an horizental line(drawn using graphics drawline) relative to postion of p ,16(above 8,below 8) shpes are drawn...some of them are 
			 triangle,rectangle and circle using drawpolygon ,draw rectangle and drawellipse....and others are transperent background images 
			 using drawimage.same is the case for q. 
			 initially position of q =p-1200,p=0(x position).for each timer tick winform is refreshed 
			 and position of  p and q increased (so that the shapes position) again at some point of time position of p and q decreased so that shapes come
			 back again..
			 c= variable , shapes between p and p-1200 changes when changes..
			 d= variable, shapes between q and q-1200 changes when d   changes
			
			
			
			*/
		// panel1=show click to play button
		//panel2 show rule
		//	  panel3 show game score
#pragma endregion
	private: System::Void game_Load(System::Object^  sender, System::EventArgs^  e) {
			 highscore = 0;  //initially highscore 0
			 field = "Game";
			 time=0;
			 
			 totalnumberplayed=0;
			 date = Convert::ToString(DateTime::Now);
			 timer2->Start();  //to count time for variable time
			 life=10;
			 
			 panel1->Top=200;
				panel2->Top=270;
			
			 	panel2->Left=this->Width;
				
			 imgvar=0;
			panel1->Left = 250;	
			initiate();///////////////////////
			 }
private: System::Void game_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			   c = Convert::ToDouble(label3->Text);
			   		
				  if (life < 0)		  //if life<0 player lost and score will appear
					 { timer1->Stop();
						    panel1->Left=this->Width;
						timer3->Start();
						 
						play_label->Text="Play again";
						if(score>highscore)
							highscore=score;
				  }
				  else
					{  /////////////

				  d = Convert::ToDouble(label4->Text);
				
					 Graphics^ g = e->Graphics;
					 
					///////////////////////////////////
					 g->DrawLine(Pens::Red, 0, 450, this->Width, 450);
					   //  label9 to 17 are the labels used as conditons before drawing triangles rectancles and circles..
					 //	 these shapes are drawn only if ,their condition label text="0" ...
					 //	  cirpt,rectpt and tript...functions to identify cursor point is in circle ,rectangle and triangle or not..
					 /*	 Point(Convert::ToInt16(label5->Text)+slide+10, Convert::ToInt16(label6->Text));=>label5->Text= cursor_click x position label ,label6
					 for cursor_click y position..they are converting to a point and sent to cirpt,rectpt and tript*/
					 if (c == 0)   //drawing shapes between p and p-1200 for c=0
					 {//1111111111111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic1.png"), p - 140, 350);
						 //222222222222222222222222
						 if (label9->Text == "0")
						 {
							 g->FillRectangle(Brushes::Red, p - 290, 300, 80, 140);
							 pt1 = Point(p - 290, 300);
							 pt2 = Point(p - 210, 300);
							 pt3 = Point(p - 210, 440);
							 pt4 = Point(p - 290, 440);
							 pt5 = Point(Convert::ToInt16(label5->Text)+slide+10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								score += 10;
								 label9->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 300) >= this->Width)
									 // timer1->Stop();
								 {
									 life--;
									 label9->Text = "1";
								 }
							 }
						 }
						 //33333333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic3.png"), p - 450, 330);
						 //4444444444444444444444444
						 if (label10->Text == "0")
						 {
							 g->DrawEllipse(Pens::Red, p - 580, 300, 120, 120);
							 g->FillEllipse(Brushes::Yellow, p - 580, 300, 120, 120);
							 pt1 = Point(p - 580, 300);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label10->Text = "1";
								 y = 1;
							 }
							 else 
							 {
								 if ((p - 590) >= this->Width)
								 {
									 life--;
									 label10->Text = "1";
								 }
							 }
							 

						 }
						 //5555555555555555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic2.png"), p - 750, 330);
						 //666666666666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic5.png"), p - 900, 330);
						 //77777777777777777777777777777
						 pt1 = Point(p-960,300);
						 pt2 = Point(p - 910, 370);
						 pt3 = Point(p - 960, 440);
						 pt4 = Point(p - 1040, 370);

						 array<Point>^ p4 = { pt1, pt2 ,pt3,pt4};
						 g->DrawClosedCurve(Pens::Black, p4);
						 g->FillClosedCurve(Brushes::AliceBlue, p4);
						 //88888888888888888888888888888888
						
						 g->DrawImage(Image::FromFile("game_pic/pic9.png"), p - 1200, 300);
						 //NOwDown
						 //1111111111111111111111
						 

						 g->FillPie(Brushes::Red, p- 140, 460, 120, 120, 45, 300);
						 //22222222222222222222222222222222
						 if (label11->Text == "0")
						 {
						
						 g->FillEllipse(Brushes::Blue, p - 290, 460, 120, 120);
						 pt1 = Point(p - 290, 460);
						 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
						 y = cirpt(pt1, pt2, 120);
						 if (y == 0)
						 {
							 score += 10;
							 label11->Text = "1";
							 y = 1;
						 }
						 else 
						 {
							 if ((p - 300) >= this->Width)
							 {
								 life--;
								 label11->Text = "1";
							 }
						 }

						 }
						 //3333333333333333333333333
						 if (label12->Text == "0")
						{
							 g->DrawRectangle(Pens::Red, p - 450, 500, 130, 50);
							 g->FillRectangle(Brushes::GreenYellow, p - 450, 500, 130, 50);
							 pt1 = Point(p - 450, 500);
							 pt2 = Point(p - 320, 500);
							 pt3 = Point(p - 320, 550);
							 pt4 = Point(p - 450, 550);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label12->Text = "1";
								 y = 1;
							 }
							 else 
							 {
								 if ((p - 450) >= this->Width)
								 {
									 life--;
									 label12->Text = "1";
								 }
							 }
						 }
						 //4444444444444444444444  
						 g->DrawImage(Image::FromFile("game_pic/pic11.png"), p - 600, 460);
						 
						 //555555555555555555
						// g->DrawBezier(Pens::Black, p - 750, 460, p - 700, 500, p - 700, 530, p - 690, 600);
						 if (label13->Text == "0")
						 {
							 g->DrawEllipse(Pens::Black, p - 750, 460, 120, 120);
							 g->FillEllipse(Brushes::Black, p - 750, 460, 120, 120);
							 pt1 = Point(p - 750, 460);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label13->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 750) >= this->Width)/////////////////////////
								 {
									 life--;
									 label13->Text = "1";
								 }
							 }

						 }
						 //66666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic13.png"), p - 900, 460);
						 //777777777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic11.png"), p - 10500, 460);
						 //888888888888
						 pt1 = Point(p - 1200, 590);
						 pt2 = Point(p - 1060, 540);
						 pt3 = Point(p - 1150, 460);
						 pt4 = Point(p - 1100, 540);
						
						 array<Point>^ p9 = { pt1, pt2, pt3, pt4 };
						g->DrawPolygon(Pens::Red, p9);
						 g->FillPolygon(Brushes::Green, p9);
					 }
					 if (c== 1)		  //drawing shapes between p and p-1200 for c=1
					 {/////111111111111111111111111Top
						 if (label9->Text == "0")
						 {
							 g->FillRectangle(Brushes::Blue, p - 140, 300, 130, 130);
							 pt1 = Point(p - 140, 300);
							 pt2 = Point(p-10, 300),
								 pt3 = Point(p-10, 430);
							 pt4 = Point(p - 140, 430);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label9->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 150) >= this->Width)
								 {
									 life--;
									 label9->Text = "1";
								 }
							 }
						 }
						 //22222222222222222222
						 g->DrawImage(Image::FromFile("game_pic/pic12.png"), p - 300, 300);
						 //33333333333333333333333333
						 if (label10->Text == "0")
						 {
							 g->DrawEllipse(Pens::Red, p - 440, 300, 120, 120);
							 g->FillEllipse(Brushes::Azure, p - 440, 300, 120, 120);
							 pt1 = Point(p - 440, 300);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label10->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 440) >= this->Width)
								 {
									 life--;
									 label10->Text = "1";
								 }
							 }
						 }
						 //4444444444444444444
						 if (label11->Text == "0")
						 {
							 pt1 = Point(p - 590, 300);
							 pt2 = Point(p - 460, 300);
							 pt3 = Point(p - 525, 413);
							 pt4 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 array<Point>^ p2 = { pt1, pt2, pt3 };
							 g->DrawPolygon(Pens::Bisque, p2);
							 g->FillPolygon(Brushes::Bisque, p2); 
							 y = tript(pt1, pt2, pt3, pt4);
							 if (y == 0)
							 {
								 score += 10;
								 label11->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 590) >= this->Width)
								 {
									 life--;
									 label11->Text = "1";
								 }
							 }
						 }

						 //55555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic14.png"), p - 750, 300);
						 //6666666
						 g->DrawImage(Image::FromFile("game_pic/pic20.png"), p - 900, 350);
						 //77777777777777777
						// g->DrawEllipse(Pens::Maroon, 1040, 300, 130, 70);
						 g->FillEllipse(Brushes::Maroon, p-1040, 350, 130, 70);
						 //8888888888888888888888888
						 g->FillPie(Brushes::Orchid, p - 1190, 300, 120, 120, 225, 270);




						 ///////////now down
						 //111111111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic21.png"), p - 140, 460);
						 //2222222222222222222
						 g->DrawImage(Image::FromFile("game_pic/pic1.png"), p - 300, 460);
						 //33333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic8.png"), p - 450, 460);
						 //4444444444444444444444
						 g->DrawImage(Image::FromFile("game_pic/pic23.png"), p - 600, 460);
						 //55555555555555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic11.png"), p - 750, 460);
						 //666666666666666666666666
						 if (label12->Text == "0")
						 {
							 g->FillEllipse(Brushes::SeaGreen, p - 890, 460, 120, 120);
							 pt1 = Point(p - 890, 460);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label12->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 900) >= this->Width)/////////////////////////
								 {
									 life--;
									 label12->Text = "1";
								 }
							 }
						 }
						 //7777777777777777777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic17.png"), p - 1050, 460);
						 //8888888888888888888888
						 pt1 = Point(p - 1200, 460);
						 pt2 = Point(p - 1140, 550);
						 pt3 = Point(p - 1080, 460);
						 pt4 = Point(p - 1140, 600);						
						 array<Point>^ p0= { pt1, pt2, pt3, pt4 };
						 g->FillPolygon(Brushes::Red, p0);
					 }

					 if (c == 2)    //drawing shapes between p and p-1200 for c=2
					 {
						 //111111111111
						 if (label9->Text == "0")
						 {
							 g->DrawEllipse(Pens::Red, p - 140, 300, 140, 140);
							 pt1 = Point(p - 140, 300);
							 pt2 = Point(Convert::ToInt16(label5->Text), Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 140);
							 if (y == 0)
							 {
								 score += 10;
								 label9->Text = "1";
								 y = 1;
							 }
							 else if (y == 1)
							 {
								 if ((p - 140) >= this->Width)
								 {
									 life--;
									 label9->Text = "1";
								 }
							 }
						 }
						 ////22222
						 g->DrawImage(Image::FromFile("game_pic/pic1.png"), p -300 , 360);
						 ///3333
						 g->DrawImage(Image::FromFile("game_pic/pic6.png"), p - 450, 330);
						 ///44444
						 g->DrawImage(Image::FromFile("game_pic/pic11.png"), p - 600, 300);
						///55555
						 if (label10->Text == "0")
						 {
							 g->FillRectangle(Brushes::GreenYellow, p - 750, 300, 140, 80);
							 pt1 = Point(p - 750, 300);
							 pt2 = Point(p - 610, 300);
							 pt3 = Point(p - 610, 380);
							 pt4 = Point(p - 750, 380);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label10->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 750) >= this->Width)
								 {
									 life--;
									 label10->Text = "1";
								 }
							 }
							
						 }
						 ////6666666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic14.png"), p - 900, 300);
						 ///777777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic25.png"), p - 1050, 300);
						 ////88888888888
						 g->DrawImage(Image::FromFile("game_pic/pic29.png"), p - 1200, 300);


						 ///////////////Now down
						 ///1111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic27.png"), p - 140, 460);
						 ////2222222
						 if (label11->Text == "0")
						 {
							 g->DrawEllipse(Pens::Blue, p - 290, 460, 120, 120);
							 g->FillEllipse(Brushes::Blue, p - 290, 460, 120, 120);
							 pt1 = Point(p - 290, 460);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label11->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 300) >= this->Width)
								 {
									 life--;
									 label11->Text = "1";
								 }
							 }
						

						 }
						 //3333333333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic16.png"), p - 450, 460);
						 //44444444444444444444444444
						 g->FillEllipse(Brushes::DarkMagenta, p - 600, 470, 140, 100);
						 ////555555555555555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic32.png"), p - 750, 460);
						 ///666666666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic19.png"), p - 900, 460);
						 ///////////7777777777777777777 
						 if (label12->Text == "0")
						 {
							 g->FillRectangle(Brushes::GreenYellow, p - 1020, 460, 50, 130);
							 pt1 = Point(p - 1020, 460);
							 pt2 = Point(p - 970, 460);
							 pt3 = Point(p - 970, 590);
							 pt4 = Point(p - 1020, 590);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label12->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((p - 1050) >= this->Width)
								 {
									 life--;
									 label12->Text = "1";
								 }
							 }
							
						 }
						 /////8888888888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic27.png"), p - 1200, 460);
					 }
					//////////////DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
					 /////1111111111111111
					 if (d == 0)	   //drawing shapes between q and q-1200 for d=0
					 {
						 label3->Text = Convert::ToString(x);
						 g->DrawImage(Image::FromFile("game_pic/pic15.png"), q - 140, 300);
						 /////////2222222222222222222
						 g->DrawImage(Image::FromFile("game_pic/pic33.png"), q- 300, 300);
						 ///33333333333
						 g->DrawImage(Image::FromFile("game_pic/pic17.png"), q - 450, 300);
						 /////44444444444444
						 g->FillPie(Brushes::Yellow, q - 600, 300, 120, 120, 225, 300);
						 //////////555555
						 if (label14->Text == "0")
						 {
							 g->FillRectangle(Brushes::Red,q-750,300,80,120);
							 pt1 = Point(q-750, 300);
							 pt2 = Point(q- 670, 300);
							 pt3 = Point(q-670, 420);
							 pt4 = Point(q-750,420);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label14->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 750) >= this->Width)
								 {
									 life--;
									 label14->Text = "1";
								 }
							 }
							
						 }
						 ///////////6666666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic13.png"), q - 900, 300);
						 //////////////77777777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic22.png"), q - 1050, 300);
						 ///////////88888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic25.png"), q - 1200, 300);

						 /////////////////////////Down
						 //11111111111111
						 if (label15->Text == "0")
						 {
							 pt1 = Point(q - 140, 460);
							 pt2 = Point(q- 10, 460);
							 pt3 = Point(q - 75, 573);
							 pt4 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 array<Point>^ p2 = { pt1, pt2, pt3 };
							 
							 g->FillPolygon(Brushes::Bisque, p2);
							 y = tript(pt1, pt2, pt3, pt4);
							 if (y == 0)
							 {
								 score += 10;
								 label15->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 140) >= this->Width)
								 {
									 life--;
									 label15->Text = "1";
								 }
							 }
						
						 }
						 ////////////2222222222222222222222
						 g->DrawImage(Image::FromFile("game_pic/pic28.png"), q - 300, 460);
						 ///333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic29.png"), q - 450, 460);
						 ///444444444444
						 g->DrawImage(Image::FromFile("game_pic/pic20.png"), q - 600, 460);
						 /////////////////555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic11.png"), q - 750, 460);
						 /////////////////666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic12.png"), q - 900, 460);
						 //7777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic10.png"), q - 1050, 460);
						 /////////////8888888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic25.png"), q - 1200, 460);
					 }

					 if (d == 1)   //drawing shapes between q and q-1200 for d=1
					 {
						 //1111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic22.png"), q - 140, 300);
						 //////22222222222222222
						 if (label14->Text == "0")
						 {

							 g->FillRectangle(Brushes::Red, q - 300, 300, 120, 120);
							 pt1 = Point(q - 300, 300);
							 pt2 = Point(q - 180, 300);
							 pt3 = Point(q - 180, 420);
							 pt4 = Point(q - 300, 420);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label14->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 300) >= this->Width)
								 {
									 life--;
									 label14->Text = "1";
								 }
							 }
							
						 }
						 /////33333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic8.png"), q - 450, 300);

						 ////4444444444444444444444444
						 g->DrawImage(Image::FromFile("game_pic/pic9.png"), q - 600, 300);
						 ///////5
						 if (label15->Text == "0")
						 {
							 g->FillRectangle(Brushes::Orange, q - 750, 340, 120, 60);
							 pt1 = Point(q - 750, 340);
							 pt2 = Point(q - 630, 340);
							 pt3 = Point(q - 630, 400);
							 pt4 = Point(q - 750, 400);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label15->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 750) >= this->Width)
								 {
									 life--;
									 label15->Text = "1";
								 }
							 }
							 
						 }
						 //////////////////66666666666
						 g->DrawImage(Image::FromFile("game_pic/pic15.png"), q - 900, 300);
						 ////////////////////777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic16.png"), q - 1050, 300);
						 /////////////////////////////8888888888888888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic28.png"), q - 1200, 300);

						 ///////////Now down
						 ///111
						 if (label16->Text == "0")
						 {
							 g->FillRectangle(Brushes::Gray, q - 140, 500, 100, 60);
							 pt1 = Point(q - 140, 500);
							 pt2 = Point(q - 40, 500);
							 pt3 = Point(q - 40, 560);
							 pt4 = Point(q - 140, 560);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label16->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 140) >= this->Width)
								 {
									 life--;
									 label16->Text = "1";
								 }
							 }
						
						 }
						 //////////////2222222
						 g->DrawImage(Image::FromFile("game_pic/pic33.png"), q - 300, 460);
						 ///3333
						 g->DrawImage(Image::FromFile("game_pic/pic34.png"), q - 450, 460);
						 //////////444444444444444444
						 g->DrawImage(Image::FromFile("game_pic/pic17.png"), q - 600, 460);
						 //////////////////555555555555555555
						 g->FillPie(Brushes::Blue, q - 750, 460, 120, 120, 45, 100);
						 ////666666666666
						 if (label17->Text == "0")
						 {
							 pt1 = Point(q - 900, 460);
							 pt2 = Point(q - 760, 460);
							 pt3 = Point(q - 830, 581);
							 pt4 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 array<Point>^ p2 = { pt1, pt2, pt3 };

							 g->FillPolygon(Brushes::Bisque, p2);
							 y = tript(pt1, pt2, pt3, pt4);
							 if (y == 0)
							 {
								 score += 10;
								 label17->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 900) >= this->Width)
								 {
									 life--;
									 label17->Text = "1";
								 }
							 }
							
						 }
						 ///////777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic2.png"), q -1050 , 460);
						 //////////////////888888888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic23.png"), q - 1200, 460);
					 }
					 if (d == 2)		  //drawing shapes between q and q-1200 for d=2
					 {
						//////////////Top
						 ////////111111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic6.png"), q - 140, 300);
						 ///////////////////////2222222222222parr img
						 g->DrawImage(Image::FromFile("game_pic/pic7.png"), q - 300, 300);
						 ///////3333333333333333333333333
						 g->DrawImage(Image::FromFile("game_pic/pic12.png"), q - 450, 300);
						 ///////////////4444444444444444444444triangle
						 if (label14->Text == "0")
						 {
							 pt1 = Point(q - 600, 300);
							 pt2 = Point(q - 470, 300);
							 pt3 = Point(q - 545, 412);
							 pt4 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 array<Point>^ p2 = { pt1, pt2, pt3 };

							 g->FillPolygon(Brushes::Navy, p2);
							 y = tript(pt1, pt2, pt3, pt4);
							 if (y == 0)
							 {
								 score += 10;
								 label14->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 600) >= this->Width)
								 {
									 life--;
									 label14->Text = "1";
								 }
							 }
						
						 }
						 /////55555555555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic10.png"), q - 750, 300);
						 ////////////////////////66666666666666666666666
						 g->DrawImage(Image::FromFile("game_pic/pic18.png"), q - 900, 300);
						 ///////////////////7777777777777777777777777777777
						 if (label15->Text == "0")
						 {
							 g->FillRectangle(Brushes::Red, q - 1050, 300, 70, 120);
							 pt1 = Point(q - 1050, 300);
							 pt2 = Point(q - 980, 300);
							 pt3 = Point(q - 980, 420);
							 pt4 = Point(q - 1050, 420);
							 pt5 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = recpt(pt1, pt2, pt3, pt4, pt5);
							 if (y == 0)
							 {
								 score += 10;
								 label15->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 1050) >= this->Width)
								 {
									 life--;
									 label15->Text = "1";
								 }
							 }
							 
						 }
						 //////////////////////888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic19.png"), q - 1200, 300);
						 /////////////Down
						 //////////////111111111111111111
						 g->DrawImage(Image::FromFile("game_pic/pic39.png"), q - 140, 460);
						 /////22222222222222
						 g->DrawImage(Image::FromFile("game_pic/pic14.png"), q - 300, 460);
						 ////////////3
						 g->DrawImage(Image::FromFile("game_pic/pic26.png"), q - 450, 460);
						 //////////////////4444444444444444444444
						 g->DrawImage(Image::FromFile("game_pic/pic13.png"), q - 600, 460);
						 //////////////////////////////////55555555555555555
						 g->DrawImage(Image::FromFile("game_pic/pic21.png"), q - 750, 460);
						 ///////////////////////////66666666666666666666666666666
						 if (label16->Text == "0")
						 {
							 g->FillEllipse(Brushes::Blue, q - 900, 460, 120, 120);
							 //g->FillEllipse(Brushes::Blue, q - 290, 460, 120, 120);
							 pt1 = Point(q- 900, 460);
							 pt2 = Point(Convert::ToInt16(label5->Text) + slide + 10, Convert::ToInt16(label6->Text));
							 y = cirpt(pt1, pt2, 120);
							 if (y == 0)
							 {
								 score += 10;
								 label16->Text = "1";
								 y = 1;
							 }
							 else
							 {
								 if ((q - 900) >= this->Width)
								 {
									 life--;
									 label16->Text = "1";
								 }
							 }
							
						 }
						 /////////////////////////////77777777777777777777777
						 g->DrawImage(Image::FromFile("game_pic/pic7.png"), q - 1050, 460);
						 /////////////////////888888888888888888
						 g->DrawImage(Image::FromFile("game_pic/pic36.png"), q - 1200, 460);
					 }
	 }
				 	//label 5 and 6 initialized as 0 or 1 ...so that the click position does not remain constant in label 5 ,6 
				 label5->Text = "0";
				 label6->Text = "1";
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 	 label21->Text = Convert::ToString(life);
			 label7->Text = Convert::ToString(score);//showing score
		 p += slide;
			 q += slide;
			 label2->Text = Convert::ToString(p) + "+" + Convert::ToString(q);
			 if (p - 1200 >= 1200)
			 {		  //initializing label 9 to 13	and p 

				 label9->Text = "0";
				 label10->Text = "0"; 
				 label11->Text = "0";
				 label12->Text = "0";
				 label13->Text = "0";
				 p = q - 1200;
				 this->Refresh();
				 x = rand();
				 x = x % 3;
				 label3->Text = Convert::ToString(x);
				 if (score % 100 == 0)	//incraing speed if score%100==0
				 {	   if(timer1->Interval>30)
					 timer1->Interval -= 20;
				 }
				  if (score>0)
				 if (score % 40 >10)
				 {
					 imgvar = (imgvar + 1) % 10;
					 if (imgvar == 0)
						 this->BackgroundImage = Image::FromFile("bg/bg1.png");
					 if (imgvar == 1)
						 this->BackgroundImage = Image::FromFile("bg/bg2.png");
					 if (imgvar == 2)
						 this->BackgroundImage = Image::FromFile("bg/bg3.png");
					 if (imgvar == 3)
						 this->BackgroundImage = Image::FromFile("bg/bg4.png");
					 if (imgvar == 4)
						 this->BackgroundImage = Image::FromFile("bg/bg5.png");
					 if (imgvar == 5)
						 this->BackgroundImage = Image::FromFile("bg/bg3.png");
					 if (imgvar == 6)
						 this->BackgroundImage = Image::FromFile("bg/bg2.png");
					 if (imgvar == 7)
						 this->BackgroundImage = Image::FromFile("bg/bg1.png");
					 if (imgvar == 8)
						 this->BackgroundImage = Image::FromFile("bg/bg6.png");
					 if (imgvar == 9)
						 this->BackgroundImage = Image::FromFile("bg/bg7.png");


					 
				 }
			 }
			 if (q - 1200 >= 1200)
			 {
				 label14->Text = "0";
				 label15->Text = "0";
				 label16->Text = "0";
				 label17->Text = "0";
				 q = p - 1200;
				 z = rand();
				 z = z % 3;
				 label4->Text = Convert::ToString(z);
				 //
				 if (score>0)
				 if (score % 40 >10)
				 {
					 imgvar = (imgvar + 1) % 10;
					 if (imgvar == 0)
						 this->BackgroundImage = Image::FromFile("bg/bg1.png");
					 if (imgvar == 1)
						 this->BackgroundImage = Image::FromFile("bg/bg2.png");
					 if (imgvar == 2)
						 this->BackgroundImage = Image::FromFile("bg/bg3.png");
					 if (imgvar == 3)
						 this->BackgroundImage = Image::FromFile("bg/bg4.png");
					 if (imgvar == 4)
						 this->BackgroundImage = Image::FromFile("bg/bg5.png");
					 if (imgvar == 5)
						 this->BackgroundImage = Image::FromFile("bg/bg3.png");
					 if (imgvar == 6)
						 this->BackgroundImage = Image::FromFile("bg/bg2.png");
					 if (imgvar == 7)
						 this->BackgroundImage = Image::FromFile("bg/bg1.png");
					 if (imgvar == 8)
						 this->BackgroundImage = Image::FromFile("bg/bg6.png");
					 if (imgvar == 9)
						 this->BackgroundImage = Image::FromFile("bg/bg7.png");


					 
				 }
				
			 }
			 label18->Text = Convert::ToString(x) + "+" + Convert::ToString(z);
					  // panel3->Hide();
			 Invalidate();///  refreshing from same as this->Refresh
		 }
private: System::Void game_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			  label5->Text = Convert::ToString(e->X);
			 label6->Text = Convert::ToString(e->Y);
		 }
	private:System::Double cirpt(Point p1, Point p, double r)
{			  //p1 is the start point where drawing circle start..(check drawellipse)
	//p mouse click position point
		//if diff p-center<radius,........p is in circle
			Point cen = Point(p1.X + int(r / 2), p1.Y + int(r / 2));
			double x;
			x = (cen.X - p.X) * (cen.X - p.X) + (cen.Y - p.Y) * (cen.Y - p.Y);
			if(x < (r / 2) * (r / 2))
			{
				return 0;
			}
			else
				return 1;
}
	/*
	 

	*/
		private:System::Double area(Point p1, Point p2, Point p3)
		{
					double ar;
					ar = p1.X * (p2.Y - p3.Y) + p2.X * (p3.Y - p1.Y) + p3.X * (p1.Y - p2.Y);
					if (ar < 0)
						ar = -1 * ar;
					return ar;
		}

		private:System::Double tript(Point p1, Point p2, Point p3, Point p)
		{		   //p1 ,p2 p3 triangle angles ...p mouse click point
					double arr = area(p1, p2, p3);
					double a1 = area(p1, p2, p);
					double a2 = area(p2, p3, p);
					double a3 = area(p1, p3, p);
					double a = a1 + a2 + a3;
					if (arr == a)
						return 0;
					else
						return 1;
		}
		private:System::Double recpt(Point p1, Point p2, Point p3, Point p4, Point p)//abcd
		{
					double arr1 = area(p1, p2, p3);
					double arr2 = area(p1,p3,p4);
					double arr = arr1 + arr2;
					double a1 = area(p1, p2, p);
					double a2 = area(p2, p3, p);
					double a3 = area(p1, p4, p);
					double a4 = area(p3, p4, p);
					double a = a1 + a2 + a3+a4;
					if (arr == a)
						return 0;
					else
						return 1;

		}

private: System::Void pause_play_Click(System::Object^  sender, System::EventArgs^  e) {
			 //to pause play the game//pause play button
			
			  if (pause_play->Text == "Pause")
			 {
				 timer1->Stop();
				 panel1->Show();
				 play_label->Text = "Resume";
				 pause_play->Text = "Resume";
			 }
			else if (pause_play->Text == "Resume")
			 {
				 panel1->Hide();
				 panel2->Hide();
				 timer1->Start();
				 pause_play->Text = "Pause";
			 }
		 }
private: System::Void play_label_Click(System::Object^  sender, System::EventArgs^  e) {
			  panel2->Show();
			  panel2->Left=250;//click to play//then showing rules
		 }
private: System::Void ok_Click(System::Object^  sender, System::EventArgs^  e) {
			 //appears along with rules ...game is starting now
			 panel1->Hide();
			// panel2->Left=this->Width;
			 panel2->Hide();
			 timer1->Start();
			 label7->Visible = true;
			 label21->Visible = true;
			 pause_play->Text="Pause";
			 score_text->Visible = true;
			 life_text->Visible = true;
			 pause_play->Visible = true;
			 if(play_label->Text=="Click To Play" || play_label->Text=="Play again")
				 totalnumberplayed++;
		 }
private:System::Void initiate()
{				//after one game.......everything set back to initial position.
			  life = 10;
			 imgvar=0;
			  
			// panel3->Hide();
			panel2->Hide();
			label7->Visible = false;
			label21->Visible = false;
			score_text->Visible = false;
			life_text->Visible = false;
			pause_play->Visible = false;
			p = 0;
			z = rand()%3;
			 q = -1200;
			 x = 0;
			 c = 0;
			 d = 0;
			 y = 1;
			score = 0;
			slide = 20;
			
			 	 richTextBox2->Text="";
			
			//panel2->Show();
			label9->Text = "0";
				 label10->Text = "0"; 
				 label11->Text = "0";
				 label12->Text = "0";
				 label13->Text = "0";
				  label14->Text = "0";
				 label15->Text = "0";
				 label16->Text = "0";
				 label17->Text = "0";
				 // this->Refresh();
				 panel1->Show();

}
private: System::Void exit_label_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exit label
			 Exit_Click(sender,e);		  //calling exit button
		 }
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
			 /*	  saving
			 	name=username
				field_nmae=game;
				starttime,
				total score=highestscore
			 	  total_win=number of times he playes
				  time spent =total time he played
			 		to database...before ext
			 
			 */
			 try{
					
			  OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;" ;
 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand("Insert into identifying_shape_prograss (name,field_name,start_time,total_score,total_win,time_spent) values('"+name+"','"+field+"','"+date+"','"+highscore+"','"+totalnumberplayed+"','"+time+"') ;", dbcon);		
			
					 dbcon->Open();
					
					 command->ExecuteNonQuery();
					 
					 dbcon->Close();
					 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 this->Close();

		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 time++;  
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //after life< 0 timer 3 starts
			  timer3->Stop();
				 panel1->Left=250;
			
						 initiate();
			 
			 richTextBox2->Text="Your Score        "+Convert::ToString(score);	//shoewing score in planel 3
			
			
		 }


};
}
