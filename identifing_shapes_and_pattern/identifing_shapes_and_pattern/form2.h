#pragma once
#include "userctrl.h"
namespace identifing_shapes_and_pattern {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	
	public:
		String^ str="1";
	public:
		formlearn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		formlearn(String^ st)
		{
			InitializeComponent();
			str = st;
			//
			//TODO: Add the constructor code here
			//

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Button^  last;
	private: System::Windows::Forms::Button^  next;
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->last = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// last
			// 
			this->last->Location = System::Drawing::Point(43, 109);
			this->last->Name = L"last";
			this->last->Size = System::Drawing::Size(154, 41);
			this->last->TabIndex = 3;
			this->last->Text = L" <";
			this->last->UseVisualStyleBackColor = true;
			// 
			// next
			// 
			this->next->Location = System::Drawing::Point(937, 98);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(154, 41);
			this->next->TabIndex = 4;
			this->next->Text = L">";
			this->next->UseVisualStyleBackColor = true;
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(973, 25);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(154, 41);
			this->back->TabIndex = 5;
			this->back->Text = L"back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &form2::back_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(213, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 41);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Go";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 41);
			this->textBox1->TabIndex = 7;
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->back);
			this->Controls->Add(this->next);
			this->Controls->Add(this->last);
			this->Name = L"form2";
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Close();
			 }
};
private: System::Void .ctor() {
			 this->InitializeComponent();
		 }
private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=str;
			 next->Left = this->Width - 100;
			back->Left = this->Width - 150;
			last->Hide();
			
		 }
private: System::Void .ctor() {
			 this->InitializeComponent();
		 }

private: System::Void .ctor() {
			 this->InitializeComponent();
		 }
}
