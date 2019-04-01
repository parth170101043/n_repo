#pragma once
#include "Image_Quiz_Display.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <Windows.h>
#include <vcclr.h>
//#include "Form1.h"
using namespace System::Data::OleDb;

using namespace std;
using namespace System::Diagnostics;

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Image_Quiz
	/// </summary>
	public ref class ImageQuiz2 : public System::Windows::Forms::Form
	{
	public:
		ImageQuiz2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ImageQuiz2(Form^ obj1)
		{
			InitializeComponent();
			caller=obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ImageQuiz2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Animal;
	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_ImageQuiz2;
	private: System::Windows::Forms::Button^  btn_landmark;

	private: System::Windows::Forms::Button^  btn_fruit;
	private: System::Windows::Forms::Button^  btn_objects;


	private: System::Windows::Forms::Button^  btn_flower;

	private: System::Windows::Forms::Button^  btn_flag;

	private: System::Windows::Forms::Button^  btn_bird;
	private: System::Windows::Forms::Button^  btn_veg;

	private: System::Windows::Forms::Button^  btn_sports;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImageQuiz2::typeid));
			this->btn_Animal = (gcnew System::Windows::Forms::Button());
			this->btn_Back_To_Main_From_ImageQuiz2 = (gcnew System::Windows::Forms::Button());
			this->btn_landmark = (gcnew System::Windows::Forms::Button());
			this->btn_fruit = (gcnew System::Windows::Forms::Button());
			this->btn_objects = (gcnew System::Windows::Forms::Button());
			this->btn_flower = (gcnew System::Windows::Forms::Button());
			this->btn_flag = (gcnew System::Windows::Forms::Button());
			this->btn_bird = (gcnew System::Windows::Forms::Button());
			this->btn_veg = (gcnew System::Windows::Forms::Button());
			this->btn_sports = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Animal
			// 
			this->btn_Animal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(152)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->btn_Animal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Animal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_Animal->Location = System::Drawing::Point(210, 177);
			this->btn_Animal->Name = L"btn_Animal";
			this->btn_Animal->Size = System::Drawing::Size(107, 50);
			this->btn_Animal->TabIndex = 0;
			this->btn_Animal->Text = L"Animals";
			this->btn_Animal->UseVisualStyleBackColor = false;
			this->btn_Animal->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_Animal_Click);
			// 
			// btn_Back_To_Main_From_ImageQuiz2
			// 
			this->btn_Back_To_Main_From_ImageQuiz2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), 
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btn_Back_To_Main_From_ImageQuiz2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Back_To_Main_From_ImageQuiz2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_Back_To_Main_From_ImageQuiz2->Location = System::Drawing::Point(618, 186);
			this->btn_Back_To_Main_From_ImageQuiz2->Margin = System::Windows::Forms::Padding(2);
			this->btn_Back_To_Main_From_ImageQuiz2->Name = L"btn_Back_To_Main_From_ImageQuiz2";
			this->btn_Back_To_Main_From_ImageQuiz2->Size = System::Drawing::Size(92, 36);
			this->btn_Back_To_Main_From_ImageQuiz2->TabIndex = 1;
			this->btn_Back_To_Main_From_ImageQuiz2->Text = L"BACK";
			this->btn_Back_To_Main_From_ImageQuiz2->UseVisualStyleBackColor = false;
			this->btn_Back_To_Main_From_ImageQuiz2->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_Back_To_Main_From_ImageQuiz2_Click);
			// 
			// btn_landmark
			// 
			this->btn_landmark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(41)), 
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_landmark->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_landmark->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_landmark->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_landmark->Location = System::Drawing::Point(436, 233);
			this->btn_landmark->Name = L"btn_landmark";
			this->btn_landmark->Size = System::Drawing::Size(107, 50);
			this->btn_landmark->TabIndex = 2;
			this->btn_landmark->Text = L"Landmark";
			this->btn_landmark->UseVisualStyleBackColor = false;
			this->btn_landmark->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_landmark_Click);
			// 
			// btn_fruit
			// 
			this->btn_fruit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_fruit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_fruit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_fruit->Location = System::Drawing::Point(436, 121);
			this->btn_fruit->Name = L"btn_fruit";
			this->btn_fruit->Size = System::Drawing::Size(107, 50);
			this->btn_fruit->TabIndex = 3;
			this->btn_fruit->Text = L"Fruit";
			this->btn_fruit->UseVisualStyleBackColor = false;
			this->btn_fruit->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_fruit_Click);
			// 
			// btn_objects
			// 
			this->btn_objects->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_objects->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_objects->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_objects->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_objects->Location = System::Drawing::Point(210, 121);
			this->btn_objects->Name = L"btn_objects";
			this->btn_objects->Size = System::Drawing::Size(107, 50);
			this->btn_objects->TabIndex = 4;
			this->btn_objects->Text = L"Objects";
			this->btn_objects->UseVisualStyleBackColor = false;
			this->btn_objects->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_objects_Click);
			// 
			// btn_flower
			// 
			this->btn_flower->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_flower->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_flower->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_flower->Location = System::Drawing::Point(323, 121);
			this->btn_flower->Name = L"btn_flower";
			this->btn_flower->Size = System::Drawing::Size(107, 50);
			this->btn_flower->TabIndex = 5;
			this->btn_flower->Text = L"Flower";
			this->btn_flower->UseVisualStyleBackColor = false;
			this->btn_flower->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_flower_Click);
			// 
			// btn_flag
			// 
			this->btn_flag->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(152)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->btn_flag->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_flag->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_flag->Location = System::Drawing::Point(436, 177);
			this->btn_flag->Name = L"btn_flag";
			this->btn_flag->Size = System::Drawing::Size(107, 50);
			this->btn_flag->TabIndex = 6;
			this->btn_flag->Text = L"Flag";
			this->btn_flag->UseVisualStyleBackColor = false;
			this->btn_flag->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_flag_Click);
			// 
			// btn_bird
			// 
			this->btn_bird->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(152)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->btn_bird->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_bird->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_bird->Location = System::Drawing::Point(323, 177);
			this->btn_bird->Name = L"btn_bird";
			this->btn_bird->Size = System::Drawing::Size(107, 50);
			this->btn_bird->TabIndex = 7;
			this->btn_bird->Text = L"Bird";
			this->btn_bird->UseVisualStyleBackColor = false;
			this->btn_bird->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_bird_Click);
			// 
			// btn_veg
			// 
			this->btn_veg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(41)), 
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_veg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_veg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_veg->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_veg->Location = System::Drawing::Point(323, 233);
			this->btn_veg->Name = L"btn_veg";
			this->btn_veg->Size = System::Drawing::Size(107, 50);
			this->btn_veg->TabIndex = 8;
			this->btn_veg->Text = L"Vegetable";
			this->btn_veg->UseVisualStyleBackColor = false;
			this->btn_veg->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_veg_Click);
			// 
			// btn_sports
			// 
			this->btn_sports->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(41)), 
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_sports->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sports->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->btn_sports->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_sports->Location = System::Drawing::Point(210, 233);
			this->btn_sports->Name = L"btn_sports";
			this->btn_sports->Size = System::Drawing::Size(107, 50);
			this->btn_sports->TabIndex = 9;
			this->btn_sports->Text = L"Sports";
			this->btn_sports->UseVisualStyleBackColor = false;
			this->btn_sports->Click += gcnew System::EventHandler(this, &ImageQuiz2::btn_sports_Click);
			// 
			// ImageQuiz2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(764, 437);
			this->Controls->Add(this->btn_sports);
			this->Controls->Add(this->btn_veg);
			this->Controls->Add(this->btn_bird);
			this->Controls->Add(this->btn_flag);
			this->Controls->Add(this->btn_flower);
			this->Controls->Add(this->btn_objects);
			this->Controls->Add(this->btn_fruit);
			this->Controls->Add(this->btn_landmark);
			this->Controls->Add(this->btn_Back_To_Main_From_ImageQuiz2);
			this->Controls->Add(this->btn_Animal);
			this->DoubleBuffered = true;
			this->Name = L"ImageQuiz2";
			this->Text = L"Image Quiz";
			this->Load += gcnew System::EventHandler(this, &ImageQuiz2::ImageQuiz2_Load_1);
			this->ResumeLayout(false);

		}
