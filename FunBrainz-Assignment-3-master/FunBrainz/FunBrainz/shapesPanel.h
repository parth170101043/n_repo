#pragma once
#include "question_no_figure.h"
#include "question_with_figure.h"
#include "shape_defination.h"
#include "all_shape.h"
#include "game.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class shapesPanel : public System::Windows::Forms::Form
	{
	public:
		shapesPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		shapesPanel(Form^ obj,String ^ x)
		{
			InitializeComponent();
			caller=obj;
			user =x;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~shapesPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button6;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 401);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"no_figure_question";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &shapesPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(596, 302);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(301, 103);
			this->button3->TabIndex = 3;
			this->button3->Text = L"figure_question";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &shapesPanel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 282);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 57);
			this->button4->TabIndex = 5;
			this->button4->Text = L"shape_defination";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &shapesPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 194);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 75);
			this->button5->TabIndex = 6;
			this->button5->Text = L"all_shape";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &shapesPanel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(32, 52);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 69);
			this->button6->TabIndex = 7;
			this->button6->Text = L"game";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &shapesPanel::button6_Click);
			// 
			// shapesPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 545);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"shapesPanel";
			this->Text = L"shapesPanel";
			this->Load += gcnew System::EventHandler(this, &shapesPanel::shapesPanel_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		Form^ caller;
		String ^ user;

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 
					 question_no_figure^ f2 = gcnew question_no_figure(user,this);
					 this->Hide();
					 f2->ShowDialog();
					 //this->Refresh();
					 this->Show();

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 question_with_figure^ f5 = gcnew question_with_figure(user,this);
				 this->Hide();
				 f5->ShowDialog();
				 //this->Refresh();
				 this->Show();	 
			 }

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 shape_defination^ f1 = gcnew shape_defination();
				 this->Hide();
				 f1->ShowDialog();
				 //this->Refresh();
				 this->Show();	 
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 all_shape^ f3 = gcnew all_shape();
				 this->Hide();
				 f3->ShowDialog();
				 //this->Refresh();
				 this->Show();
			 }

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 game^ f4 = gcnew game(user,this);
				 this->Hide();
				 f4->ShowDialog();
				 //this->Refresh();
				 this->Show();	 
			 }

	private: System::Void shapesPanel_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

