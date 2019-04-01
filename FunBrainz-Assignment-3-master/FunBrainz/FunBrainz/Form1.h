#pragma once
#include "Homepage.h"
#include "Signup.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Passwordtxt;

	private: System::Windows::Forms::TextBox^  UserNametxt;

	private: System::Windows::Forms::Button^  signupbtn;
	private: System::Windows::Forms::Button^  loginbtn;
	private: System::Windows::Forms::CheckBox^  showpass;
	private: System::Windows::Forms::Button^  Forget;

	private: System::Windows::Forms::Button^  Security;
	private: System::Windows::Forms::Button^  Submitbtn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  NewPassword;
	private: System::Windows::Forms::TextBox^  NewPass;
	private: System::Windows::Forms::ComboBox^  question;
	private: System::Windows::Forms::TextBox^  answer;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
















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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->UserNametxt = (gcnew System::Windows::Forms::TextBox());
			this->signupbtn = (gcnew System::Windows::Forms::Button());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->showpass = (gcnew System::Windows::Forms::CheckBox());
			this->Forget = (gcnew System::Windows::Forms::Button());
			this->Security = (gcnew System::Windows::Forms::Button());
			this->Submitbtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->NewPassword = (gcnew System::Windows::Forms::Label());
			this->NewPass = (gcnew System::Windows::Forms::TextBox());
			this->question = (gcnew System::Windows::Forms::ComboBox());
			this->answer = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(309, 126);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(309, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(310, 271);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"If you don\'t have an account";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Passwordtxt
			// 
			this->Passwordtxt->Location = System::Drawing::Point(460, 126);
			this->Passwordtxt->Margin = System::Windows::Forms::Padding(4);
			this->Passwordtxt->Name = L"Passwordtxt";
			this->Passwordtxt->Size = System::Drawing::Size(245, 22);
			this->Passwordtxt->TabIndex = 7;
			// 
			// UserNametxt
			// 
			this->UserNametxt->Location = System::Drawing::Point(460, 69);
			this->UserNametxt->Margin = System::Windows::Forms::Padding(4);
			this->UserNametxt->Name = L"UserNametxt";
			this->UserNametxt->Size = System::Drawing::Size(245, 22);
			this->UserNametxt->TabIndex = 8;
			// 
			// signupbtn
			// 
			this->signupbtn->Location = System::Drawing::Point(569, 271);
			this->signupbtn->Margin = System::Windows::Forms::Padding(4);
			this->signupbtn->Name = L"signupbtn";
			this->signupbtn->Size = System::Drawing::Size(136, 50);
			this->signupbtn->TabIndex = 5;
			this->signupbtn->Text = L"Sign up";
			this->signupbtn->UseVisualStyleBackColor = true;
			this->signupbtn->Click += gcnew System::EventHandler(this, &Form1::signupbtn_Click);
			// 
			// loginbtn
			// 
			this->loginbtn->Location = System::Drawing::Point(429, 191);
			this->loginbtn->Margin = System::Windows::Forms::Padding(4);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(136, 50);
			this->loginbtn->TabIndex = 6;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = true;
			this->loginbtn->Click += gcnew System::EventHandler(this, &Form1::loginbtn_Click);
			// 
			// showpass
			// 
			this->showpass->Location = System::Drawing::Point(664, 191);
			this->showpass->Name = L"showpass";
			this->showpass->Size = System::Drawing::Size(186, 24);
			this->showpass->TabIndex = 12;
			this->showpass->Text = L"Showpassword";
			this->showpass->UseVisualStyleBackColor = true;
			this->showpass->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Forget
			// 
			this->Forget->Location = System::Drawing::Point(314, 342);
			this->Forget->Name = L"Forget";
			this->Forget->Size = System::Drawing::Size(150, 34);
			this->Forget->TabIndex = 13;
			this->Forget->Text = L"ForgetPasssword";
			this->Forget->UseVisualStyleBackColor = true;
			this->Forget->Click += gcnew System::EventHandler(this, &Form1::Forget_Click);
			// 
			// Security
			// 
			this->Security->Location = System::Drawing::Point(555, 335);
			this->Security->Name = L"Security";
			this->Security->Size = System::Drawing::Size(150, 41);
			this->Security->TabIndex = 15;
			this->Security->Text = L"Sequrity Question";
			this->Security->UseVisualStyleBackColor = true;
			this->Security->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Submitbtn
			// 
			this->Submitbtn->Location = System::Drawing::Point(94, 189);
			this->Submitbtn->Name = L"Submitbtn";
			this->Submitbtn->Size = System::Drawing::Size(171, 23);
			this->Submitbtn->TabIndex = 16;
			this->Submitbtn->Text = L"button1";
			this->Submitbtn->UseVisualStyleBackColor = true;
			this->Submitbtn->Click += gcnew System::EventHandler(this, &Form1::Submitbtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->NewPassword);
			this->groupBox1->Controls->Add(this->Submitbtn);
			this->groupBox1->Controls->Add(this->NewPass);
			this->groupBox1->Controls->Add(this->question);
			this->groupBox1->Controls->Add(this->answer);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(314, 382);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(451, 231);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// NewPassword
			// 
			this->NewPassword->AutoSize = true;
			this->NewPassword->Location = System::Drawing::Point(29, 137);
			this->NewPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NewPassword->Name = L"NewPassword";
			this->NewPassword->Size = System::Drawing::Size(96, 17);
			this->NewPassword->TabIndex = 22;
			this->NewPassword->Text = L"NewPassowrd";
			// 
			// NewPass
			// 
			this->NewPass->Location = System::Drawing::Point(178, 132);
			this->NewPass->Name = L"NewPass";
			this->NewPass->Size = System::Drawing::Size(154, 22);
			this->NewPass->TabIndex = 21;
			// 
			// question
			// 
			this->question->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->question->FormattingEnabled = true;
			this->question->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Favourite book", L"Favourite food", L"Favourite teacher", 
				L"Favourite colour", L"birth place"});
			this->question->Location = System::Drawing::Point(172, 46);
			this->question->Margin = System::Windows::Forms::Padding(4);
			this->question->Name = L"question";
			this->question->Size = System::Drawing::Size(160, 24);
			this->question->TabIndex = 20;
			this->question->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::question_SelectedIndexChanged);
			// 
			// answer
			// 
			this->answer->Location = System::Drawing::Point(172, 86);
			this->answer->Margin = System::Windows::Forms::Padding(4);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(160, 22);
			this->answer->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 86);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Security Answer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 47);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Security Question";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 15);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Answer Security Question";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 637);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Security);
			this->Controls->Add(this->Forget);
			this->Controls->Add(this->showpass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Passwordtxt);
			this->Controls->Add(this->UserNametxt);
			this->Controls->Add(this->signupbtn);
			this->Controls->Add(this->loginbtn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static String^ strPassword="";
		static String^ CurrentUserEmail=""; 
		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
                UserNametxt->Text="";
			    Passwordtxt->Text="";	
				answer->Text="";
			   question->SelectedIndex = -1;
				NewPass->Text="";
				Passwordtxt->PasswordChar='*';
				groupBox1->Visible=false;	
				con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
			 }

	private: System :: Void cleartext()
			 {
				  UserNametxt->Text="";
				  Passwordtxt->Text="";
				  answer->Text="";
			   question->SelectedIndex = -1;
				  NewPass->Text="";
				  showpass->Checked=false;
			 }
	         private: System::String ^ updatetext(String ^ s)
					   {
									s = s->TrimEnd(' ');
									s = s->TrimStart(' ');
									return s;
					   }
