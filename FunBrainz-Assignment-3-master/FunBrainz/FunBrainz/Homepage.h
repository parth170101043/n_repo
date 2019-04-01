#pragma once
#include "profile.h"
#include "Arithmetic1.h"
#include "Game_2048.h"
#include "Level_pipeline.h"
#include "Image_Quiz.h"
#include "Abacus.h"
#include "shapesPanel.h"
#include "operationsRedirect.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
		Form ^ obj;
	private: System::Windows::Forms::Button^  Deletebtn;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btn_pipeline;

	private: System::Windows::Forms::Button^  btn_2048;
	private: System::Windows::Forms::Button^  btn_quiz;
	private: System::Windows::Forms::Button^  button1;



	public:
		String^ user;

	public:
		Homepage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Homepage(Form ^ obj1)
		{
			obj=obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




















	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  Arithmeticbtn;
	private: System::Windows::Forms::Button^  Profilebtn;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  backbtn;


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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Arithmeticbtn = (gcnew System::Windows::Forms::Button());
			this->Profilebtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_quiz = (gcnew System::Windows::Forms::Button());
			this->btn_pipeline = (gcnew System::Windows::Forms::Button());
			this->btn_2048 = (gcnew System::Windows::Forms::Button());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->Deletebtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 340);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 28);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Quizzes and Puzzles";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Homepage::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(29, 260);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Identifying Shapes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Homepage::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(29, 200);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Abacus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
			// 
			// Arithmeticbtn
			// 
			this->Arithmeticbtn->Location = System::Drawing::Point(29, 102);
			this->Arithmeticbtn->Margin = System::Windows::Forms::Padding(4);
			this->Arithmeticbtn->Name = L"Arithmeticbtn";
			this->Arithmeticbtn->Size = System::Drawing::Size(83, 28);
			this->Arithmeticbtn->TabIndex = 3;
			this->Arithmeticbtn->Text = L"Graph For Cricket";
			this->Arithmeticbtn->UseVisualStyleBackColor = true;
			this->Arithmeticbtn->Click += gcnew System::EventHandler(this, &Homepage::Arithmeticbtn_Click);
			// 
			// Profilebtn
			// 
			this->Profilebtn->Location = System::Drawing::Point(29, 33);
			this->Profilebtn->Margin = System::Windows::Forms::Padding(4);
			this->Profilebtn->Name = L"Profilebtn";
			this->Profilebtn->Size = System::Drawing::Size(83, 28);
			this->Profilebtn->TabIndex = 4;
			this->Profilebtn->Text = L"Profile";
			this->Profilebtn->UseVisualStyleBackColor = true;
			this->Profilebtn->Click += gcnew System::EventHandler(this, &Homepage::Profilebtn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(119, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1109, 590);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btn_quiz);
			this->panel2->Controls->Add(this->btn_pipeline);
			this->panel2->Controls->Add(this->btn_2048);
			this->panel2->Location = System::Drawing::Point(124, 69);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(561, 364);
			this->panel2->TabIndex = 11;
			// 
			// btn_quiz
			// 
			this->btn_quiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_quiz->Location = System::Drawing::Point(81, 238);
			this->btn_quiz->Margin = System::Windows::Forms::Padding(4);
			this->btn_quiz->Name = L"btn_quiz";
			this->btn_quiz->Size = System::Drawing::Size(176, 69);
			this->btn_quiz->TabIndex = 2;
			this->btn_quiz->Text = L"Image Quiz";
			this->btn_quiz->UseVisualStyleBackColor = true;
			this->btn_quiz->Click += gcnew System::EventHandler(this, &Homepage::btn_quiz_Click);
			// 
			// btn_pipeline
			// 
			this->btn_pipeline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_pipeline->Location = System::Drawing::Point(81, 133);
			this->btn_pipeline->Margin = System::Windows::Forms::Padding(4);
			this->btn_pipeline->Name = L"btn_pipeline";
			this->btn_pipeline->Size = System::Drawing::Size(176, 69);
			this->btn_pipeline->TabIndex = 1;
			this->btn_pipeline->Text = L"Pipeline";
			this->btn_pipeline->UseVisualStyleBackColor = true;
			this->btn_pipeline->Click += gcnew System::EventHandler(this, &Homepage::btn_pipeline_Click);
			// 
			// btn_2048
			// 
			this->btn_2048->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_2048->Location = System::Drawing::Point(81, 43);
			this->btn_2048->Margin = System::Windows::Forms::Padding(4);
			this->btn_2048->Name = L"btn_2048";
			this->btn_2048->Size = System::Drawing::Size(176, 69);
			this->btn_2048->TabIndex = 0;
			this->btn_2048->Text = L"2048";
			this->btn_2048->UseVisualStyleBackColor = true;
			this->btn_2048->Click += gcnew System::EventHandler(this, &Homepage::btn_2048_Click);
			// 
			// backbtn
			// 
			this->backbtn->Location = System::Drawing::Point(1105, 629);
			this->backbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(75, 23);
			this->backbtn->TabIndex = 8;
			this->backbtn->Text = L"Back";
			this->backbtn->UseVisualStyleBackColor = true;
			this->backbtn->Click += gcnew System::EventHandler(this, &Homepage::backbtn_Click);
			// 
			// Deletebtn
			// 
			this->Deletebtn->Location = System::Drawing::Point(29, 409);
			this->Deletebtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Deletebtn->Name = L"Deletebtn";
			this->Deletebtn->Size = System::Drawing::Size(83, 43);
			this->Deletebtn->TabIndex = 10;
			this->Deletebtn->Text = L"Delete account";
			this->Deletebtn->UseVisualStyleBackColor = true;
			this->Deletebtn->Click += gcnew System::EventHandler(this, &Homepage::Deletebtn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 48);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Basic Operations";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 654);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Deletebtn);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->backbtn);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Arithmeticbtn);
			this->Controls->Add(this->Profilebtn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void Profilebtn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 profile ^ f = gcnew profile();
			 f->user=user;
			 panel1->Controls->Clear();
			 panel1->Controls->Add(f);
		 }
