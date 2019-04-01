#pragma once

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
	/// Summary for question_no_figure
	/// </summary>
	public ref class question_no_figure : public System::Windows::Forms::Form
	{
	public:
		String^ name;
	public:
		question_no_figure(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	   question_no_figure(String^ st)
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
		~question_no_figure()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  check;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(question_no_figure::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(545, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 29);
			this->label6->TabIndex = 61;
			this->label6->Text = L"25";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1086, 383);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 25);
			this->label5->TabIndex = 60;
			this->label5->Text = L"0";
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &question_no_figure::timer1_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1014, 383);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Marks";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1086, 624);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 25);
			this->label3->TabIndex = 58;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(938, 624);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Your Score";
			// 
			// check
			// 
			this->check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->check->Location = System::Drawing::Point(156, 579);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(124, 62);
			this->check->TabIndex = 51;
			this->check->Text = L"check";
			this->check->UseVisualStyleBackColor = true;
			this->check->Click += gcnew System::EventHandler(this, &question_no_figure::check_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(560, 538);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(352, 22);
			this->textBox5->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(340, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 56;
			this->label1->Text = L"0";
			this->label1->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(798, 455);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(114, 22);
			this->textBox4->TabIndex = 45;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(774, 460);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(18, 17);
			this->checkBox4->TabIndex = 49;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckStateChanged += gcnew System::EventHandler(this, &question_no_figure::checkBox4_CheckStateChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(17, 33);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(965, 187);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Location = System::Drawing::Point(187, 42);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1002, 243);
			this->panel3->TabIndex = 55;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(20, 74);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(965, 187);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(526, 461);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(18, 17);
			this->checkBox3->TabIndex = 48;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckStateChanged += gcnew System::EventHandler(this, &question_no_figure::checkBox3_CheckStateChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(550, 460);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(114, 22);
			this->textBox3->TabIndex = 44;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(296, 465);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(18, 17);
			this->checkBox2->TabIndex = 47;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckStateChanged += gcnew System::EventHandler(this, &question_no_figure::checkBox2_CheckStateChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->richTextBox2);
			this->panel2->Location = System::Drawing::Point(95, 65);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1017, 251);
			this->panel2->TabIndex = 54;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(17, 33);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(965, 187);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(320, 461);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(114, 22);
			this->textBox2->TabIndex = 43;
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &question_no_figure::timer3_Tick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(43, 470);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &question_no_figure::checkBox1_CheckStateChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(875, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 39);
			this->button3->TabIndex = 53;
			this->button3->Text = L"Next";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &question_no_figure::button3_Click);
			// 
			// timer4
			// 
			this->timer4->Interval = 500;
			this->timer4->Tick += gcnew System::EventHandler(this, &question_no_figure::timer4_Tick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(654, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 33);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &question_no_figure::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 465);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(114, 22);
			this->textBox1->TabIndex = 42;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(0, 96);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1017, 268);
			this->panel1->TabIndex = 41;
			// 
			// question_no_figure
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 760);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->check);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"question_no_figure";
			this->Text = L"question_no_figure";
			this->Load += gcnew System::EventHandler(this, &question_no_figure::question_no_figure_Load);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private:
	   int c,score,time,rowindb,z,timeleft,correctqs,y,marks,startime;
	   String^ ans;	  //answer from database
	   String^ urans;  //user choosen ans
	   String^ op1;		  //options from databsse
	   String^ op2;
	   String^ op3;
	   String^ op4;
	   String^ date;
	   String^ field;
	    String^ str;
		//c =count of question
	
		 //	op1,...4 will appear in textBox1,...4
#pragma endregion
	
private: System::Void checkBox1_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			 ///checkbox for option 1
			 if (checkBox1->Checked == true)
				 urans = textBox1->Text;
			 else if (checkBox1->Checked == false)
				 urans = "";
			 textBox5->Text = "";
			 checkBox2->Checked = false;
			 checkBox3->Checked = false;
			 checkBox4->Checked = false;
		 }
private: System::Void checkBox2_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			  ///checkbox for option 2
			   if (checkBox2->Checked == true)
				 urans = textBox2->Text;
			 else if (checkBox2->Checked == false)
				 urans = "";
			 textBox5->Text = "";
			 checkBox1->Checked = false;
			 checkBox3->Checked = false;
			 checkBox4->Checked = false;
		 }
private: System::Void checkBox3_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			  ///checkbox for option 3
			   if (checkBox3->Checked == true)
				 urans = textBox3->Text;
			 else if (checkBox3->Checked == false)
				 urans = "";
			 textBox5->Text = "";
			 checkBox1->Checked = false;
			 checkBox2->Checked = false;
			 checkBox4->Checked = false;
			 textBox5->Text = "";
		 }
