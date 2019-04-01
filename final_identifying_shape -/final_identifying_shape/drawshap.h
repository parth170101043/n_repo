#pragma once
#include<array>
#include <iostream>
namespace final_identifying_shape {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for drawshap
	/// </summary>
	public ref class drawshap : public System::Windows::Forms::Form
	{
	public:
		drawshap(void)
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
		~drawshap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label10;
	protected: 
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  otherpt;
	private: System::Windows::Forms::Label^  firstpt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(drawshap::typeid));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->otherpt = (gcnew System::Windows::Forms::Label());
			this->firstpt = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(893, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 21);
			this->label10->TabIndex = 42;
			this->label10->Text = L"0";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(1020, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 21);
			this->label9->TabIndex = 41;
			this->label9->Text = L"0";
			this->label9->Visible = false;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(563, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 21);
			this->label4->TabIndex = 31;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &drawshap::timer1_Tick);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(428, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 17);
			this->label3->TabIndex = 30;
			this->label3->Text = L"0";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(296, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 29;
			this->label2->Text = L"0";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &drawshap::label2_Click);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(151, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 21);
			this->label8->TabIndex = 40;
			this->label8->Text = L"0";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(1059, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 21);
			this->label7->TabIndex = 39;
			this->label7->Text = L"0";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(1059, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 21);
			this->label6->TabIndex = 38;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(727, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 21);
			this->label5->TabIndex = 37;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 50);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Check";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &drawshap::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(784, 547);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(386, 40);
			this->textBox1->TabIndex = 35;
			// 
			// otherpt
			// 
			this->otherpt->Location = System::Drawing::Point(1005, 20);
			this->otherpt->Name = L"otherpt";
			this->otherpt->Size = System::Drawing::Size(94, 17);
			this->otherpt->TabIndex = 34;
			this->otherpt->Text = L"0";
			this->otherpt->Visible = false;
			// 
			// firstpt
			// 
			this->firstpt->Location = System::Drawing::Point(821, 20);
			this->firstpt->Name = L"firstpt";
			this->firstpt->Size = System::Drawing::Size(88, 17);
			this->firstpt->TabIndex = 33;
			this->firstpt->Text = L"0";
			this->firstpt->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 50);
			this->button1->TabIndex = 32;
			this->button1->Text = L"ReFresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &drawshap::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 17);
			this->label1->TabIndex = 28;
			this->label1->Text = L"000";
			this->label1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(848, 187);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(309, 126);
			this->panel1->TabIndex = 43;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->Location = System::Drawing::Point(258, 59);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(45, 50);
			this->pictureBox12->TabIndex = 22;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &drawshap::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Pink;
			this->pictureBox11->Location = System::Drawing::Point(207, 59);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(45, 50);
			this->pictureBox11->TabIndex = 22;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &drawshap::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Green;
			this->pictureBox10->Location = System::Drawing::Point(156, 59);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(45, 50);
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &drawshap::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Navy;
			this->pictureBox9->Location = System::Drawing::Point(105, 59);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(45, 50);
			this->pictureBox9->TabIndex = 29;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &drawshap::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Gray;
			this->pictureBox8->Location = System::Drawing::Point(54, 59);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(45, 50);
			this->pictureBox8->TabIndex = 28;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &drawshap::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Lime;
			this->pictureBox7->Location = System::Drawing::Point(3, 59);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(45, 50);
			this->pictureBox7->TabIndex = 27;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &drawshap::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox6->Location = System::Drawing::Point(258, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(45, 50);
			this->pictureBox6->TabIndex = 26;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &drawshap::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Orange;
			this->pictureBox5->Location = System::Drawing::Point(207, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(45, 50);
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &drawshap::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Red;
			this->pictureBox4->Location = System::Drawing::Point(156, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(45, 50);
			this->pictureBox4->TabIndex = 24;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &drawshap::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Brown;
			this->pictureBox3->Location = System::Drawing::Point(105, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 50);
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &drawshap::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Purple;
			this->pictureBox2->Location = System::Drawing::Point(54, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 50);
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &drawshap::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 50);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &drawshap::pictureBox1_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(846, 138);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 36);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Pen Colour";
			this->label11->Visible = false;
			this->label11->Click += gcnew System::EventHandler(this, &drawshap::label11_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Controls->Add(this->pictureBox15);
			this->panel2->Controls->Add(this->pictureBox14);
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Location = System::Drawing::Point(883, 346);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(215, 119);
			this->panel2->TabIndex = 45;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(19, 94);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(180, 19);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox16->TabIndex = 46;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &drawshap::pictureBox16_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(19, 69);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(180, 19);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox15->TabIndex = 47;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &drawshap::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(19, 39);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(180, 24);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox14->TabIndex = 46;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &drawshap::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(19, 14);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(180, 19);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &drawshap::pictureBox13_Click);
			// 
			// drawshap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->otherpt);
			this->Controls->Add(this->firstpt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"drawshap";
			this->Text = L"drawshap";
			this->Load += gcnew System::EventHandler(this, &drawshap::drawshap_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &drawshap::drawshap_Paint);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &drawshap::drawshap_MouseClick);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private:
		double y;
		int last_pt;
		int nxt_pt;
		int nxt1_pt ;
		int nxt2_pt;
		int line ; //no of line
		//y1 to 16...variables to check which point is clicked
		//for each y1    to 16..........=0 means point not clicked ....=1 means point clicked
		int y1 ;
		int y2 ;
		int y3;
		int y4 ;
		int y5 ;
		int y6;
		int y7 ;
		int y8 ;
		int y9 ;
		int y10 ;
		int y11;
		int y12;
		int y13;
		int y14 ;
		int y15;
		int y16 ;
		int count ;	 //no. of point in local array (decleared later)
		int i ;
		int j ;	  //j+1=no of point in line_no array  (decleared later)
		Point pt1;
		Point pt2;
		Point pt3;
		Point pt4;
		array<System::Drawing::Point>^ local;	  //local......it will store all clicked points and all points of line 1 and line 2	..if the array fillup..user cant draw points
		array<System::Drawing::Point>^ line_no;		//it will store endpoints of a line..
		Pen^ pen1;/////////////	   a pen variable
		  //first point green point
		//lines will be drawn from the black point (or from the green point if clicked point is only one)
		//cant draw BACK from a point to another point in a line
		//cant repeat a close figure ...
#pragma endregion
	private: System::Void drawshap_Load(System::Object^  sender, System::EventArgs^  e) {
			  local  = gcnew array< Point>(200);	//////////////////////////////////////////////////////////
		line_no = gcnew array< Point>(100);
		timer1->Start();
				 local[0] = Point(-20, -20);	   //first point is initialized outside the window...
				  pen1 = gcnew Pen(Color::Red, 1.2f);	 //	 initially pen color red ,width 1.2
			  last_pt=-1;
		nxt_pt = -1;
		nxt1_pt = -1;
		nxt2_pt=-1;
		 line = 1;
		   //initializing
		 y1 = 0;
		 y2 = 0;
		 y3 = 0;
		 y4 = 0;
		 y5 = 0;
		 y6 = 0;
		 y7 = 0;
		 y8 = 0;
		 y9 = 0;
		 y10 = 0;
		 y11= 0;
		 y12 = 0;
		 y13 = 0;
		 y14 = 0;
		 y15 = 0;
		 y16 = 0;
		 count = 0;
		 i = -1;
		 j = 1;


			 }
private: System::Void drawshap_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			  int l, m,k;
			  //taking mouse_click coordinate from label 2 and label3
				 l = Convert::ToInt32(label2->Text);
				 m = Convert::ToInt32(label3->Text);
				 ///////////////////////////////////////////////////////////
				 pt1 = Point(l,m );
				 Graphics^ g = e->Graphics;	//graphics
				  //draw the circles..(to represent point)
				 g->DrawEllipse(Pens::Red, 95, 95, 10, 10);//1
				 g->DrawEllipse(Pens::Red, 95, 195, 10, 10);//2
				 g->DrawEllipse(Pens::Red, 95, 295, 10, 10);//3
				 g->DrawEllipse(Pens::Red, 95, 395, 10, 10);//4

				 g->DrawEllipse(Pens::Red, 195, 95, 10, 10);//5
				 g->DrawEllipse(Pens::Red, 195, 195, 10, 10);//6
				 g->DrawEllipse(Pens::Red, 195, 295, 10, 10);//7
				 g->DrawEllipse(Pens::Red, 195, 395, 10, 10);//8

				 g->DrawEllipse(Pens::Red, 295, 95, 10, 10);//9
				 g->DrawEllipse(Pens::Red, 295, 195, 10, 10);//10
				 g->DrawEllipse(Pens::Red, 295, 295, 10, 10);//11
				 g->DrawEllipse(Pens::Red, 295, 395, 10, 10);//12

				 g->DrawEllipse(Pens::Red, 395, 95, 10, 10);//13
				 g->DrawEllipse(Pens::Red, 395, 195, 10, 10);//14
				 g->DrawEllipse(Pens::Red, 395, 295, 10, 10);//15
				 g->DrawEllipse(Pens::Red, 395, 395, 10, 10);//16

				


				 //1

				 if (i <= 200)	 //array size 200...
				 {
					 pt2 = Point(95, 95);  /////point starting the ellipse's rectangle
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;	//No of points in local array
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }

					 }
					 if (y == 0 || y1 != 0)
					 {
						 y1 = 1;

						 g->FillEllipse(Brushes::Red, 95, 95, 10, 10);
						 y = 1;
						
					 }
					 //2
					 pt2 = Point(95, 195);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y2 != 0)
					 {
						 y2 = 1;

						 g->FillEllipse(Brushes::Red, 95, 195, 10, 10);
						 y = 1;
					 }
					 //3
					 pt2 = Point(95, 295);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y3 != 0)
					 {
						 y3 = 1;

						 g->FillEllipse(Brushes::Red, 95, 295, 10, 10);
						 y = 1;
					 }
					 //4
					 pt2 = Point(95, 395);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count==2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y4 != 0)
					 {
						 y4 = 1;

						 g->FillEllipse(Brushes::Red, 95, 395, 10, 10);
						 y = 1;
					 }

					 //5
					 pt2 = Point(195, 95);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }

					 }
					 if (y == 0 || y5 != 0)
					 {
						 y5 = 1;

						 g->FillEllipse(Brushes::Red, 195, 95, 10, 10);
						 y = 1;
					 }
				
					 pt2 = Point(195, 195);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y6 != 0)
					 {
						 y6 = 1;

						 g->FillEllipse(Brushes::Red, 195, 195, 10, 10);
						 y = 1;
					 }
					 //7
					 pt2 = Point(195, 295);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y7 != 0)
					 {
						 y7 = 1;

						 g->FillEllipse(Brushes::Red, 195, 295, 10, 10);
						 y = 1;
					 }
					 //8
					 pt2 = Point(195, 395);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y8 != 0)
					 {
						 y8 = 1;

						 g->FillEllipse(Brushes::Red, 195, 395, 10, 10);
						 y = 1;
					 }
					 //9
					 pt2 = Point(295, 95);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y9 != 0)
					 {
						 y9 = 1;

						 g->FillEllipse(Brushes::Red, 295, 95, 10, 10);
						 y = 1;
					 }
					 //10
					 pt2 = Point(295, 195);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y10 != 0)
					 {
						 y10 = 10;

						 g->FillEllipse(Brushes::Red, 295, 195, 10, 10);
						 y = 1;
					 }
					 //11
					 pt2 = Point(295, 295);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y11 != 0)
					 {
						 y11 = 1;

						 g->FillEllipse(Brushes::Red, 295, 295, 10, 10);
						 y = 1;
					 }
					 //12
					 pt2 = Point(295, 395);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y12 != 0)
					 {
						 y12 = 1;

						 g->FillEllipse(Brushes::Red, 295, 395, 10, 10);
						 y = 1;
					 }
					 //13
					 pt2 = Point(395, 95);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y13 != 0)
					 {
						 y13 = 1;

						 g->FillEllipse(Brushes::Red, 395, 95, 10, 10);
						 y = 1;
					 }
					 //14
					 pt2 = Point(395, 195);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y14 != 0)
					 {
						 y14 = 1;

						 g->FillEllipse(Brushes::Red, 395, 195, 10, 10);
						 y = 1;
					 }
					 //15
					 pt2 = Point(395, 295);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y15 != 0)
					 {
						 y15 = 1;

						 g->FillEllipse(Brushes::Red, 395, 295, 10, 10);
						 y = 1;
					 }
					 //16
					 pt2 = Point(395, 395);
					 y = cirpt(pt2, pt1, 10);
					 if (y == 0)
					 {
						 count++;
						 i++;
						 local[i] = Point(pt2.X + 5, pt2.Y + 5);
						 if (count >= 3)
						 {
							 check_last3();
						 }
						 else if (count == 2)
						 {
							 check_lastone();
						 }
					 }
					 if (y == 0 || y16 != 0)
					 {
						 y16 = 1;

						 g->FillEllipse(Brushes::Red, 395, 395, 10, 10);
						 y = 1;
					 }
				 }////////////////////////////
				
				// label1->Text = Convert::ToString(local[0].X) + "+" + Convert::ToString(local[0].Y);
				 if (count == 2)
				 {	   //inserting the intermediate points(if exists) after 2 points clicked..
					 line_no[0] = local[0];
					 line_no[1] = local[1];
					 im_pt(local[0], local[1]);
					 label1->Text = Convert::ToString(count);
				 }

				if (count == 3)
				 {// //inserting the intermediate points(if exists) after 3 points clicked..
					im_pt(local[1], local[2]);
					 label1->Text = Convert::ToString(count);
				 }
				
				 l = local[0].X - 5;
				 m = local[0].Y- 5;
				 g->FillEllipse(Brushes::Green, l, m, 10, 10);	 //making the startpoint green
				 for (k = 1; k< count; k++)
				 {
					 g->DrawLine(pen1, local[k-1], local[k]);
					 if (k == count - 1)
					 {
						 l = local[k].X-5;
						 m = local[k].Y-5;
						 g->FillEllipse(Brushes::Black, l, m, 10, 10);	 //making the lastpoint green
					 }
						                                                                                         
				 }
				 label2->Text = "0";
				 label3->Text = "0";
		 }