private: System::Void loginbtn_Click(System::Object^  sender, System::EventArgs^  e)
{
		//updating UserName
		UserNametxt->Text=updatetext(UserNametxt->Text);
		int flag=0;
		//connection opening
		try
		{
				String ^ Sql = "SELECT * FROM Students WHERE UserName = '" + UserNametxt->Text + "' and Password = '" + Passwordtxt->Text + "' ";
				OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
				if(reader->HasRows)  flag=1;
				con->Close();
		   }
		catch(Exception ^ ex)
		{
					con->Close();
					MessageBox::Show(ex->Message);
					MessageBox::Show("Enter valid ones");
					return ;
		}
					

		if(flag==1)
		{
					String ^ x = UserNametxt->Text;
					cleartext();
					Homepage ^ f3 = gcnew Homepage(this);
					this->Hide();
					f3->user = x;
				    f3->ShowDialog();
					this->Show();
		}
		else MessageBox::Show("Enter valid ones");
	}
private: System::Void signupbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			                 cleartext();
			                 Signup ^ f = gcnew Signup(this);
							 this->Hide();  
							 f->ShowDialog();
		 }

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			     if (showpass->Checked) Passwordtxt->PasswordChar='\0';
				 else    Passwordtxt->PasswordChar='*';
		 }