private: System::Void checkBox4_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			  ///checkbox for option 4
			  if (checkBox4->Checked == true)
				 urans = textBox4->Text;
			 else if (checkBox4->Checked == false)
				 urans = "";
			 checkBox1->Checked = false;
			 checkBox3->Checked = false;
			 checkBox2->Checked = false;
			 textBox5->Text = "";
		 }
private: System::Void check_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (urans != "" && ans!="")
			 {
				 if (urans == ans)
				 { textBox5->Text = "Right";	//if urans is correct tb5 will show correct				
					correctqs++;		//no. of correct qu increases
				  time+=25-timeleft;   //addig time spend in the question to total time..
				 	  score=score+Convert::ToInt32(label5->Text); //label5=marks....adding marks to score
					  label3->Text=Convert::ToString(score);	   //label3=score.....showing score
					  timer3->Stop();		//(not so imp)
					 timeleft=25;			   //resetting time left
					 timer4->Start();		  //go to next qs
			 }
			else 
			{ textBox5->Text = "Wrong";	   //if urans is wrong tb5 will show wrong	
				 time+=25-timeleft;			// //addig time spend in the question to total time..
				 timeleft=25;			   //resetting timeleft
				 timer4->Start();//add comment to stop slide question after giving wrong answer...}
			 }
		 }
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {

			  timeleft--;		   //timeleft decrease at each timertick
		
			 label6->Text=Convert::ToString(timeleft); //
			 if(timeleft==0)			 //
			 {
				 timer3->Stop();
					time+=25-timeleft;
				  timer4->Start();	 		 //go to next question
			 }

		 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  //nxt button
			  timer3->Stop();
			 timeleft=25;
			 panel1->Show();
			 panel2->Show();
			 panel3->Show();
			 button3->Hide();
			 //removing everything from tb1.....tb5 and checkbox ticks
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
		
			  label5->Text="";
			 checkBox1->Checked = false;
			 checkBox2->Checked = false;
			 checkBox3->Checked = false;
			 checkBox4->Checked = false;
			 z = int(this->Width - panel1->Width) / 2;
			 if(c>=rowindb)		 ///if user complete all question.............first question will appear.
			 {
				 c=1;
				 go();
			 }
			 else
			 {
				 c++;
				 try{
				 OleDbConnection^ dbcon = gcnew OleDbConnection();
				 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";
				 String ^ str = "SELECT * FROM nofig_qs WHERE ID=" + c + ";";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
				 dbcon->Open();
				 OleDbDataReader^ reader;
				 reader = command->ExecuteReader();
				 if (reader->Read())
				 {	 //option and marks from database taking into variables 
					 op1 = (String^)reader->GetString(2);
					 op2 = (String^)reader->GetString(3);
					 op3 = (String^)reader->GetString(4);
					 op4 = (String^)reader->GetString(5);
					 ans = (String^)reader->GetString(6);
					 marks=	  reader->GetInt32(7);
					  //label5->Text=Convert::ToString(reader->GetInt32(7));
					  //setting question and question image in pictuebox and rich textbox
					 if (c % 3 == 1)
					 {
						 richTextBox1->Text = (String^)reader->GetString(1);
						 panel1->Left = this->Width;
						 panel2->Left = -panel1->Width;
						
					 }

					 if (c % 3 == 0)
					 {
						
						 richTextBox3->Text = (String^)reader->GetString(1);
						 panel3->Left = this->Width;
						 panel1->Left = -panel1->Width;
						
					 }
					 if (c % 3 == 2)
					 {
						
						 richTextBox2->Text = (String^)reader->GetString(1);
						 panel2->Left = this->Width;
						 panel3->Left = -panel1->Width;
						
					 }

				 }
				 dbcon->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }
			 timer1->Start();
			 }
			 label1->Text = Convert::ToString(c);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			    //exit button
			 save();		   //saving all records before exit
				this->Close();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			  if (c % 3 == 0)
			 {		  //panel3 sliding from right and stops when reach postion z and all textbox filled
				 if (panel3->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();
				 	timer3->Start();
					 label6->Text="25";
					 panel1->Hide();
					 panel2->Hide();
					 textBox1->Text = op1;
					 textBox2->Text = op2;
					 textBox3->Text = op3;
					 textBox4->Text = op4;
					 label5->Text=Convert::ToString(marks);

				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 if (c % 3 == 1)
			 {		     //panel1 sliding from right and stops when reach postion z  and all textbox filled
				 if (panel1->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();
					 	timer3->Start();
					 label6->Text="25";
					 panel3->Hide();
					 panel2->Hide();
					 textBox1->Text = op1;
					 textBox2->Text = op2;
					 textBox3->Text = op3;
					 textBox4->Text = op4;
					 label5->Text=Convert::ToString(marks);

				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 if (c % 3 == 2)
			 {		    //panel2 sliding from right and stops when reach postion z and all textbox filled
				 if (panel2->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();
					
							timer3->Start();
					 label6->Text="25";
					 panel3->Hide();
					 panel1->Hide();
					 textBox1->Text = op1;
					 textBox2->Text = op2;
					 textBox3->Text = op3;
					 textBox4->Text = op4;
				 label5->Text=Convert::ToString(marks);
				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 
			 if(c <= 1)
			 {
				 c = 1;
				 label1->Text = "1";
			 }
			
		 }
		 
private:System::Void go(){

			//load question option from database id =c....
			 //showing them in the  textbox and richtextbox described above
			button3->Show();
			panel1->Show();
			panel2->Show();
			panel3->Show();
			try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";
					 String ^ str = "SELECT * FROM nofig_qs WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if (reader->Read())
					 {
						
						 textBox1->Text = (String^)reader->GetString(2);
						 textBox2->Text = (String^)reader->GetString(3);
						 textBox3->Text = (String^)reader->GetString(4);
						 textBox4->Text = (String^)reader->GetString(5);
						 label5->Text=Convert::ToString(reader->GetInt32(7));
						 ans = (String^)reader->GetString(6);
						 {
					 if(c%3==1)
									{richTextBox1->Text = (String^)reader->GetString(1);
										
									panel1->Left = z;
									panel3->Left = -panel1->Width;
									  panel2->Left = this->Width;
									  panel2->Hide();
									  panel3->Hide();
									  timer3->Start();	
									}
					 if(c%3==0)
							  {
								   
								 richTextBox3->Text =(String^)reader->GetString(1);
							
								 panel2->Left = -panel1->Width;
								panel1->Left = this->Width;
								panel3->Left=z;
								 panel2->Hide();
									  panel1->Hide();
									  
									  timer3->Start();
								
							  }
							  if(c%3==2)
							  {			  
								   richTextBox2->Text = (String^)reader->GetString(1);
									 panel3->Left = this->Width;
									panel1->Left = -panel1->Width;
									panel2->Left =z;
									 panel1->Hide();
									  panel3->Hide();
									 
									  timer3->Start();
								
							  }
						 }

					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
}
private: System::Void question_no_figure_Load(System::Object^  sender, System::EventArgs^  e) {
			  field="No figure questions";
			 date=Convert::ToString(DateTime::Now);
			 urans="";
		
			 timeleft=25;  //initializing timefeft
			  button2->Left = this->Width - 150;
			 button3->Left = this->Width - 150;
			 panel1->Top = 90;
			 panel2->Top = 90;
			 panel3->Top = 90;
			 button2->Top=30;
			 button3->Top=60;
			 //initializing variables............
			 z = int(this->Width - panel1->Width) / 2;
			   time=0;
			   score=0;
			   correctqs=0;

	
			rowindb = 0;
				try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";

					 String ^ str = "SELECT * FROM register_table WHERE name='"+name+"';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if(reader->Read())
					 {
						y=reader->GetInt32(4);
					 }
					 dbcon->Close();
					 
				 }
				catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
			
				
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";

					 String ^ str = "SELECT * FROM nofig_qs ";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 while(reader->Read())
					 {
						 rowindb++;
					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 label3->Text=Convert::ToString(score);
				 
				 /*if(y==rowindb)
				{
					c=1;
				   go();
				}
				else
				{
					c=y;
					go();
				}	   */
				 
				 c=y;
				 go();	//////showing the question using go function
		 }
private: System::Void save()
		 {
			 c++;
			 if(c>rowindb)
				 c=1;
			  /*
			   saving ....

			   	name
				field,
				total win=correcctly done question 
				start time=date+time
			   	 total score and time spent in database
			   
			   */

		  try{
					
			  OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;" ;
 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand("Insert into identifying_shape_prograss (name,field_name,start_time,total_score,total_win,time_spent) values('"+name+"','"+field+"','"+date+"','"+score+"','"+correctqs+"','"+time+"') ;", dbcon);		
			
					 dbcon->Open();
					
					 command->ExecuteNonQuery();
					 
					 dbcon->Close();
					 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }


				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";

					// String ^ str = "UPDATE register_table SET time_taken_no_fig_question='"+time+"' ,score_no_figure ='"+score+"' ,total_done_nofig='"+c+"' ,nofig_correct='"+correctqs+"' WHERE name = " +name+ "; ";
				 str = "UPDATE register_table SET nofigqs_read='"+c+"' WHERE name ='"+name+"';";					
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand();
					 command->CommandType = CommandType::Text;
					 command->CommandText = str;
					 command->Connection = dbcon;
					
					 dbcon->Open();
					
					 command->ExecuteNonQuery();
					 
					 dbcon->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
			 //str="Insert into identifying_shape_prograss (name,field_name,start_time,total_score,total_win) values('"+name+"','"+field+"','"+score+"','"+correctqs"')";
		 }

private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer4->Stop();
			   button3_Click(sender, e)	   ;  //calling button3(nxt button)
		 }
};
}
