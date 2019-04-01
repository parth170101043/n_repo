//Showing all shapes figure in picture boxes...pictures boxes are on 3 panels ..panel1,panel2,panel3 
#pragma once
#include"shape_defination.h"
namespace final_identifying_shape {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for all_shape
	/// </summary>
	public ref class all_shape : public System::Windows::Forms::Form
	{
	public:
		all_shape(void)
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
		~all_shape()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(all_shape::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Controls->Add(this->pictureBox36);
			this->panel3->Controls->Add(this->pictureBox35);
			this->panel3->Controls->Add(this->pictureBox33);
			this->panel3->Controls->Add(this->pictureBox34);
			this->panel3->Controls->Add(this->pictureBox31);
			this->panel3->Location = System::Drawing::Point(24, 373);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1306, 571);
			this->panel3->TabIndex = 23;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Location = System::Drawing::Point(385, 271);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(202, 190);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 22;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &all_shape::pictureBox36_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Location = System::Drawing::Point(649, 52);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(202, 190);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 21;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &all_shape::pictureBox35_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Location = System::Drawing::Point(66, 42);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(202, 190);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 19;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &all_shape::pictureBox33_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Location = System::Drawing::Point(385, 42);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(202, 190);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 18;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &all_shape::pictureBox34_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Location = System::Drawing::Point(69, 280);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(205, 190);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 15;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &all_shape::pictureBox31_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(277, 179);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1088, 633);
			this->panel1->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(9, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(205, 190);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &all_shape::pictureBox1_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(3, 428);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(202, 190);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &all_shape::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(211, 428);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(211, 190);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 13;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &all_shape::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(428, 428);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(211, 190);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &all_shape::pictureBox13_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(862, 428);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(211, 190);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 10;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &all_shape::pictureBox15_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(645, 428);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(211, 190);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 11;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &all_shape::pictureBox14_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(3, 220);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(202, 190);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &all_shape::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(211, 222);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(211, 190);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &all_shape::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(428, 222);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(211, 190);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &all_shape::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(645, 222);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(211, 190);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 6;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &all_shape::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(862, 222);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(211, 190);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &all_shape::pictureBox10_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(874, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(211, 190);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &all_shape::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(657, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(211, 190);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &all_shape::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(440, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(211, 190);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &all_shape::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(220, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(211, 190);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &all_shape::pictureBox2_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(6, 217);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(202, 190);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 17;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &all_shape::pictureBox22_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->pictureBox22);
			this->panel2->Controls->Add(this->pictureBox17);
			this->panel2->Controls->Add(this->pictureBox18);
			this->panel2->Controls->Add(this->pictureBox19);
			this->panel2->Controls->Add(this->pictureBox32);
			this->panel2->Controls->Add(this->pictureBox20);
			this->panel2->Controls->Add(this->pictureBox21);
			this->panel2->Controls->Add(this->pictureBox23);
			this->panel2->Controls->Add(this->pictureBox24);
			this->panel2->Controls->Add(this->pictureBox25);
			this->panel2->Controls->Add(this->pictureBox26);
			this->panel2->Controls->Add(this->pictureBox27);
			this->panel2->Controls->Add(this->pictureBox28);
			this->panel2->Controls->Add(this->pictureBox29);
			this->panel2->Controls->Add(this->pictureBox30);
			this->panel2->Location = System::Drawing::Point(77, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1093, 643);
			this->panel2->TabIndex = 22;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(3, 428);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(202, 190);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 14;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &all_shape::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(211, 428);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(211, 190);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 13;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &all_shape::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(428, 428);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(211, 190);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 12;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &all_shape::pictureBox19_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Location = System::Drawing::Point(871, 428);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(202, 190);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 16;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &all_shape::pictureBox32_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(862, 222);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(211, 190);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 10;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &all_shape::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(645, 428);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(211, 190);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 11;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &all_shape::pictureBox21_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Location = System::Drawing::Point(211, 220);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(211, 190);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 8;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &all_shape::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(428, 222);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(211, 190);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 7;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &all_shape::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(645, 222);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(211, 190);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 6;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &all_shape::pictureBox25_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Location = System::Drawing::Point(865, 12);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(211, 190);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 5;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &all_shape::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Location = System::Drawing::Point(648, 12);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(211, 190);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 4;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &all_shape::pictureBox27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Location = System::Drawing::Point(431, 12);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(211, 190);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 3;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &all_shape::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Location = System::Drawing::Point(214, 12);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(211, 190);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 2;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &all_shape::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Location = System::Drawing::Point(6, 12);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(202, 190);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 1;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &all_shape::pictureBox30_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &all_shape::timer2_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &all_shape::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(993, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 39);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Next";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &all_shape::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(43, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 36);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Last";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &all_shape::button2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(204, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 21;
			this->label1->Text = L"1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1009, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 35);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &all_shape::button3_Click);
			// 
			// all_shape
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 761);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Name = L"all_shape";
			this->Text = L"all_shape";
			this->Load += gcnew System::EventHandler(this, &all_shape::all_shape_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			this->ResumeLayout(false);

		}
		private: int y;	 //variable to check which panel is showing..or which panel to call..y=1 for panel 1,y=2 for panel 2,y=3 for panel 3
		 int k;
		int z;
#pragma endregion
		private: System::Void picsload()
					{			
						 ///in this function pictures are added to picturebox from a file shapes using imagelocation 
					   pictureBox1->ImageLocation = "shapes/Circle.jpg";
					 
					   pictureBox2->ImageLocation = "shapes/Semi-Circle.png";
					    
					   pictureBox3->ImageLocation = "shapes/Triangle.png";
					    
					   pictureBox4->ImageLocation = "shapes/Acute-angled triangle.png";
					    
					   pictureBox5->ImageLocation = "shapes/Right-angled_triangle.jpg";
					    
					   pictureBox6->ImageLocation = "shapes/Right-angled_triangle.jpg";
					    
					
					   pictureBox7->ImageLocation = "shapes/Euilateral-triangle.jpg";
					   
					   pictureBox8->ImageLocation = "shapes/Isosceles-triangle.png";
					    
					   pictureBox9->ImageLocation = "shapes/Scalene-triangle.png";
					    
					   pictureBox10->ImageLocation = "shapes/Quadrilateral.jpg";
					    
					   pictureBox11->ImageLocation = "shapes/Parallelogram.jpg";
					    
					   pictureBox12->ImageLocation = "shapes/Rectangle.jpg";
					    
					   pictureBox13->ImageLocation = "shapes/Rhombus.png";
					    
					   pictureBox14->ImageLocation = "shapes/Square.jpg";
					    
					   pictureBox15->ImageLocation = "shapes/Trapezium.jpg";
						
					 //  pictureBox16->ImageLocation = "shapes/img5.png";
					   
					   pictureBox17->ImageLocation = "shapes/Sphere.jpg";
					    
					   pictureBox18->ImageLocation = "shapes/Cube.jpg";
					    
					   pictureBox19->ImageLocation = "shapes/Cone.jpg";
					    
					   pictureBox20->ImageLocation = "shapes/Cylinder.jpg";
					    
					   pictureBox21->ImageLocation = "shapes/Torus.jpg";
					    
					
					   pictureBox22->ImageLocation = "shapes/Pyramid.jpg";
					   
					   pictureBox23->ImageLocation = "shapes/Quater-circle.png";
					    
					   pictureBox24->ImageLocation = "shapes/Kite.jpg";
					    
					   pictureBox25->ImageLocation = "shapes/Pentagon.jpg";
					    
					   pictureBox26->ImageLocation =  "shapes/Hexagon.jpg";
					    
					   pictureBox27->ImageLocation = "shapes/Heptagon.jpg";
					    
					   pictureBox28->ImageLocation = "shapes/Octagon.jpg";
					    
					   pictureBox29->ImageLocation = "shapes/Nonagon.jpg";
					    
					   pictureBox30->ImageLocation = "shapes/Decagon.jpg";
						  
						   pictureBox31->ImageLocation = "shapes/Cuboid.jpg";
					    
					   pictureBox32->ImageLocation = "shapes/Prism.jpg";
					    
					   pictureBox33->ImageLocation = "shapes/Parallelepiped.jpg";
					    
					   pictureBox34->ImageLocation = "shapes/Frustum.jpg";
					    
					   pictureBox35->ImageLocation = "shapes/Tetrahedron.jpg";
					    
					   pictureBox36->ImageLocation = "shapes/Octahedron.jpg";

					}



	private: System::Void all_shape_Load(System::Object^  sender, System::EventArgs^  e) {
				 y=1;
				  z = int(this->Width - panel1->Width) / 2;	 ////variable to adjust panel position
				  //adjusting position of panels
				  button2->Hide();
				  panel1->Top = 90;
				 panel2->Top = 90;
				 panel3->Top = 90;	
				 panel1->Left = z;
				panel3->Left = -panel1->Width;
				 panel2->Left = this->Width;
				 	picsload();		 ////calling picsload function line no714
				 button2->Hide();
				 panel2->Hide();
				 panel3->Hide();
				 this->Top=panel1->Top+300;
			 }




private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {  //last button..
			 //hiding all buttons
			  //panel slide from left to right
			 button2->Hide();
			   button1->Hide();
			   y--;			  
			  	  panel1->Show();
				 panel2->Show();
				  panel3->Show();
			 
			if(y==1)
			{
			panel1->Left = -panel1->Width;	//for y=1 adjusting panel 1 in the left so that it can slides from left when timer2 is on
			panel3->Left = this->Width;
		 button2->Hide();
			
			   }	
			else if(y==2)
			{								  //for y=2 adjusting panel 2 in the left so that it can slides from left when timer2 is on
	
		    panel2->Left = -panel1->Width;
			panel1->Left = this->Width;

			}
			
				 timer2->Start();
			 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {  //next button
			  //panel slide from right to left
			  panel1->Show();
				 panel2->Show();
				  panel3->Show();
			 button2->Hide();
			   button1->Hide();
			   y++;
	        if(y==2)
			{
		    panel3->Left = -panel1->Width;		   //for y=2 adjusting panel 2 in the right so that it can slides from right when timer1 is on
			panel2->Left = this->Width;
		
			}
			else if(y==3)
			{
			   button1->Hide();
			   panel1->Left = -panel1->Width;		   //for y=3 adjusting panel 3 in the right so that it can slides from right when timer1 is on
			panel3->Left = this->Width;

			}
			   timer1->Start();
		
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (y ==3)
				 {
					 if (panel3->Left <= z)
					 {	  //timer stops when panel 1 reach z position  from right
						 timer1->Stop();
						 button2->Show();
						 button1->Show();
						  panel1->Hide();
						 panel2->Hide();
						

					 }
					 else
					 {	 //panel1,,2 comming from right
						 panel1->Left -= 30;		
						 panel2->Left -= 30;
						 panel3->Left -= 30;

					 }
				 }
			 else if (y== 1)
				 {
					 if (panel1->Left <= z)
					 {
						 timer1->Stop();
						 button2->Show();
						 button1->Show();
						 panel3->Hide();
						 panel2->Hide();
						 
					 }
					 else
					 {
						panel1->Left -= 30;
						 panel2->Left -= 30;
						 panel3->Left -= 30;
					 }
				 }
			 else if (y == 2)
				 {
					 if (panel2->Left <= z)
					 {
						 timer1->Stop();
						 button2->Show();
						 button1->Show();
						 panel3->Hide();
						 panel1->Hide();
					 }
					 else
					 {
						panel1->Left -= 30;
						 panel2->Left -= 30;
						 panel3->Left -= 30;

					 }
				 }
				 if(y==1)			 //when y=1 no panel in left so hide last button
					 button2->Hide();
				 if(y==3)				//when y=3 no panel in right so hide next button
					 button1->Hide();

		 }


private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (y == 0)
			 {
				 if (panel3->Left >= z)
				 {	  //timer stops when panel 3 reach z position  from left
					 timer2->Stop();
					 button2->Show();
						 button1->Show();
						  panel1->Hide();
						 panel2->Hide();
					 

				 }
				 else
				 {		  //panel 1,3,2 moving from left to right
					 panel1->Left += 30;
					 panel2->Left += 30;
					 panel3->Left += 30;

				 }
			 }
			 else if (y  == 1)
			 {
				 if (panel1->Left >= z)
				 {
					 timer2->Stop();
					 button2->Show();
						 button1->Show();
						 panel3->Hide();
						 panel2->Hide();
					

				 }
				 else
				 {
					panel1->Left += 30;
					 panel2->Left += 30;
					 panel3->Left += 30;
				 }
			 }
			 else if (y == 2)
			 {
				 if (panel2->Left >= z)
				 {
					 timer1->Stop();
					  button2->Show();
						 button1->Show();;
						 panel3->Hide();
						 panel1->Hide();

				 }
				 else
				 {	panel1->Left += 30;
					 panel2->Left += 30;
					 panel3->Left += 30;
				 }
			 }
			if(y==1)
					 button2->Hide();		//when y=1 no panel in left so hide last button
				 if(y==3)
					 button1->Hide();		  //when y=3 no panel in right so hide next button
		 }

		 private: System::Void go_to_learn()  //function to calll defination form
			  {		   //label1=the shapes number you click..shapes numbers are arranged according to the defination form

			    shape_defination^ f1 = gcnew shape_defination(label1->Text);   //sending the shape number to defination form
				 this->Hide();
				 f1->ShowDialog();
				 this->Close();
			  }

		  //on each picturebox click ,shape number acc. to defination form(not acc to picture boxno.) written in label1 and go_to_learn function called 
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="1";
			  go_to_learn();
		 }		 
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="2";
			  go_to_learn();
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="3";
			  go_to_learn();
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="10";
			  go_to_learn();
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="11";
			  go_to_learn();
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="12";
			  go_to_learn();
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="13";
			  go_to_learn();
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="14";
			  go_to_learn();
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="15";
			  go_to_learn();
		 }
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="16";
			  go_to_learn();
		 }
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) { 
						    	label1->Text="17";
			  go_to_learn();
		 }
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="18";
			  go_to_learn();
		 }
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="19";
			  go_to_learn();
		 }
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="20";
			  go_to_learn();
		 }
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="21";
			  go_to_learn();
		 }
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="22";
			  go_to_learn();
		 }
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="23";
			  go_to_learn();
		 }
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="24";
			  go_to_learn();
		 }
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="25";
			  go_to_learn();
		 }
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="26";
			  go_to_learn();
		 }
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="27";
			  go_to_learn();
		 }
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="28";
			  go_to_learn();
		 }
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="29";
			  go_to_learn();
		 }
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="30";
			  go_to_learn();
		 }
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="31";
			  go_to_learn();
		 }
private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="32";
			  go_to_learn();
		 }
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="33";
			  go_to_learn();
		 }
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="34";
			  go_to_learn();
		 }
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="35";
			  go_to_learn();
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="4";
			  go_to_learn();
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="5";
			  go_to_learn();
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="6";
			  go_to_learn();
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="7";
			  go_to_learn();
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="8";
			  go_to_learn();
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			   	label1->Text="9";
			  go_to_learn();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
