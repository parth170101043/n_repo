#pragma once
#include "Cricket.h"
#include "operatorFilling.h"
#include "cloud.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for operationsRedirect
	/// </summary>
	public ref class operationsRedirect : public System::Windows::Forms::UserControl
	{
	public:
		operationsRedirect(void)
		{
			InitializeComponent();
			stuId = 1;
			//
			//TODO: Add the constructor code here
			//
		}
		operationsRedirect(int x)
		{
			InitializeComponent();
			stuId = x;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~operationsRedirect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_cloud;
	protected: 
	private: System::Windows::Forms::Button^  btn_Fill;
	private: System::Windows::Forms::Button^  btn_Cricket;

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
			this->btn_cloud = (gcnew System::Windows::Forms::Button());
			this->btn_Fill = (gcnew System::Windows::Forms::Button());
			this->btn_Cricket = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_cloud
			// 
			this->btn_cloud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cloud->Location = System::Drawing::Point(130, 250);
			this->btn_cloud->Margin = System::Windows::Forms::Padding(4);
			this->btn_cloud->Name = L"btn_cloud";
			this->btn_cloud->Size = System::Drawing::Size(213, 69);
			this->btn_cloud->TabIndex = 5;
			this->btn_cloud->Text = L"Clouds";
			this->btn_cloud->UseVisualStyleBackColor = true;
			this->btn_cloud->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_cloud_Click);
			// 
			// btn_Fill
			// 
			this->btn_Fill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Fill->Location = System::Drawing::Point(130, 145);
			this->btn_Fill->Margin = System::Windows::Forms::Padding(4);
			this->btn_Fill->Name = L"btn_Fill";
			this->btn_Fill->Size = System::Drawing::Size(213, 69);
			this->btn_Fill->TabIndex = 4;
			this->btn_Fill->Text = L"Fill Operators";
			this->btn_Fill->UseVisualStyleBackColor = true;
			this->btn_Fill->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_Fill_Click);
			// 
			// btn_Cricket
			// 
			this->btn_Cricket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Cricket->Location = System::Drawing::Point(130, 55);
			this->btn_Cricket->Margin = System::Windows::Forms::Padding(4);
			this->btn_Cricket->Name = L"btn_Cricket";
			this->btn_Cricket->Size = System::Drawing::Size(213, 69);
			this->btn_Cricket->TabIndex = 3;
			this->btn_Cricket->Text = L"Cricket";
			this->btn_Cricket->UseVisualStyleBackColor = true;
			this->btn_Cricket->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_Cricket_Click);
			// 
			// operationsRedirect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_cloud);
			this->Controls->Add(this->btn_Fill);
			this->Controls->Add(this->btn_Cricket);
			this->Name = L"operationsRedirect";
			this->Size = System::Drawing::Size(468, 393);
			this->ResumeLayout(false);

		}
#pragma endregion
	int stuId;
	private: System::Void btn_Cricket_Click(System::Object^  sender, System::EventArgs^  e) {
				 Cricket ^form =gcnew Cricket(stuId);
				 form->ShowDialog();
			 }
	private: System::Void btn_cloud_Click(System::Object^  sender, System::EventArgs^  e) {
				 cloud ^form =gcnew cloud();
				 form->ShowDialog();
			 }
	private: System::Void btn_Fill_Click(System::Object^  sender, System::EventArgs^  e) {
				 operatorFilling ^form =gcnew operatorFilling(stuId);
				 form->ShowDialog();
			 }
};
}