private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
				con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
		 }
private: System::Void backbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 this->Hide();
			 obj->Show();
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void Arithmeticbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 {
              Arithmetic1 ^ f =  gcnew Arithmetic1();
			  f->user=user;
			  panel1->Controls->Clear();
			  panel1->Controls->Add(f);
			 //cloud ^form =gcnew cloud(this);
			 //form->ShowDialog();
		 }
private: System::Void Deletebtn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 try
			 {
			    String ^ Sql = "DELETE  FROM Students WHERE UserName = '" + user + "'  ";
			    con->Open();
				OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				command->ExecuteNonQuery();
				con->Close();
			 }
			 catch(Exception ^ ex)
			 {
				  con->Close();
				 return;
			 }

			 backbtn_Click(sender,e);

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			//	puzzlesRedirect ^ var = gcnew puzzlesRedirect();
				//var -> Show();

		 }
private: System::Void btn_2048_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 Game_2048 ^form =gcnew Game_2048(this);
			 form->ShowDialog();
		 }
private: System::Void btn_pipeline_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 Level_pipeline ^form =gcnew Level_pipeline(this);
			 form->ShowDialog();
		 
		 }
private: System::Void btn_quiz_Click(System::Object^  sender, System::EventArgs^  e) {
			 Image_Quiz ^form =gcnew Image_Quiz(this);
			 form->ShowDialog();

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Abacus ^form =gcnew Abacus(this);
			 form->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 shapesPanel ^form2 = gcnew shapesPanel(this,user);
			 form2->ShowDialog();



		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int student=1;
			 try {
				 
				 String ^Sql = "Select [StudentID] from Students where [UserName] = '" + user + "';";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 student = (int) command->ExecuteScalar();
				 con->Close();
			 }
			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }
			 operationsRedirect ^ f =  gcnew operationsRedirect(student);
			 panel1->Controls->Clear();
			 panel1->Controls->Add(f);
		 }
};
}