private: System::Void drawshap_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //sending mouseclick x and y coordinates to label 2 label3
			  label2->Text = Convert::ToString(e->X);
				 label3->Text = Convert::ToString(e->Y);
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 Invalidate(); //refresh
		 }
private: System::Void check_lastone()
{			 //if same point is clicked more than one once....keep only one in local array and remove other...
			 if (local[count - 2] == local[count - 1])
			 {
				 i--;
				 count--;
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 //refresh button
			 //initializing all
			  timer1->Stop();
			 local[0] = Point(-20, -20);
			 textBox1->Text = "";
			 Invalidate();
			 i = -1;
			 line = 1;
			 j = 1;
			 count = 0;
			 timer1->Start();
			 y1 = 0;
			 y2 = 0;
			 y3 = 0;
			 y4 = 0;
			 y5 = 0;
			 y6 = 0;
			 y7 = 0;
			 y8 = 0;
			 y9 = 0;
			 y10 = 0;
			 y11 = 0;
			 y12 = 0;
			 y13 = 0;
			 y14 = 0;
			 y15 = 0;
			 y16 = 0;
			 label4->Text = "0";
			 label5->Text = "0";
			 label7->Text = "0";
			 label8->Text = "0";
			 label2->Text = "0";
			 label1->Text = "0";
			 label3->Text = "0";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  timer1->Stop();
			 	 //label8==1..means first point or endpoint not same... 
			 if (label8->Text == "1")
			 {
				 textBox1->Text = "not defined";
				 return;
			 }
				 //label7=conatains the point number when figure closed	...if more points are inserted ....then not define
			 if (count > Convert::ToInt32(label7->Text))//////////////////////////////////////////////////////////////////////////////
			 {
				 textBox1->Text = "not defined";
				 return;
			 }
 				 //	adjusting no of line here....
			 if (label7->Text != "0" && label8->Text != "1")
			 {
				 if (line_no[j] == local[0])
				 {	  //if last-1,last(which is  0th in this condition)and 1 th point of line_no aray colinier..
					 //then remove 	one line...make 0th point and last point of line_no =(last -1 )th point
					 if (colin(line_no[j - 1], line_no[0], line_no[1]) == true)
					 {
						 line--;
						 line_no[0] = line_no[j - 1];
						 j = j - 1;
						 line_no[j] = line_no[0];
					 }
				 }
				 if (line_no[j] == local[1] || line_no[j]==local[2])
				 {	 //if last-1,last(which is  0th in this condition)and 1 th point of line_no aray colinier..
					 //then remove 	one line...make 0th point and last point of line_no =(last -1 )th point
					 line--;
					 line_no[0] = line_no[j - 1];
					 j = j - 1;
					 line_no[j] = line_no[0];
				 }
			 }
			 //label5->Text = Convert::ToString(line);
			 label5->Text = Convert::ToString(j);
			 if (check_intersection() == true)		//if figure is closed and satisfies all above conditions ...check is there any intersecting edge
			 {
				 textBox1->Text = "not defined";
				 return;
			 }
			 //now according to number of line...(from line variable) write the name of figure
			 else  if (line == 3)
			 {
				 tri_type();	 //check and write triangle type
			 }
			 else  if (line == 4)
			 {
				 rec_type();		 //check and write rectangle type
			 }
			 else  if (line == 5)
			 {
				 textBox1->Text = "pentagon(irregular)";
			 }
			 else  if (line == 6)
			 {
				 textBox1->Text = "hexagon(irregular)";
			 }
			 else  if (line == 7)
			 {
				 textBox1->Text = "heptagon(irregular)";
			 }
			 else  if (line == 8)
			 {
				 textBox1->Text = "octagon(irregular)";
			 }
			 else
			 {
				 textBox1->Text = "irregular polygon";
			 }
		 }
private: System::Double get_dist(Point p1, Point p2)
{				  //distance between two point
		double x = sqrt((double)((p1.X - p2.X)*(p1.X - p2.X) + (p1.Y - p2.Y)*(p1.Y - p2.Y)));
			 //double s=Convert::ToDouble(x);
			 return x;
}

private:System::Double cirpt(Point p1, Point p, double r)
 {				   //check point p is in the circle with center cen and radius r
			Point cen = Point(p1.X + int(r / 2), p1.Y + int(r / 2));
			 double x;
			 x = (cen.X - p.X) * (cen.X - p.X) + (cen.Y - p.Y) * (cen.Y - p.Y);
			 //label4->Text = Convert::ToString(x);
			 if (x < (r / 2) * (r / 2))
			{
			 return 0;
			 }
			 else
			 {
				 return 1;
			 }
 }

private: System::Void check_last3()
{			
			 //cant go back ponts of last drawn line..
	
			 double a, b, c;
			 Point C = local[count - 1];
			 Point B = line_no[j];		 //lastpoint of last drawn line()
			 Point A = line_no[j-1];   //startpoint of last drawn line()
			 a = get_dist(A, B);
			 b = get_dist(B, C);
			 c = get_dist(C, A);
			
			  if (c + b == a)
			 {
				 i--;
				 count--;
			 }
			  else if (a + b == c)
			  {
				  if (label7->Text == "0")
					  line_no[j] = C;
				  if(j<3)
				  im_pt(local[count-2],local[count-1]);
			  }
			 else
			 {
				 if (label7->Text == "0")
				 {	  if(j<3)
					 im_pt(local[count - 2], local[count - 1]);
					 line++;
					 j++;
					 line_no[j] = C;
				 }
			 }
			 label1->Text = Convert::ToString(count) + "+" + Convert::ToString(i);

			 ////repetainon of line in the closed shaped(if it is formed) not allowed..
			 //last_pt ...end point of clased shape...nxt_pt,nxt1_pt....are the point used so that user cant repeat closed shape
			 if (count > 3)
			 {
				 if (label7->Text == "0" && label8->Text == "0")
				 {
					 if (local[count - 1] == local[0])
					 {
						
						 last_pt = 0;
						 nxt_pt = 1;
						 nxt1_pt = nxt_pt;
						 nxt2_pt = nxt1_pt;
						 
						 if (colin(local[count - 2], local[0], local[1]) == true)
						 {
							
							 if (colin(local[0], local[1], local[2]) == true)
								 nxt2_pt = 2;
							
						 }
						 else if (colin(local[0], local[1], local[2]) == true)
						 {
							 nxt1_pt = 2;
							 
							 if (colin(local[1], local[2], local[3]) == true)
								 nxt2_pt = 3;
							 
						 }

						 label7->Text = Convert::ToString(count);
			
					 }
					 else if (local[count - 1] == local[1])
					 {
						 //label9->Text = "aaaaaaaaaaaaa";
						 if (colin(local[count - 2], local[0], local[1]) == true)
						 {
							 label7->Text = Convert::ToString(count);

							 last_pt = 1;
							 nxt_pt = 2;
							 nxt1_pt = 2;
							 nxt2_pt = 2;
							 if (colin(local[1], local[2], local[3]) == true)
							 {
								 nxt1_pt = 3;
								 if (colin(local[2], local[3], local[4]) == true)
									 nxt2_pt = 4;
							 }

							
						 }
						 else
						 label8->Text = "1";
						 //nxt3_pt = nxt_pt;
					 }
					 else if (local[count - 1] == local[2])
					 {
						 if (colin(local[count - 2], local[0], local[2]) == true )/////////////////look carefully count-2=1,count-3=0,count-4=desired
						 {
							 label7->Text = Convert::ToString(count);
							 last_pt = 2;
							 nxt_pt = 3;
							 nxt1_pt = 3;
							 nxt2_pt = 3;
							 if (colin(local[2], local[3], local[4]) == true)
							 {
								 nxt1_pt = 4;
								 if (colin(local[3], local[4], local[5]) == true)
									 nxt2_pt = 5;
							 }
						 }
						  else
						  label8->Text = "1";
						
					 }
				 }
				 else if (label7->Text != "0")
				 {
					 
					 if ((local[count - 2] == local[last_pt] && local[count - 1] == local[nxt_pt]) || (local[count - 2] == local[last_pt] && local[count - 1] == local[nxt1_pt]) || (local[count - 2] == local[last_pt] && local[count - 1] == local[nxt2_pt]))
					 {////////////////////////////////////////////////
						 i--;
						 count--;
					 }
				 }
			 }
}

private: System::Void im_pt(Point A, Point B)
{			   //function to insert intermediate points between A to B
			 if (get_dist(A,B) == 300 || Convert::ToInt32(get_dist(A,B))==424)
			 {	   //if dist 300 or 424.....there will be 2 intermediate points
				 

				 Point c = Point((B.X + 2 * A.X) / 3, (B.Y + 2 * A.Y) / 3);
				 Point d = Point((2 * B.X + A.X) / 3, (2 * B.Y + A.Y) / 3);
				 local[count - 1] = c;
				 count++;
				 local[count - 1] = d;
				 count++;
				 local[count - 1] = B;
				 i = count - 1;
			 }
			 else if (get_dist(A, B) == 200 || Convert::ToInt32(get_dist(A,B)) == 282 || Convert::ToInt32(get_dist(A,B)) == 283)
			 {		   //if dist 200 or 282.....there will be 2 intermediate points

				 local[count - 1] = Point((A.X + B.X) / 2, (A.Y + B.Y) / 2);
				 count++;
				 local[count - 1] = B;
				 i = count - 1;
			 }
			 label1->Text = Convert::ToString(count);


}
private: System::Boolean colin(Point A, Point B, Point C)
	{	//Checking A,B,C COLINIER 
		double   a = get_dist(A, B);
	    double   b = get_dist(B, C);
		 double   c = get_dist(C,A);
		
							

		if (a + b == c)
		 {
	   return true;
		 }
		   return false;
	}

private:System::Double orientation(Point A, Point B, Point C)
{
			double val;
			val = (B.Y-A.Y)*(C.X-B.X)-(B.X-A.X)*(C.Y-B.Y);
			if (val == 0)
				return 0;
			return (val > 0) ? 1 : 2;// clock or counterclo
}
private:System::Boolean dointersect(Point p1, Point q1, Point p2, Point q2)
{			/*
Two segments (p1,q1) and (p2,q2) intersect if and only if one of the following two conditions is verified

 General Case:
– (p1, q1, p2) and (p1, q1, q2) have different orientations and
– (p2, q2, p1) and (p2, q2, q1) have different orientations.*/
		
			double o1 = orientation(p1, q1, p2);
			double o2 = orientation(p1, q1, q2);
			double o3 = orientation(p2, q2, p1);
			double o4 = orientation(p2, q2, q1);
			if (o1 != o2 && o3 != o4)
				return true;
			
			if (o1 == 0 && onSegment(p1, p2, q1)) return true;
			if (o2 == 0 && onSegment(p1, q2, q1)) return true;
			if (o3 == 0 && onSegment(p2, p1, q2)) return true;
			if (o4 == 0 && onSegment(p2, q1, q2)) return true;
			return false;
}
private:System::Int32 max(int a,int b)
{
			return a > b ? a : b;
}

private:System::Int32 min(int a, int b)
{
			return a < b ? a : b;
}

private:System::Boolean onSegment(Point p, Point q, Point r)
{
			if (q.X <= max(p.X, r.X) && q.X >= min(p.X, r.X) && q.Y <= max(p.Y, r.Y) && q.Y >= min(p.Y, r.Y))
				return true;

			return false;
}
private:System::Boolean check_intersection()
{		   	  //for each line.(whose endpoints are store in line_no array) checkintersection with all other lines .(.except the adjacent line) 
			int l, m;
			for (l = 0; l <= line - 1;l++)
			{
				for (m = l + 2; m <= line - 1; m++)
				{
					
					if (l != 0 || m != (line - 1))
					{
						
						
						if (dointersect(line_no[l], line_no[l + 1], line_no[m], line_no[m + 1]) == true)
						{
							label4->Text = Convert::ToString(l) + "_" + Convert::ToString(m);
							return true;
						}
					}
					
						
					}
					
				}
				
			
			return false;
}

private:System::Boolean isparallel(Point A, Point B, Point C, Point D)
{			 //Checking AB||CD or not
			int u1,u2,v1,v2;
			u1 = B.X - A.X;
			u2 = B.Y - A.Y;
			v1 = D.X - C.X;
			v2 = D.Y - C.Y;
			double x1 = get_dist(A, B);
			double x2 = get_dist(C, D);
			int x3 = u1*v1 + u2*v2;
			if (x3 < 0)
				x3 = -x3;
			int x4 = x1*x2;
			if (x4 < 0)
				x4 = -x4;

		
			if (x3 == x4 || x3 == x4+1)
			{
				
				return true;
			}
			return false;

}
private:System::Boolean isperp(Point A, Point B, Point C)
{		   //checking AB,BC perpendicular or Not
			int x;
			x = (B.Y - A.Y)*(C.Y - B.Y) + (B.X - A.X)*(C.X - B.X);

			if (x == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
}

private:System::Void tri_type()
{          ///a=BC,b=CA,c=AB
			double a = get_dist(line_no[1], line_no[2]);
			double b = get_dist(line_no[2], line_no[0]);
			double c = get_dist(line_no[0], line_no[1]);
			
			if (a == b)
			{
				
				if (b == c)
				{
					textBox1->Text = "Equilateral Triangle";
				}
				else
				{
					if (isperp(line_no[0], line_no[2], line_no[1]) == true)
					{
						textBox1->Text = "Isosceles Right angle triangle";
						return;
					}
					else
					{
						textBox1->Text = "Isosceles triangle";
						return;
					}
				}
			}
			else if (a == c)
			{
				
				if (isperp(line_no[2], line_no[1], line_no[0]) == true)
				{
					textBox1->Text = "Isosceles Right angle triangle";
					return;
				}
				else
				{
					textBox1->Text = "Isosceles triangle";
				}
			}
			else if (b == c)
			{
				if (isperp(line_no[2], line_no[0], line_no[1]) == true)
				{
					textBox1->Text = "Isosceles Right angle triangle";
					return;
				}
				else
				{
					textBox1->Text = "Isosceles triangle";
				}
			}
			else
			{
				double max = a;
				if (b > max)
				{
					max = b;
				}
				if (c > max)
				{
					max = c;
				}

				double x = a*a + b*b + c*c;
				double x1 = 2 * max*max;
				if (Convert::ToInt32(x) == Convert::ToInt32(x1) || Convert::ToInt32(x)+1 == Convert::ToInt32(x1) || Convert::ToInt32(x) == Convert::ToInt32(x1)+1)
				{
					label9->Text = Convert::ToString(max);
					textBox1->Text = "Right Angled Triangle";
				}
				else
				{

					textBox1->Text = "Scalene Triangle";
				}
			}

}

private:System::Void rec_type()
{			 //A,B,C,D=line_no[0],[1],[2],[3]
			//a=AB,b=BC,c=CD,d=DA
			double a = get_dist(line_no[0], line_no[1]);
			double b = get_dist(line_no[1], line_no[2]);
			double c = get_dist(line_no[2], line_no[3]);
			double d = get_dist(line_no[3],line_no[0]);
			if (isparallel(line_no[0], line_no[1], line_no[2], line_no[3]) == true)	 //AB||CD
			{
				if (isparallel(line_no[1], line_no[2], line_no[0], line_no[3]) == true)	//BC||DA
				{
					if (isperp(line_no[0], line_no[1], line_no[2]) == true)
					{
						if (a == b)						   //AB=CD
						{
							textBox1->Text = "Square";
							return;
						}
						else
						{
							textBox1->Text = "rectangle";
							return;
						}
					}
					else if (a == b)						//AB=CD
					{
						textBox1->Text = "rhombus";
						return;
					}
					else
					{
						textBox1->Text = "parallelogram";
						return;
					}
				}
				else
				{

					textBox1->Text = "Trapizium";
					return;
				}
			}
			else if (isparallel(line_no[1], line_no[2], line_no[0], line_no[3]) == true)   //BC||DA
			{

				textBox1->Text = "Trapizium";
				return;
			}
			else if ((a == b && c == d) || (b == c && d == a))
			{
				textBox1->Text = "Kite";
				return;
			}
			else
			{
				textBox1->Text = "Quadrilateral";
				return;
			}
}

		//these picture box are for color..and pensize
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			  pen1->Color = Color::Black;
		 }


private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		    pen1->Color = Color::Purple;
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			  pen1->Color = Color::Brown;
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Red;
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  pen1->Color = Color::Orange;
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Yellow;
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Lime;
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Gray;
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Blue;
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Green;
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::Pink;
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
 pen1->Color = Color::White;
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			 pen1->Width=1;
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
		   pen1->Width=3;
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 pen1->Width=5;
		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			 pen1->Width=7;
		 }
};
}