private: System::String ^  SuggestPassword()
		 {
			 String ^ su = "";
			 int ch;
			 String ^  Symbols = "`~!@#$%^&*()_-=+[{]}\;:'?/.><";
			 String ^  Letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			 for (int i = 0; i <= 10; ++i)
			 {
				 su += Symbols[rand() % 20];
				 su += Letters[rand() % 26];
			 }
			 return su;
		 }

     int send(String ^ email)
			 {
				  strPassword=SuggestPassword();
			   try{
					 MailMessage ^ mail = gcnew MailMessage("trakeshreddy1999@gmail.com", email, "Your New Password", strPassword);
					 SmtpClient ^ client = gcnew SmtpClient("smtp.gmail.com");
					 client->Port = 587;
					 client->Credentials = gcnew System::Net::NetworkCredential("trakeshreddy1999@gmail.com", "rakeshreddy");
					 client->EnableSsl = true;
					 client->Send(mail);
					 MessageBox::Show("mail sent succesfully");
					 return 1;
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 return 0;
				 }
				 return 0;

			}

	private: System::Void update()
	 {    
		  
	     	//connection query
			String ^ Sql = "update [Students] set  [Password] = '"+ strPassword +"'  WHERE  UserName  = '"+ UserNametxt->Text + "' ";
			con->Open();
			try
			{
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					command->ExecuteNonQuery();
					con->Close();
					MessageBox::Show("Password changed");
			}
			catch (Exception ^ ex)
			{
					MessageBox::Show(ex->Message);
					MessageBox::Show("something wrong with updating password");
					con->Close();
			}

	 }
         
			 
	  int SearchUserName()
         {
			      int flag=0;
				  String ^ email;
			      UserNametxt->Text=updatetext(UserNametxt->Text);

                  //connection query
						 String ^ Sql = "SELECT * FROM Students WHERE UserName = '" + UserNametxt->Text + "' ";
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
						 con->Open();
						 try{
								OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
								if(reader->HasRows)  flag=1;
								con->Close();
						    }
							catch(Exception ^ ex)
							{
												con->Close();
												MessageBox::Show(ex->Message);
												return 0;
							}
							return flag;

	     }

private: System::Void Forget_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			          int  count=0;
				      count=SearchUserName();
					  if(!SearchUserName()) { MessageBox::Show("Enter Valid UserName "); return ;}
				   

					 //extracting email
                     String ^Sql = "Select  Email from Students WHERE  UserName = '" + UserNametxt->Text + "' ";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 CurrentUserEmail = (String ^)command->ExecuteScalar();
					 con->Close();
					 MessageBox::Show(CurrentUserEmail);


					 //sending email
					if(send(CurrentUserEmail))
						{
							update();
							MessageBox::Show("email was sent"); 
						}
						else
						{
							MessageBox::Show("Forget Password Currently Unaviabale");
						}
					  
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
              if(groupBox1->Visible==true) groupBox1->Visible=false;
			  else groupBox1->Visible=true;
	        
		 }
private: System::Void Submitbtn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			       int flag=0;
				    UserNametxt->Text=updatetext(UserNametxt->Text);

			             String ^ Sql = "SELECT *  FROM Students WHERE  UserName  = '" + UserNametxt->Text + "' ";
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					     con->Open();
						 OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
						 if(reader->HasRows)  flag=1;
						 con->Close();
						 if(flag==0) {MessageBox::Show("Enter valid user name");cleartext();return ;}

						 flag=0;
						 Sql = "SELECT *  FROM Students WHERE  UserName= '"+UserNametxt->Text+"' and Securityquestion= '"+question->Text+"' and answer= '"+answer->Text+"' ";
					     command = gcnew OleDb::OleDbCommand(Sql, con);
					     con->Open();
						 reader=command->ExecuteReader();
						 if(reader->HasRows)  flag=1;
						 con->Close();
						 if(flag==0) {MessageBox::Show("Enter valid question answer");cleartext();return ;}
						 strPassword=NewPass->Text;
						 update();
						 cleartext();
						 groupBox1->Visible=false;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void question_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