#pragma endregion
		Form^ caller;
		void read_directory(string folder)
		{
			string search_path = "media/" + folder + "/*.*";
			 String^ str2 = gcnew String(search_path.c_str());
			Debug::WriteLine(str2);
			WIN32_FIND_DATA fd;
			pin_ptr<const wchar_t> wname = PtrToStringChars(str2);
			HANDLE hFind = ::FindFirstFile(wname,&fd) ;
			if (hFind != INVALID_HANDLE_VALUE) {
				do {
					if(! (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ){
						String^ str3 = gcnew String(fd.cFileName);
						Debug::WriteLine(str3);
						String^ domain = gcnew String(folder.c_str());
						String^ Img = str3;
						String^ Img_name = str3->Substring(0,str3->Length-4);
						String^ diffuculty;
						if (str3->Length-4<=5)
						{
							diffuculty="Easy";
						} 
						else if(str3->Length-4<=8)
						{
							diffuculty="Medium";
						}
						else
						{
							diffuculty="Hard";
						}
						Debug::WriteLine(domain + " " + Img + " " + Img_name + " " + diffuculty);
						try{
							OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
							DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							String ^ insertString = "insert into Image_Quiz_Display([Domain],[Image],[Image_Name],[Difficulty_Level]) VALUES('" +domain+ "', '" +Img+ "', '" +Img_name+"', '" +diffuculty+ "');";
							DB_Connection->Open();
							OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
							cmd->Parameters->Add(gcnew OleDbParameter("@Domain",domain));
							cmd->Parameters->Add(gcnew OleDbParameter("@Image",Img));
							cmd->Parameters->Add(gcnew OleDbParameter("@Image_Name",Img_name));
							cmd->Parameters->Add(gcnew OleDbParameter("@Difficulty_Level",diffuculty));
							cmd->ExecuteNonQuery();
							DB_Connection->Close();

						}
						catch(Exception ^ ex)
						{
							MessageBox::Show(ex->Message);
						}
					}

				} while (::FindNextFile(hFind, &fd));
				::FindClose(hFind);
			}
			
		}
	private: System::Void btn_Animal_Click(System::Object^  sender, System::EventArgs^  e) {
				 ImageQuiz2::Hide();
				 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Animal");
				 form->ShowDialog();
	}
	private: System::Void ImageQuiz2_Load_1(System::Object^  sender, System::EventArgs^  e) {
				 /*String ^ str = "C:\\Users\\Aryan Agrawal\\Desktop\\ChildEudcation\\FunBrainz-Assignment-3\\FunBrainz\\FunBrainz\\media";*/
				 //read_directory("Animal");
				 //read_directory("Bird");
				 /* read_directory("Flag");
				 read_directory("Flower");
				 read_directory("Fruit");
				 read_directory("Landmark");
				 read_directory("Objects");
				 read_directory("Sports");
				 read_directory("Vegetable");*/
			 }
	private: System::Void btn_Back_To_Main_From_ImageQuiz2_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Hide();
				caller->Show();
			 }

private: System::Void btn_bird_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Bird");
			 form->ShowDialog();
		 }
private: System::Void btn_flag_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Flag");
			 form->ShowDialog();
		 }
private: System::Void btn_flower_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Flower");
			 form->ShowDialog();
		 }
private: System::Void btn_fruit_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Fruit");
			 form->ShowDialog();
		 }
private: System::Void btn_landmark_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Landmark");
			 form->ShowDialog();
		 }
private: System::Void btn_objects_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Objects");
			 form->ShowDialog();
		 }
private: System::Void btn_sports_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Sports");
			 form->ShowDialog();
		 }
private: System::Void btn_veg_Click(System::Object^  sender, System::EventArgs^  e) {
			 ImageQuiz2::Hide();
			 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display(this,"Vegetable");
			 form->ShowDialog();
		 }
};

	
}
