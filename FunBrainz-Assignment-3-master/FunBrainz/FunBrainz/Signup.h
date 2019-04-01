#pragma once
#include "Homepage.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	   Form ^ obj;
	public:
		Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Signup(Form ^ obj1)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Emailtxt;
	private: System::Windows::Forms::TextBox^  Mobiletxt;


	private: System::Windows::Forms::TextBox^  Classtxt;
	private: System::Windows::Forms::TextBox^  LastNametxt;
	private: System::Windows::Forms::TextBox^  FirstNametxt;
	private: System::Windows::Forms::TextBox^  Passwordtxt;
	private: System::Windows::Forms::TextBox^  UserNametxt;
	private: System::Windows::Forms::Button^  Signupbtn;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  Gendertxt;
	private: System::Windows::Forms::DateTimePicker^  DOBtxt;
	private: System::Windows::Forms::TextBox^  Schooltxt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  Questiontxt;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  Answertxt;




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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->Mobiletxt = (gcnew System::Windows::Forms::TextBox());
			this->Classtxt = (gcnew System::Windows::Forms::TextBox());
			this->LastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->FirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->UserNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Signupbtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->Schooltxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Questiontxt = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Answertxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(103, 297);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Email ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(103, 260);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Mobile Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(131, 151);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 223);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(118, 186);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(103, 119);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 87);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 55);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"User Name";
			// 
			// Emailtxt
			// 
			this->Emailtxt->Location = System::Drawing::Point(251, 293);
			this->Emailtxt->Margin = System::Windows::Forms::Padding(4);
			this->Emailtxt->Name = L"Emailtxt";
			this->Emailtxt->Size = System::Drawing::Size(197, 22);
			this->Emailtxt->TabIndex = 14;
			// 
			// Mobiletxt
			// 
			this->Mobiletxt->Location = System::Drawing::Point(251, 256);
			this->Mobiletxt->Margin = System::Windows::Forms::Padding(4);
			this->Mobiletxt->Name = L"Mobiletxt";
			this->Mobiletxt->Size = System::Drawing::Size(197, 22);
			this->Mobiletxt->TabIndex = 8;
			// 
			// Classtxt
			// 
			this->Classtxt->Location = System::Drawing::Point(251, 142);
			this->Classtxt->Margin = System::Windows::Forms::Padding(4);
			this->Classtxt->Name = L"Classtxt";
			this->Classtxt->Size = System::Drawing::Size(197, 22);
			this->Classtxt->TabIndex = 7;
			// 
			// LastNametxt
			// 
			this->LastNametxt->Location = System::Drawing::Point(251, 110);
			this->LastNametxt->Margin = System::Windows::Forms::Padding(4);
			this->LastNametxt->Name = L"LastNametxt";
			this->LastNametxt->Size = System::Drawing::Size(197, 22);
			this->LastNametxt->TabIndex = 12;
			// 
			// FirstNametxt
			// 
			this->FirstNametxt->Location = System::Drawing::Point(251, 78);
			this->FirstNametxt->Margin = System::Windows::Forms::Padding(4);
			this->FirstNametxt->Name = L"FirstNametxt";
			this->FirstNametxt->Size = System::Drawing::Size(197, 22);
			this->FirstNametxt->TabIndex = 13;
			// 
			// Passwordtxt
			// 
			this->Passwordtxt->Location = System::Drawing::Point(251, 46);
			this->Passwordtxt->Margin = System::Windows::Forms::Padding(4);
			this->Passwordtxt->Name = L"Passwordtxt";
			this->Passwordtxt->Size = System::Drawing::Size(197, 22);
			this->Passwordtxt->TabIndex = 10;
			// 
			// UserNametxt
			// 
			this->UserNametxt->Location = System::Drawing::Point(251, 14);
			this->UserNametxt->Margin = System::Windows::Forms::Padding(4);
			this->UserNametxt->Name = L"UserNametxt";
			this->UserNametxt->Size = System::Drawing::Size(197, 22);
			this->UserNametxt->TabIndex = 11;
			// 
			// Signupbtn
			// 
			this->Signupbtn->Location = System::Drawing::Point(290, 447);
			this->Signupbtn->Margin = System::Windows::Forms::Padding(4);
			this->Signupbtn->Name = L"Signupbtn";
			this->Signupbtn->Size = System::Drawing::Size(117, 37);
			this->Signupbtn->TabIndex = 5;
			this->Signupbtn->Text = L"Sign Up";
			this->Signupbtn->UseVisualStyleBackColor = true;
			this->Signupbtn->Click += gcnew System::EventHandler(this, &Signup::Signupbtn_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 447);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(251, 220);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(197, 24);
			this->Gendertxt->TabIndex = 25;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(251, 181);
			this->DOBtxt->MinDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(197, 22);
			this->DOBtxt->TabIndex = 26;
			// 
			// Schooltxt
			// 
			this->Schooltxt->Location = System::Drawing::Point(251, 332);
			this->Schooltxt->Margin = System::Windows::Forms::Padding(4);
			this->Schooltxt->Name = L"Schooltxt";
			this->Schooltxt->Size = System::Drawing::Size(197, 22);
			this->Schooltxt->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(103, 337);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"School Name";
			// 
			// Questiontxt
			// 
			this->Questiontxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Questiontxt->FormattingEnabled = true;
			this->Questiontxt->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Favourite book", L"Favourite food", L"Favourite teacher", 
				L"Favourite colour", L"birth place"});
			this->Questiontxt->Location = System::Drawing::Point(251, 371);
			this->Questiontxt->Margin = System::Windows::Forms::Padding(4);
			this->Questiontxt->Name = L"Questiontxt";
			this->Questiontxt->Size = System::Drawing::Size(197, 24);
			this->Questiontxt->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(110, 408);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 17);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Security Answer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(109, 380);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 17);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Sequirity Question";
			// 
			// Answertxt
			// 
			this->Answertxt->Location = System::Drawing::Point(251, 405);
			this->Answertxt->Margin = System::Windows::Forms::Padding(4);
			this->Answertxt->Name = L"Answertxt";
			this->Answertxt->Size = System::Drawing::Size(197, 22);
			this->Answertxt->TabIndex = 34;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 497);
			this->Controls->Add(this->Questiontxt);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Answertxt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Schooltxt);
			this->Controls->Add(this->DOBtxt);
			this->Controls->Add(this->Gendertxt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Emailtxt);
			this->Controls->Add(this->Mobiletxt);
			this->Controls->Add(this->Classtxt);
			this->Controls->Add(this->LastNametxt);
			this->Controls->Add(this->FirstNametxt);
			this->Controls->Add(this->Passwordtxt);
			this->Controls->Add(this->UserNametxt);
			this->Controls->Add(this->Signupbtn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		
		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
				 
				 time_t now = time(0);
				 tm *ltm = localtime(&now);
				 int year = 1900 + ltm->tm_year;
				 int month = 1 + ltm->tm_mon;
				 int date = ltm->tm_mday;
				 DOBtxt->Value = DateTime(year, month, date);
				 DOBtxt->MaxDate = DateTime(year, month, date);
			 }


	private : System::Boolean uservalidate ( String ^ s )
    {

		            Boolean  flag= true;
					if(!userdatavalidate(s)) 
					{
						MessageBox::Show("enter valid  username");
						return false;
					}
					 
                    String ^ Sql = "SELECT * FROM database_ikya WHERE UserName = '" + UserNametxt->Text + "' ";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					try{
						OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
						if(reader->HasRows)  flag=false;
						con->Close();
					}
					catch(Exception ^ ex)
					{
										con->Close();
										MessageBox::Show(ex->Message);
										return false;
					}
					if(!flag) {MessageBox::Show("user name already taken");}
					return flag;



	}

			  //datavalidation part
			   private : System::Boolean userdatavalidate ( String ^ s )
				{
					if(s=="") return false;
					  for (int i = 0; i < s->Length; i++)
					  {
						  if (!(s[i] >='0' && s[i] <='9'||s[i] >='a' && s[i] <='z'||s[i] >='A' && s[i] <='Z'||s[i] == '!'||s[i] == '@'||s[i] == '#'||s[i] == '$'||s[i] == '%'||s[i] == '^'||s[i] == '&'||s[i] == '*')) return false;
					  }
					  return true;
				}
			 
			  	private : System::Boolean classvalidate ( String ^ s )
				{
					  if(s=="") return false;
					  if (s->Length >= 3 || s->Length == 0) return false;
					  if (!(s->ToUpper() == s->ToLower()))  return false;
					  for (int i = 0; i < s->Length; i++)
					  {
						  if (!(s[i] >='0' && s[i] <='9')) return false;
					  }
					  int l = Convert::ToInt32(s);
					  if (l >= 11) return false;
					  return true;

				}
				private : System::Boolean Mobilevalidate ( String ^ s )
				{
					if(s=="") return false;
					if (!(s->Length == 10)) return false;
					  for (int  i = 0; i < s->Length; i++)
					  {
						  if (!(s[i] >= '0' && s[i] <= '9')) return false;
					  }
					  return true;
				}
				private : System::Boolean Emailvalidate ( String ^ s )
				{
					 if(s=="") return false;
					  for (int  i = 0; i < s->Length; i++)
					  {
						  if (s[i] == '@') return true;
					  }
					  return false;
				}
		 private: System::Boolean namevalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  for (int i = 0; i < s->Length; i++)
						  {
							  if (!(s[i] >= 'a'&&s[i] <= 'z')) return false;
						  }
						  return true;
			 }
		 private: System::Boolean gendervalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  return true;
			 }
				 private: System::Boolean Schoolvalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  return true;
			 }
					 private: System::Boolean Questionvalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  return true;
			 }
					 private: System::Boolean Answervalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  return true;
			 }

			        private: System::String ^ updatetext(String ^ s)
					   {
									s = s->TrimEnd(' ');
									s = s->TrimStart(' ');
									return s;
					   }
			        private: System::Boolean  datavalid()
					   {
									 
									  UserNametxt->Text=updatetext(UserNametxt->Text);
									  Classtxt->Text=updatetext(Classtxt->Text);
									  Mobiletxt->Text=updatetext(Mobiletxt->Text);
									  Emailtxt->Text=updatetext(Emailtxt->Text);
									  FirstNametxt->Text=updatetext(FirstNametxt->Text->ToLower());
									  LastNametxt->Text=updatetext(LastNametxt->Text->ToLower());
									  Schooltxt->Text=updatetext(Schooltxt->Text);
									  Questiontxt->Text=updatetext(Questiontxt->Text);
									  Answertxt->Text=updatetext(Answertxt->Text);

									  if(!uservalidate(UserNametxt->Text))  return false ;
									  if(!namevalidate(FirstNametxt->Text))   {MessageBox::Show("enter valid FirstName");return false;}
									  if(!namevalidate(LastNametxt->Text))   {MessageBox::Show("enter valid LastName");return false;}
									  if(!classvalidate(Classtxt->Text))  {MessageBox::Show("enter valid class between 1-10");return false;}
									  if(!gendervalidate(Gendertxt->Text)) {MessageBox::Show("enter Gender");return false;}
									  if(!Mobilevalidate(Mobiletxt->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
									  if(!Emailvalidate(Emailtxt->Text))  {MessageBox::Show("enter valid Email");return false;}
									  if(!Schoolvalidate(Schooltxt->Text))  {MessageBox::Show("enter valid School Name");return false;}
									  if(!Questionvalidate(Questiontxt->Text))  {MessageBox::Show("select Sequrity Question ");return false;}
									  if(!Answervalidate(Answertxt->Text))  {MessageBox::Show("enter Answer");return false;}

					                   return true;
					   }

	     private: System::Void  msgx(String ^ s)
				  {
					  MessageBox::Show(s);
				  }
       
		
	private: System::Void Signupbtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		    DateTime ^ var = DOBtxt->Value;
		   String ^  strDate = var->ToString("dd-MM-yyyy");
		   if(!datavalid()) { return;}
		   MessageBox::Show("correct data");
	      try{
			
				 String ^ access1 = "insert into database_ikya ([UserName],[Password],[FirstName],[LastName],[Class],[DateOfBirth],[Gender],[MobileNumber],[Email],[School Name],[Securityquestion],[answer]) values('" + UserNametxt->Text + "','" + Passwordtxt->Text + "','" + FirstNametxt->Text + "','" + LastNametxt->Text + "','" + Classtxt->Text + "','" + strDate + "','" + Gendertxt->Text + "','"+ Mobiletxt->Text + "','"+ Emailtxt->Text + "','"+ Schooltxt->Text +"','" + Questiontxt->Text + "','" + Answertxt->Text + "')";
				 con->Open();
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
                 command->ExecuteNonQuery();
	             MessageBox::Show("Succefully Added");
				 con->Close();

				 Homepage ^ f3 = gcnew Homepage(obj);
		         this->Hide();
				 f3->user = UserNametxt->Text;
				 f3->ShowDialog();
		    }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

	}

  private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			   obj->Show();
			   this->Hide();
		 }
};
}
