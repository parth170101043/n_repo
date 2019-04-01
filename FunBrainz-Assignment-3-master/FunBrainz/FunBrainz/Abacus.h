#pragma once
#include<random>

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Abacus
	/// </summary>

	public ref class Abacus : public System::Windows::Forms::Form
	{
	public:
		Abacus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Abacus(Form^ obj1)
		{
			InitializeComponent();
			caller = obj1;
			//
			//TODO: Add the constructor code here
			//
		}

		void unlocked(void)   //for unlocking  level
		{   int pt=0;
			 if(operation->Text=="Addition") 
				 pt=additionpt;
			 if(operation->Text=="Subtraction") 
				 pt=subpt;
			 if(operation->Text=="Multiplication") 
				 pt=mulpt;
			 if(operation->Text=="Division") 
				 pt=divpt;
			 
			    if(pt>=1800)
				l7->Visible=true;
			    if(pt>=1500)
				l6->Visible=true;
			    if(pt>=1200)
				l5->Visible=true;
			    if(pt>=900)
				l4->Visible=true;
			    if(pt>=600)
				l3->Visible=true;
			    if(pt>=300)
				l2->Visible=true;

		}
		
		 //add points according to level
		void scoreadd(void) 
		{       int addpt=0;

			    if(operation->Text=="Addition")  //for addition
					addpt=additionpt;
				else if(operation->Text=="Subtraction")  //subtraction
					addpt=subpt;
				else if(operation->Text=="Multiplication")           //multiplication
					addpt=mulpt;
				else if(operation->Text=="Division")            //division
					addpt=divpt;

				if(level->Text=="Level 1" && addpt<300)  //moving pointer to level according points 
					{addpt+=60;
						if(addpt>=300)
						{	addpt=300;
							level->Text="Level 2";
							this->pictureBox66->Location = System::Drawing::Point(15,190);}}

				else if(level->Text=="Level 2" && addpt<600) //moving pointer to level according points 
					{addpt+=50;
						if(addpt>=600)
						{	addpt=600;
							level->Text="Level 3";
							this->pictureBox66->Location = System::Drawing::Point(15,225);}}

				else if(level->Text=="Level 3" && addpt<900)    //moving pointer to level according points 
					{addpt+=45;
						if(addpt>=900)
						{	addpt=900;
							level->Text="Level 4";
							this->pictureBox66->Location = System::Drawing::Point(15,260);}}
			
				else if(level->Text=="Level 4" && addpt<1200)    //moving pointer to level according points 
					{addpt+=30;
						if(addpt>=1200)
						{	addpt=1200;
							level->Text="Level 5";
							this->pictureBox66->Location = System::Drawing::Point(15,295);}}
			
				else if(level->Text=="Level 5" && addpt<1500)    //moving pointer to level according points 
					{addpt+=25;
						 if(addpt>=1500)
						{	addpt=1500;
							level->Text="Level 6";
							this->pictureBox66->Location = System::Drawing::Point(15,330);}}
				
				else if(level->Text=="Level 6" &&addpt<1800)     //moving pointer to level according points 
					{addpt+=20;
						if(addpt>=1800)
						{	addpt=1800;
							MessageBox::Show("All level are Unlocked","Congrats");
				 			level->Text="Level 7";
			    			this->pictureBox66->Location = System::Drawing::Point(15,365);}}

			    else if(level->Text=="Level 7" && addpt<2100)       //moving pointer to level according points 
					{addpt+=10;
		    			if(addpt>=2100)
							addpt=2100;}
		
			if(operation->Text=="Addition")  //for addition
				additionpt=addpt;
			else if(operation->Text=="Subtraction")  //subtraction
				subpt=addpt;
			else if(operation->Text=="Multiplication")           //multiplication
				mulpt=addpt;
			else if(operation->Text=="Division")            //division
				divpt=addpt;

			unlocked();  //unlocking levels;
		}

		// reseting abacus bids to there initial positions for every bid
		void resetabacus(void)
		{
			 this->pictureBox3->Location = System::Drawing::Point(43,305);
			        this->pictureBox2->Location = System::Drawing::Point(43,348);
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);
					this->pictureBox4->Location = System::Drawing::Point(43,132);
					this->pictureBox8->Location = System::Drawing::Point(126,305);
			        this->pictureBox7->Location = System::Drawing::Point(126,348);
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);
					this->pictureBox9->Location = System::Drawing::Point(126,132);
				    this->pictureBox13->Location = System::Drawing::Point(211,305);
			        this->pictureBox12->Location = System::Drawing::Point(211,348);
			        this->pictureBox11->Location = System::Drawing::Point(211,391);  // reseting abacus bids to there initial positions for every bid
			        this->pictureBox15->Location = System::Drawing::Point(211,434);
					this->pictureBox14->Location = System::Drawing::Point(211,132);
				    this->pictureBox18->Location = System::Drawing::Point(296,305);
			        this->pictureBox17->Location = System::Drawing::Point(296,348);
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);
					this->pictureBox19->Location = System::Drawing::Point(296,132);
				    this->pictureBox23->Location = System::Drawing::Point(381,305);
			        this->pictureBox22->Location = System::Drawing::Point(381,348);
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);
					this->pictureBox24->Location = System::Drawing::Point(381,132);
				    this->pictureBox28->Location = System::Drawing::Point(467,305);   // reseting abacus bids to there initial positions for every bid
			        this->pictureBox27->Location = System::Drawing::Point(467,348);
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);
					this->pictureBox29->Location = System::Drawing::Point(467,132);
				    this->pictureBox63->Location = System::Drawing::Point(551,305);
			        this->pictureBox62->Location = System::Drawing::Point(551,348);
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);
					this->pictureBox64->Location = System::Drawing::Point(551,132);
				    this->pictureBox58->Location = System::Drawing::Point(633,305);
			        this->pictureBox57->Location = System::Drawing::Point(633,348);
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);    // reseting abacus bids to there initial positions for every bid
					this->pictureBox59->Location = System::Drawing::Point(633,132);
				    this->pictureBox53->Location = System::Drawing::Point(716,305);
			        this->pictureBox52->Location = System::Drawing::Point(716,348);
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);
					this->pictureBox54->Location = System::Drawing::Point(716,132);
					this->pictureBox48->Location = System::Drawing::Point(802,305);
			        this->pictureBox47->Location = System::Drawing::Point(802,348);
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);
					this->pictureBox49->Location = System::Drawing::Point(802,132);
				    this->pictureBox43->Location = System::Drawing::Point(887,305);
			        this->pictureBox42->Location = System::Drawing::Point(887,348);
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);
					this->pictureBox44->Location = System::Drawing::Point(887,132);    // reseting abacus bids to there initial positions for every bid
				    this->pictureBox38->Location = System::Drawing::Point(971,305);
			        this->pictureBox37->Location = System::Drawing::Point(971,348);
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);
					this->pictureBox39->Location = System::Drawing::Point(971,132);
				    this->pictureBox33->Location = System::Drawing::Point(1055,305);
			        this->pictureBox32->Location = System::Drawing::Point(1055,348);
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);
					this->pictureBox34->Location = System::Drawing::Point(1055,132);
		}


		// questions that are solved by user
		void Questions(void)
		{  int a,b;
		     if(level->Text == "Level 1")   // for level 1
			 {
					 a=rand()%5+1;
					 op1->Text=""+a;
				if(operation->Text == "Addition")     //for level 1 add
				{	b=rand()%5+1;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")    // for level 1 sub
				{   b=rand()%a+1;
				    op2->Text=""+b;
				    output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")   // for level 1 mul
				{   b=rand()%4+1;
					op2->Text=""+b;
					output->Text=""+(a*b);   }
				else if(operation->Text == "Division")       //for level 1 div
				{   b=rand()%3+1;
					a=rand()%4+1;
					op1->Text=""+(a*b);
					op2->Text=""+a;
					output->Text=""+b;       }
   			}

			else if(level->Text == "Level 2")               //level 2 questions
			{
				  a=rand()%7+3;
				 op1->Text=""+a;
				if(operation->Text == "Addition")
				 {  b=rand()%7+3;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{   b=rand()%a+1;
					op2->Text=""+b;
				    output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{   b=rand()%5+1;
				    op2->Text=""+b;
					output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{	b=rand()%4+1;
					a=rand()%5+1;
					op1->Text=""+(a*b);
					op2->Text=""+a;
					output->Text=""+b;       }
			}

			else if(level->Text == "Level 3")                  //level 3 questions
			{
				     a=rand()%9+6;
					 op1->Text=""+a;
				if(operation->Text == "Addition")
				{   b=rand()%8+4;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{   b=rand()%a+1;
					op2->Text=""+b;
				    output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{   b=rand()%5+1;
				    op2->Text=""+b;
					output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{   b=rand()%5+2;
				    a=rand()%6+2;
					op1->Text=""+(a*b);
				    op2->Text=""+a;
				    output->Text=""+b;       }
			}

			else if(level->Text == "Level 4")           // level 4 questions
			{
					 a=rand()%15+10;
					 op1->Text=""+a;
				if(operation->Text == "Addition")
				{  b=rand()%15+8;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{   b=rand()%a+1;
				    op2->Text=""+b;
				    output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{	b=rand()%8+4;
					op2->Text=""+b;
				   	output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{   b=rand()%8+2;
					a=rand()%9+2;
					op1->Text=""+(a*b);
					op2->Text=""+a;
					output->Text=""+b;       }
			}

			else if(level->Text == "Level 5")            // level 5 questions
			{
					  a=rand()%30+25;
					 op1->Text=""+a;
				if(operation->Text == "Addition")
				 {  b=rand()%20+21;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{	b=rand()%a+1;
				    op2->Text=""+b;
				    output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{   b=rand()%15+5;
				    op2->Text=""+b;
				    output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{   b=rand()%10+5;
				    a=rand()%15+3;
				    op1->Text=""+(a*b);
				    op2->Text=""+a;
				    output->Text=""+b;       }
			}
			else if(level->Text == "Level 6")   //level 6 questions
			{     
					a=rand()%50+50;
					op1->Text=""+a;
				if(operation->Text == "Addition")
				{  b=rand()%40+50;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{   b=rand()%(a-10)+9;
				    op2->Text=""+b;
					output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{   b=rand()%20+5;
				    op2->Text=""+b;
				    output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{   b=rand()%15+10;
					a=rand()%12+8;
				    op1->Text=""+(a*b);
					op2->Text=""+a;
				    output->Text=""+b;       }     
			}

			else if(level->Text == "Level 7")            //level 7 questions
			{
			 int a=rand()%60+70;
					 op1->Text=""+a;
				if(operation->Text == "Addition")
				 {  b=rand()%70+60;
					op2->Text=""+b;
					output->Text=""+(a+b);  }
				else if(operation->Text=="Subtraction")
				{   b=rand()%(a-20)+19;
					op2->Text=""+b;
					output->Text=""+(a-b);   }
				else if(operation->Text == "Multiplication")
				{   b=rand()%25+5;
				    op2->Text=""+b;
				    output->Text=""+(a*b);   }
				else if(operation->Text == "Division")
				{   b=rand()%18+10;
				    a=rand()%20+5;
				    op1->Text=""+(a*b);
					op2->Text=""+a;
				    output->Text=""+b;       }
			} 

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Abacus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox2;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox19;




	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;






private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Panel^  panel2;




private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel3;

private: System::Windows::Forms::TextBox^  output;

private: System::Windows::Forms::TextBox^  op2;


private: System::Windows::Forms::TextBox^  op0;
private: System::Windows::Forms::Button^  l5;


private: System::Windows::Forms::Button^  l2;
private: System::Windows::Forms::Button^  l3;


private: System::Windows::Forms::Button^  l1;
private: System::Windows::Forms::Button^  l4;
private: System::Windows::Forms::Button^  l6;




private: System::Windows::Forms::Button^  l7;

private: System::Windows::Forms::TextBox^  op1;

private: System::Windows::Forms::Button^  BACK;
private: System::Windows::Forms::Button^  div;
private: System::Windows::Forms::Button^  sub;
private: System::Windows::Forms::Button^  mul;
private: System::Windows::Forms::Button^  button;


private: System::Windows::Forms::Button^  button3;

private: System::Windows::Forms::Button^  Reset;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;

private: System::Windows::Forms::TextBox^  level;
private: System::Windows::Forms::TextBox^  operation;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::Label^  Intro;
private: System::Windows::Forms::Button^  button4;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Timer^  timer1;


private: System::ComponentModel::IContainer^  components;































































	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Abacus::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Intro = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->mul = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->operation = (gcnew System::Windows::Forms::TextBox());
			this->level = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Button());
			this->l5 = (gcnew System::Windows::Forms::Button());
			this->l7 = (gcnew System::Windows::Forms::Button());
			this->l6 = (gcnew System::Windows::Forms::Button());
			this->l4 = (gcnew System::Windows::Forms::Button());
			this->l1 = (gcnew System::Windows::Forms::Button());
			this->l2 = (gcnew System::Windows::Forms::Button());
			this->BACK = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->op1 = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->op2 = (gcnew System::Windows::Forms::TextBox());
			this->op0 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(29, 149);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(12, 450);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Purple;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(1448, 155);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(12, 450);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Purple;
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(549, 156);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(12, 450);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Purple;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(436, 156);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(12, 450);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Purple;
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(664, 155);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(12, 450);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Abacus::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Purple;
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(321, 156);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(12, 450);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Purple;
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(209, 156);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(12, 450);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Purple;
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(99, 156);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(12, 450);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(28, 142);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(1505, 13);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Abacus::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Purple;
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(776, 155);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(12, 450);
			this->textBox11->TabIndex = 10;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::Purple;
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(1224, 155);
			this->textBox13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(12, 450);
			this->textBox13->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::Purple;
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(997, 155);
			this->textBox14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(12, 450);
			this->textBox14->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::Purple;
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(887, 155);
			this->textBox15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(12, 450);
			this->textBox15->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::Purple;
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(1336, 155);
			this->textBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(12, 450);
			this->textBox16->TabIndex = 15;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Purple;
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(1111, 155);
			this->textBox17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(12, 450);
			this->textBox17->TabIndex = 16;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox18->Enabled = false;
			this->textBox18->Location = System::Drawing::Point(1520, 154);
			this->textBox18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(12, 450);
			this->textBox18->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(39, 260);
			this->textBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(1483, 15);
			this->textBox12->TabIndex = 18;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(28, 587);
			this->textBox19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(1505, 13);
			this->textBox19->TabIndex = 19;
			// 
			// panel1
			// 

			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox61);
			this->panel1->Controls->Add(this->pictureBox62);
			this->panel1->Controls->Add(this->pictureBox63);
			this->panel1->Controls->Add(this->pictureBox64);
			this->panel1->Controls->Add(this->pictureBox65);
			this->panel1->Controls->Add(this->pictureBox56);
			this->panel1->Controls->Add(this->pictureBox57);
			this->panel1->Controls->Add(this->pictureBox58);
			this->panel1->Controls->Add(this->pictureBox59);
			this->panel1->Controls->Add(this->pictureBox60);
			this->panel1->Controls->Add(this->pictureBox51);
			this->panel1->Controls->Add(this->pictureBox52);
			this->panel1->Controls->Add(this->pictureBox53);
			this->panel1->Controls->Add(this->pictureBox54);
			this->panel1->Controls->Add(this->pictureBox55);
			this->panel1->Controls->Add(this->pictureBox46);
			this->panel1->Controls->Add(this->pictureBox47);
			this->panel1->Controls->Add(this->pictureBox48);
			this->panel1->Controls->Add(this->pictureBox49);
			this->panel1->Controls->Add(this->pictureBox50);
			this->panel1->Controls->Add(this->pictureBox41);
			this->panel1->Controls->Add(this->pictureBox42);
			this->panel1->Controls->Add(this->pictureBox43);
			this->panel1->Controls->Add(this->pictureBox44);
			this->panel1->Controls->Add(this->pictureBox45);
			this->panel1->Controls->Add(this->pictureBox36);
			this->panel1->Controls->Add(this->pictureBox37);
			this->panel1->Controls->Add(this->pictureBox38);
			this->panel1->Controls->Add(this->pictureBox39);
			this->panel1->Controls->Add(this->pictureBox40);
			this->panel1->Controls->Add(this->pictureBox31);
			this->panel1->Controls->Add(this->pictureBox32);
			this->panel1->Controls->Add(this->pictureBox33);
			this->panel1->Controls->Add(this->pictureBox34);
			this->panel1->Controls->Add(this->pictureBox35);
			this->panel1->Controls->Add(this->pictureBox26);
			this->panel1->Controls->Add(this->pictureBox27);
			this->panel1->Controls->Add(this->pictureBox28);
			this->panel1->Controls->Add(this->pictureBox29);
			this->panel1->Controls->Add(this->pictureBox30);
			this->panel1->Controls->Add(this->pictureBox21);
			this->panel1->Controls->Add(this->pictureBox22);
			this->panel1->Controls->Add(this->pictureBox23);
			this->panel1->Controls->Add(this->pictureBox24);
			this->panel1->Controls->Add(this->pictureBox25);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox17);
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox19);
			this->panel1->Controls->Add(this->pictureBox20);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 234.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::Navy;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1568, 628);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Abacus::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(725, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 49);
			this->label1->TabIndex = 98;
			this->label1->Text = L"Abacus";
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::Black;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Reset->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Reset->Location = System::Drawing::Point(1295, 68);
			this->Reset->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(212, 41);
			this->Reset->TabIndex = 97;
			this->Reset->Text = L"Reset Abacus";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Abacus::button13_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(72, 73);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 41);
			this->button3->TabIndex = 96;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Abacus::button3_Click);
			// 
			// pictureBox1
			// 


			this->pictureBox1->Location = System::Drawing::Point(57, 481);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 95;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Abacus::pictureBox1_Click);
			// 
			// pictureBox2
			// 


			this->pictureBox2->Location = System::Drawing::Point(57, 428);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(97, 46);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 94;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Abacus::pictureBox2_Click);
			// 
			// pictureBox3
			// 


			this->pictureBox3->Location = System::Drawing::Point(57, 375);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 46);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 93;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Abacus::pictureBox3_Click);
			// 
			// pictureBox4
			// 


			this->pictureBox4->Location = System::Drawing::Point(57, 162);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(97, 46);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 92;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Abacus::pictureBox4_Click);
			// 
			// pictureBox5
			// 


			this->pictureBox5->Location = System::Drawing::Point(57, 534);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(97, 46);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 91;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Abacus::pictureBox5_Click);
			// 
			// pictureBox61
			// 


			this->pictureBox61->Location = System::Drawing::Point(735, 481);
			this->pictureBox61->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(97, 46);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 84;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &Abacus::pictureBox61_Click);
			// 
			// pictureBox62
			// 


			this->pictureBox62->Location = System::Drawing::Point(735, 428);
			this->pictureBox62->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(97, 46);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 83;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &Abacus::pictureBox62_Click);
			// 
			// pictureBox63
			// 


			this->pictureBox63->Location = System::Drawing::Point(735, 375);
			this->pictureBox63->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(97, 46);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 82;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &Abacus::pictureBox63_Click);
			// 
			// pictureBox64
			// 


			this->pictureBox64->Location = System::Drawing::Point(735, 162);
			this->pictureBox64->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(97, 46);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 81;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &Abacus::pictureBox64_Click);
			// 
			// pictureBox65
			// 


			this->pictureBox65->Location = System::Drawing::Point(735, 534);
			this->pictureBox65->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(97, 46);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 80;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &Abacus::pictureBox65_Click);
			// 
			// pictureBox56
			// 


			this->pictureBox56->Location = System::Drawing::Point(844, 481);
			this->pictureBox56->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(97, 46);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 79;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Click += gcnew System::EventHandler(this, &Abacus::pictureBox56_Click);
			// 
			// pictureBox57
			// 


			this->pictureBox57->Location = System::Drawing::Point(844, 428);
			this->pictureBox57->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(97, 46);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 78;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Click += gcnew System::EventHandler(this, &Abacus::pictureBox57_Click);
			// 
			// pictureBox58
			// 


			this->pictureBox58->Location = System::Drawing::Point(844, 375);
			this->pictureBox58->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(97, 46);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 77;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Click += gcnew System::EventHandler(this, &Abacus::pictureBox58_Click);
			// 
			// pictureBox59
			// 


			this->pictureBox59->Location = System::Drawing::Point(844, 162);
			this->pictureBox59->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(97, 46);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 76;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Click += gcnew System::EventHandler(this, &Abacus::pictureBox59_Click);
			// 
			// pictureBox60
			// 


			this->pictureBox60->Location = System::Drawing::Point(844, 534);
			this->pictureBox60->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(97, 46);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 75;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &Abacus::pictureBox60_Click);
			// 
			// pictureBox51
			// 


			this->pictureBox51->Location = System::Drawing::Point(955, 481);
			this->pictureBox51->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(97, 46);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 74;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &Abacus::pictureBox51_Click);
			// 
			// pictureBox52
			// 


			this->pictureBox52->Location = System::Drawing::Point(955, 428);
			this->pictureBox52->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(97, 46);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 73;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &Abacus::pictureBox52_Click);
			// 
			// pictureBox53
			// 


			this->pictureBox53->Location = System::Drawing::Point(955, 375);
			this->pictureBox53->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(97, 46);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 72;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &Abacus::pictureBox53_Click);
			// 
			// pictureBox54
			// 


			this->pictureBox54->Location = System::Drawing::Point(955, 162);
			this->pictureBox54->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(97, 46);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 71;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &Abacus::pictureBox54_Click);
			// 
			// pictureBox55
			// 


			this->pictureBox55->Location = System::Drawing::Point(955, 534);
			this->pictureBox55->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(97, 46);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 70;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &Abacus::pictureBox55_Click);
			// 
			// pictureBox46
			// 


			this->pictureBox46->Location = System::Drawing::Point(1069, 481);
			this->pictureBox46->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(97, 46);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 69;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &Abacus::pictureBox46_Click);
			// 
			// pictureBox47
			// 


			this->pictureBox47->Location = System::Drawing::Point(1069, 428);
			this->pictureBox47->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(97, 46);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 68;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &Abacus::pictureBox47_Click);
			// 
			// pictureBox48
			// 


			this->pictureBox48->Location = System::Drawing::Point(1069, 375);
			this->pictureBox48->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(97, 46);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 67;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &Abacus::pictureBox48_Click);
			// 
			// pictureBox49
			// 


			this->pictureBox49->Location = System::Drawing::Point(1069, 162);
			this->pictureBox49->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(97, 46);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 66;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &Abacus::pictureBox49_Click);
			// 
			// pictureBox50
			// 


			this->pictureBox50->Location = System::Drawing::Point(1069, 534);
			this->pictureBox50->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(97, 46);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 65;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &Abacus::pictureBox50_Click);
			// 
			// pictureBox41
			// 


			this->pictureBox41->Location = System::Drawing::Point(1183, 481);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(97, 46);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 64;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &Abacus::pictureBox41_Click);
			// 
			// pictureBox42
			// 


			this->pictureBox42->Location = System::Drawing::Point(1183, 428);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(97, 46);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 63;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &Abacus::pictureBox42_Click);
			// 
			// pictureBox43
			// 


			this->pictureBox43->Location = System::Drawing::Point(1183, 375);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(97, 46);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 62;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &Abacus::pictureBox43_Click);
			// 
			// pictureBox44
			// 


			this->pictureBox44->Location = System::Drawing::Point(1183, 162);
			this->pictureBox44->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(97, 46);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 61;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &Abacus::pictureBox44_Click);
			// 
			// pictureBox45
			// 


			this->pictureBox45->Location = System::Drawing::Point(1183, 534);
			this->pictureBox45->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(97, 46);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 60;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &Abacus::pictureBox45_Click);
			// 
			// pictureBox36
			// 


			this->pictureBox36->Location = System::Drawing::Point(1295, 481);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(97, 46);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 59;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &Abacus::pictureBox36_Click);
			// 
			// pictureBox37
			// 


			this->pictureBox37->Location = System::Drawing::Point(1295, 428);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(97, 46);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 58;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &Abacus::pictureBox37_Click);
			// 
			// pictureBox38
			// 


			this->pictureBox38->Location = System::Drawing::Point(1295, 375);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(97, 46);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 57;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &Abacus::pictureBox38_Click);
			// 
			// pictureBox39
			// 


			this->pictureBox39->Location = System::Drawing::Point(1295, 162);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(97, 46);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 56;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &Abacus::pictureBox39_Click);
			// 
			// pictureBox40
			// 


			this->pictureBox40->Location = System::Drawing::Point(1295, 534);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(97, 46);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 55;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &Abacus::pictureBox40_Click);
			// 
			// pictureBox31
			// 


			this->pictureBox31->Location = System::Drawing::Point(1407, 481);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(97, 46);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 54;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &Abacus::pictureBox31_Click);
			// 
			// pictureBox32
			// 


			this->pictureBox32->Location = System::Drawing::Point(1407, 428);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(97, 46);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 53;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &Abacus::pictureBox32_Click);
			// 
			// pictureBox33
			// 


			this->pictureBox33->Location = System::Drawing::Point(1407, 375);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(97, 46);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 52;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &Abacus::pictureBox33_Click);
			// 
			// pictureBox34
			// 


			this->pictureBox34->Location = System::Drawing::Point(1407, 162);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(97, 46);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 51;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &Abacus::pictureBox34_Click);
			// 
			// pictureBox35
			// 


			this->pictureBox35->Location = System::Drawing::Point(1407, 534);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(97, 46);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 50;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &Abacus::pictureBox35_Click);
			// 
			// pictureBox26
			// 


			this->pictureBox26->Location = System::Drawing::Point(623, 481);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(97, 46);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 49;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &Abacus::pictureBox26_Click);
			// 
			// pictureBox27
			// 


			this->pictureBox27->Location = System::Drawing::Point(623, 428);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(97, 46);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 48;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &Abacus::pictureBox27_Click);
			// 
			// pictureBox28
			// 


			this->pictureBox28->Location = System::Drawing::Point(623, 375);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(97, 46);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 47;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &Abacus::pictureBox28_Click);
			// 
			// pictureBox29
			// 


			this->pictureBox29->Location = System::Drawing::Point(623, 162);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(97, 46);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 46;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &Abacus::pictureBox29_Click);
			// 
			// pictureBox30
			// 


			this->pictureBox30->Location = System::Drawing::Point(623, 534);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(97, 46);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 45;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &Abacus::pictureBox30_Click);
			// 
			// pictureBox21
			// 


			this->pictureBox21->Location = System::Drawing::Point(508, 481);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(97, 46);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 44;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Abacus::pictureBox21_Click);
			// 
			// pictureBox22
			// 


			this->pictureBox22->Location = System::Drawing::Point(508, 428);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(97, 46);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 43;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &Abacus::pictureBox22_Click);
			// 
			// pictureBox23
			// 


			this->pictureBox23->Location = System::Drawing::Point(508, 375);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(97, 46);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 42;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Abacus::pictureBox23_Click);
			// 
			// pictureBox24
			// 


			this->pictureBox24->Location = System::Drawing::Point(508, 162);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(97, 46);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 41;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &Abacus::pictureBox24_Click);
			// 
			// pictureBox25
			// 


			this->pictureBox25->Location = System::Drawing::Point(508, 534);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(97, 46);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 40;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Abacus::pictureBox25_Click);
			// 
			// pictureBox16
			// 


			this->pictureBox16->Location = System::Drawing::Point(395, 481);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(97, 46);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 39;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Abacus::pictureBox16_Click);
			// 
			// pictureBox17
			// 


			this->pictureBox17->Location = System::Drawing::Point(395, 428);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(97, 46);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 38;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Abacus::pictureBox17_Click);
			// 
			// pictureBox18
			// 


			this->pictureBox18->Location = System::Drawing::Point(395, 375);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(97, 46);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 37;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Abacus::pictureBox18_Click);
			// 
			// pictureBox19
			// 


			this->pictureBox19->Location = System::Drawing::Point(395, 162);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(97, 46);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 36;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &Abacus::pictureBox19_Click);
			// 
			// pictureBox20
			// 


			this->pictureBox20->Location = System::Drawing::Point(395, 534);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(97, 46);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 35;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Abacus::pictureBox20_Click);
			// 
			// pictureBox11
			// 


			this->pictureBox11->Location = System::Drawing::Point(281, 481);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(97, 46);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 34;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Abacus::pictureBox11_Click);
			// 
			// pictureBox12
			// 


			this->pictureBox12->Location = System::Drawing::Point(281, 428);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(97, 46);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 33;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Abacus::pictureBox12_Click);
			// 
			// pictureBox13
			// 


			this->pictureBox13->Location = System::Drawing::Point(281, 375);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(97, 46);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 32;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Abacus::pictureBox13_Click);
			// 
			// pictureBox14
			// 


			this->pictureBox14->Location = System::Drawing::Point(281, 162);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(97, 46);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 31;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Abacus::pictureBox14_Click);
			// 
			// pictureBox15
			// 


			this->pictureBox15->Location = System::Drawing::Point(281, 534);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(97, 46);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 30;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Abacus::pictureBox15_Click);
			// 
			// pictureBox6
			// 


			this->pictureBox6->Location = System::Drawing::Point(168, 481);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(97, 46);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Abacus::pictureBox6_Click);
			// 
			// pictureBox7
			// 


			this->pictureBox7->Location = System::Drawing::Point(168, 428);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(97, 46);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 28;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Abacus::pictureBox7_Click);
			// 
			// pictureBox8
			// 


			this->pictureBox8->Location = System::Drawing::Point(168, 375);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(97, 46);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 27;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Abacus::pictureBox8_Click);
			// 
			// pictureBox9
			// 


			this->pictureBox9->Location = System::Drawing::Point(168, 162);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(97, 46);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 26;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Abacus::pictureBox9_Click);
			// 
			// pictureBox10
			// 


			this->pictureBox10->Location = System::Drawing::Point(168, 534);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(97, 46);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 25;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Abacus::pictureBox10_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;

			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->Intro);
			this->panel2->Controls->Add(this->button);
			this->panel2->Controls->Add(this->div);
			this->panel2->Controls->Add(this->sub);
			this->panel2->Controls->Add(this->mul);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1568, 628);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(20, 490);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 39);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Abacus";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Abacus::button4_Click_1);
			// 
			// Intro
			// 
			this->Intro->AutoSize = true;
			this->Intro->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Intro->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Intro->Location = System::Drawing::Point(317, 338);
			this->Intro->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Intro->Name = L"Intro";
			this->Intro->Size = System::Drawing::Size(984, 240);
			this->Intro->TabIndex = 9;
			// 
			// button
			// 
			this->button->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button->Location = System::Drawing::Point(20, 271);
			this->button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(188, 39);
			this->button->TabIndex = 7;
			this->button->Text = L"Addition";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &Abacus::button_Click_1);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(20, 418);
			this->div->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(188, 39);
			this->div->TabIndex = 6;
			this->div->Text = L"Division";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &Abacus::div_Click);
			// 
			// sub
			// 
			this->sub->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sub->Location = System::Drawing::Point(20, 320);
			this->sub->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(188, 39);
			this->sub->TabIndex = 5;
			this->sub->Text = L"Subtraction";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &Abacus::sub_Click);
			// 
			// mul
			// 
			this->mul->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mul->Location = System::Drawing::Point(20, 369);
			this->mul->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mul->Name = L"mul";
			this->mul->Size = System::Drawing::Size(188, 39);
			this->mul->TabIndex = 4;
			this->mul->Text = L"Multiplication";
			this->mul->UseVisualStyleBackColor = true;
			this->mul->Click += gcnew System::EventHandler(this, &Abacus::mul_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(20, 222);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Videos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Abacus::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(20, 172);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Introduction";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Abacus::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ink Free", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(739, 12);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 58);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ABACUS";
			// 
			// panel3
			// 

			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox66);
			this->panel3->Controls->Add(this->operation);
			this->panel3->Controls->Add(this->level);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->l3);
			this->panel3->Controls->Add(this->l5);
			this->panel3->Controls->Add(this->l7);
			this->panel3->Controls->Add(this->l6);
			this->panel3->Controls->Add(this->l4);
			this->panel3->Controls->Add(this->l1);
			this->panel3->Controls->Add(this->l2);
			this->panel3->Controls->Add(this->BACK);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->op1);
			this->panel3->Controls->Add(this->output);
			this->panel3->Controls->Add(this->op2);
			this->panel3->Controls->Add(this->op0);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::Yellow;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1064, 635);
			this->panel3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(756, 198);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"0.0";
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::SystemColors::ActiveCaptionText;

			this->pictureBox66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

			this->pictureBox66->Location = System::Drawing::Point(16, 190);
			this->pictureBox66->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(33, 26);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 24;
			this->pictureBox66->TabStop = false;
			// 
			// operation
			// 
			this->operation->BackColor = System::Drawing::SystemColors::InfoText;
			this->operation->Enabled = false;
			this->operation->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->operation->ForeColor = System::Drawing::Color::Silver;
			this->operation->Location = System::Drawing::Point(691, 22);
			this->operation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(185, 40);
			this->operation->TabIndex = 23;
			this->operation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// level
			// 
			this->level->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->level->Enabled = false;
			this->level->ForeColor = System::Drawing::Color::Yellow;
			this->level->Location = System::Drawing::Point(737, 76);
			this->level->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->level->Name = L"level";
			this->level->Size = System::Drawing::Size(91, 30);
			this->level->TabIndex = 22;
			this->level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(592, 587);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(318, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"After that click on Submit button";
			// 
			// l3
			// 
			this->l3->BackColor = System::Drawing::Color::Black;
			this->l3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(53, 271);
			this->l3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(181, 38);
			this->l3->TabIndex = 6;
			this->l3->Text = L"Level 3";
			this->l3->UseVisualStyleBackColor = false;
			this->l3->Click += gcnew System::EventHandler(this, &Abacus::button4_Click);
			// 
			// l5
			// 
			this->l5->BackColor = System::Drawing::Color::Black;
			this->l5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(53, 357);
			this->l5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(181, 38);
			this->l5->TabIndex = 12;
			this->l5->Text = L"Level 5";
			this->l5->UseVisualStyleBackColor = false;
			this->l5->Click += gcnew System::EventHandler(this, &Abacus::button10_Click);
			// 
			// l7
			// 
			this->l7->BackColor = System::Drawing::Color::Black;
			this->l7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(53, 443);
			this->l7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(181, 38);
			this->l7->TabIndex = 10;
			this->l7->Text = L"Level 7";
			this->l7->UseVisualStyleBackColor = false;
			this->l7->Click += gcnew System::EventHandler(this, &Abacus::button8_Click);
			// 
			// l6
			// 
			this->l6->BackColor = System::Drawing::Color::Black;
			this->l6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(53, 400);
			this->l6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(181, 38);
			this->l6->TabIndex = 11;
			this->l6->Text = L"Level 6";
			this->l6->UseVisualStyleBackColor = false;
			this->l6->Click += gcnew System::EventHandler(this, &Abacus::button9_Click);
			// 
			// l4
			// 
			this->l4->BackColor = System::Drawing::Color::Black;
			this->l4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(53, 314);
			this->l4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(181, 38);
			this->l4->TabIndex = 7;
			this->l4->Text = L"Level 4";
			this->l4->UseVisualStyleBackColor = false;
			this->l4->Click += gcnew System::EventHandler(this, &Abacus::button5_Click);
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::Color::Black;
			this->l1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(53, 185);
			this->l1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(181, 38);
			this->l1->TabIndex = 13;
			this->l1->Text = L"Level 1";
			this->l1->UseVisualStyleBackColor = false;
			this->l1->Click += gcnew System::EventHandler(this, &Abacus::button11_Click);
			// 
			// l2
			// 
			this->l2->BackColor = System::Drawing::Color::Black;
			this->l2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(53, 228);
			this->l2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(181, 38);
			this->l2->TabIndex = 14;
			this->l2->Text = L"Level 2";
			this->l2->UseVisualStyleBackColor = false;
			this->l2->Click += gcnew System::EventHandler(this, &Abacus::l2_Click);
			// 
			// BACK
			// 
			this->BACK->BackColor = System::Drawing::Color::Black;
			this->BACK->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->BACK->Location = System::Drawing::Point(69, 92);
			this->BACK->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BACK->Name = L"BACK";
			this->BACK->Size = System::Drawing::Size(153, 42);
			this->BACK->TabIndex = 15;
			this->BACK->Text = L"<-BACK";
			this->BACK->UseVisualStyleBackColor = false;
			this->BACK->Click += gcnew System::EventHandler(this, &Abacus::BACK_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(467, 560);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(541, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Solve this using abacus and put your answer in abacus";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Font = (gcnew System::Drawing::Font(L"Ink Free", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Silver;
			this->button13->Location = System::Drawing::Point(691, 494);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(167, 42);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Submit";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Abacus::button13_Click_1);
			// 
			// op1
			// 
			this->op1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op1->Enabled = false;
			this->op1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->op1->Location = System::Drawing::Point(677, 251);
			this->op1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->op1->Name = L"op1";
			this->op1->ReadOnly = true;
			this->op1->Size = System::Drawing::Size(72, 30);
			this->op1->TabIndex = 5;
			this->op1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->output->Enabled = false;
			this->output->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->output->Location = System::Drawing::Point(51, 562);
			this->output->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(92, 30);
			this->output->TabIndex = 3;
			// 
			// op2
			// 
			this->op2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op2->Enabled = false;
			this->op2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->op2->Location = System::Drawing::Point(819, 251);
			this->op2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->op2->Name = L"op2";
			this->op2->ReadOnly = true;
			this->op2->Size = System::Drawing::Size(71, 30);
			this->op2->TabIndex = 1;
			this->op2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// op0
			// 
			this->op0->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op0->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->op0->Enabled = false;
			this->op0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->op0->ForeColor = System::Drawing::Color::Gray;
			this->op0->Location = System::Drawing::Point(779, 247);
			this->op0->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->op0->Name = L"op0";
			this->op0->Size = System::Drawing::Size(25, 34);
			this->op0->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1568, 628);
			this->panel4->TabIndex = 26;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1412, 560);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 34);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Abacus::button5_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(65, 207);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 29);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Subtraction";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Navy;
			this->label10->Location = System::Drawing::Point(68, 431);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 29);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Division";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Navy;
			this->label9->Location = System::Drawing::Point(68, 318);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 29);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Multiplication";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Navy;
			this->label7->Location = System::Drawing::Point(68, 106);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 29);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Addition";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(745, 12);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 54);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Abacus";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Abacus::timer1_Tick);
			// 
			// Abacus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1568, 628);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Abacus";
			this->Text = L"Abacus";
			this->Load += gcnew System::EventHandler(this, &Abacus::Abacus_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox66))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Form^ caller;
		int tmp,count; //tmp for intro show and hide and count for timer used for time limit
		int additionpt,subpt,mulpt,divpt,timespent,quesolved;  //point scored in an indivisual module
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox1->Location != System::Drawing::Point(43,316))     //down
				  { this->pictureBox1->Location = System::Drawing::Point(43,316);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);
			        this->pictureBox2->Location = System::Drawing::Point(43,273);}
			 else { 
			        this->pictureBox1->Location = System::Drawing::Point(43,391);       //up
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }		 
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox3->Location != System::Drawing::Point(43,230))      //up
				  { this->pictureBox3->Location = System::Drawing::Point(43,230);}
			 else {
				    this->pictureBox3->Location = System::Drawing::Point(43,305);
			        this->pictureBox2->Location = System::Drawing::Point(43,348);      //down
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox2->Location != System::Drawing::Point(43,273))  //up
				  { this->pictureBox2->Location = System::Drawing::Point(43,273);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);}
			 else { 
				    this->pictureBox2->Location = System::Drawing::Point(43,348);    //down
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox5->Location != System::Drawing::Point(43,359))        //up
				  { this->pictureBox5->Location = System::Drawing::Point(43,359);
				    this->pictureBox1->Location = System::Drawing::Point(43,316);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);
			        this->pictureBox2->Location = System::Drawing::Point(43,273);}
			 else { 
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }	//down
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox4->Location != System::Drawing::Point(43,170))       //down
				 this->pictureBox4->Location = System::Drawing::Point(43,170);
			 else
			     this->pictureBox4->Location = System::Drawing::Point(43,132);        //up
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox9->Location != System::Drawing::Point(126,170))
				 this->pictureBox9->Location = System::Drawing::Point(126,170);
			 else
			     this->pictureBox9->Location = System::Drawing::Point(126,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox14->Location != System::Drawing::Point(211,170))
				 this->pictureBox14->Location = System::Drawing::Point(211,170);
			 else
			     this->pictureBox14->Location = System::Drawing::Point(211,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox19->Location != System::Drawing::Point(296,170))
				 this->pictureBox19->Location = System::Drawing::Point(296,170);
			 else
			     this->pictureBox19->Location = System::Drawing::Point(296,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox24->Location != System::Drawing::Point(381,170))
				 this->pictureBox24->Location = System::Drawing::Point(381,170);
			 else
			     this->pictureBox24->Location = System::Drawing::Point(381,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox29->Location != System::Drawing::Point(467,170))
				 this->pictureBox29->Location = System::Drawing::Point(467,170);
			 else
			     this->pictureBox29->Location = System::Drawing::Point(467,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox64_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox64->Location != System::Drawing::Point(551,170))
				 this->pictureBox64->Location = System::Drawing::Point(551,170);
			 else
			     this->pictureBox64->Location = System::Drawing::Point(551,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox59_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox59->Location != System::Drawing::Point(633,170))
				 this->pictureBox59->Location = System::Drawing::Point(633,170);
			 else
			     this->pictureBox59->Location = System::Drawing::Point(633,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox54_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox54->Location != System::Drawing::Point(716,170))
				 this->pictureBox54->Location = System::Drawing::Point(716,170);
			 else
			     this->pictureBox54->Location = System::Drawing::Point(716,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox49_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox49->Location != System::Drawing::Point(802,170))
				 this->pictureBox49->Location = System::Drawing::Point(802,170);
			 else
			     this->pictureBox49->Location = System::Drawing::Point(802,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox44_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox44->Location != System::Drawing::Point(887,170))
				 this->pictureBox44->Location = System::Drawing::Point(887,170);
			 else
			     this->pictureBox44->Location = System::Drawing::Point(887,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox39->Location != System::Drawing::Point(971,170))
				 this->pictureBox39->Location = System::Drawing::Point(971,170);
			 else
			     this->pictureBox39->Location = System::Drawing::Point(971,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox34->Location != System::Drawing::Point(1055,170))
				 this->pictureBox34->Location = System::Drawing::Point(1055,170);
			 else
			     this->pictureBox34->Location = System::Drawing::Point(1055,132);
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
             if( this->pictureBox8->Location != System::Drawing::Point(126,230))
				  { this->pictureBox8->Location = System::Drawing::Point(126,230);}
			 else {
				    this->pictureBox8->Location = System::Drawing::Point(126,305);
			        this->pictureBox7->Location = System::Drawing::Point(126,348);
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox13->Location != System::Drawing::Point(211,230))
				  { this->pictureBox13->Location = System::Drawing::Point(211,230);}
			 else {
				    this->pictureBox13->Location = System::Drawing::Point(211,305);
			        this->pictureBox12->Location = System::Drawing::Point(211,348);
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox18->Location != System::Drawing::Point(296,230))
				  { this->pictureBox18->Location = System::Drawing::Point(296,230);}
			 else {
				    this->pictureBox18->Location = System::Drawing::Point(296,305);
			        this->pictureBox17->Location = System::Drawing::Point(296,348);
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox23->Location != System::Drawing::Point(381,230))
				  { this->pictureBox23->Location = System::Drawing::Point(381,230);}
			 else {
				    this->pictureBox23->Location = System::Drawing::Point(381,305);
			        this->pictureBox22->Location = System::Drawing::Point(381,348);
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox28->Location != System::Drawing::Point(467,230))
				  { this->pictureBox28->Location = System::Drawing::Point(467,230);}
			 else {
				    this->pictureBox28->Location = System::Drawing::Point(467,305);
			        this->pictureBox27->Location = System::Drawing::Point(467,348);
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox63_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox63->Location != System::Drawing::Point(551,230))
				  { this->pictureBox63->Location = System::Drawing::Point(551,230);}
			 else {
				    this->pictureBox63->Location = System::Drawing::Point(551,305);
			        this->pictureBox62->Location = System::Drawing::Point(551,348);
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox58_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox58->Location != System::Drawing::Point(633,230))
				  { this->pictureBox58->Location = System::Drawing::Point(633,230);}
			 else {
				    this->pictureBox58->Location = System::Drawing::Point(633,305);
			        this->pictureBox57->Location = System::Drawing::Point(633,348);
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox53_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox53->Location != System::Drawing::Point(716,230))
				  { this->pictureBox53->Location = System::Drawing::Point(716,230);}
			 else {
				    this->pictureBox53->Location = System::Drawing::Point(716,305);
			        this->pictureBox52->Location = System::Drawing::Point(716,348);
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox48->Location != System::Drawing::Point(802,230))
				  { this->pictureBox48->Location = System::Drawing::Point(802,230);}
			 else {
				    this->pictureBox48->Location = System::Drawing::Point(802,305);
			        this->pictureBox47->Location = System::Drawing::Point(802,348);
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox43_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox43->Location != System::Drawing::Point(887,230))
				  { this->pictureBox43->Location = System::Drawing::Point(887,230);}
			 else {
				    this->pictureBox43->Location = System::Drawing::Point(887,305);
			        this->pictureBox42->Location = System::Drawing::Point(887,348);
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox38->Location != System::Drawing::Point(971,230))
				  { this->pictureBox38->Location = System::Drawing::Point(971,230);}
			 else {
				    this->pictureBox38->Location = System::Drawing::Point(971,305);
			        this->pictureBox37->Location = System::Drawing::Point(971,348);
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox33->Location != System::Drawing::Point(1055,230))
				  { this->pictureBox33->Location = System::Drawing::Point(1055,230);}
			 else {
				    this->pictureBox33->Location = System::Drawing::Point(1055,305);
			        this->pictureBox32->Location = System::Drawing::Point(1055,348);
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox7->Location != System::Drawing::Point(126,273))
				  { this->pictureBox7->Location = System::Drawing::Point(126,273);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);}
			 else { 
				    this->pictureBox7->Location = System::Drawing::Point(126,348);
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox12->Location != System::Drawing::Point(211,273))
				  { this->pictureBox12->Location = System::Drawing::Point(211,273);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);}
			 else { 
				    this->pictureBox12->Location = System::Drawing::Point(211,348);
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox17->Location != System::Drawing::Point(296,273))
				  { this->pictureBox17->Location = System::Drawing::Point(296,273);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);}
			 else { 
				    this->pictureBox17->Location = System::Drawing::Point(296,348);
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox22->Location != System::Drawing::Point(381,273))
				  { this->pictureBox22->Location = System::Drawing::Point(381,273);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);}
			 else { 
				    this->pictureBox22->Location = System::Drawing::Point(381,348);
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox27->Location != System::Drawing::Point(467,273))
				  { this->pictureBox27->Location = System::Drawing::Point(467,273);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);}
			 else { 
				    this->pictureBox27->Location = System::Drawing::Point(467,348);
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox62->Location != System::Drawing::Point(551,273))
				  { this->pictureBox62->Location = System::Drawing::Point(551,273);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);}
			 else { 
				    this->pictureBox62->Location = System::Drawing::Point(551,348);
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox57_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox57->Location != System::Drawing::Point(633,273))
				  { this->pictureBox57->Location = System::Drawing::Point(633,273);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);}
			 else { 
				    this->pictureBox57->Location = System::Drawing::Point(633,348);
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox52->Location != System::Drawing::Point(716,273))
				  { this->pictureBox52->Location = System::Drawing::Point(716,273);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);}
			 else { 
				    this->pictureBox52->Location = System::Drawing::Point(716,348);
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox47->Location != System::Drawing::Point(802,273))
				  { this->pictureBox47->Location = System::Drawing::Point(802,273);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);}
			 else { 
				    this->pictureBox47->Location = System::Drawing::Point(802,348);
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox42_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox42->Location != System::Drawing::Point(887,273))
				  { this->pictureBox42->Location = System::Drawing::Point(887,273);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);}
			 else { 
				    this->pictureBox42->Location = System::Drawing::Point(887,348);
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox37->Location != System::Drawing::Point(971,273))
				  { this->pictureBox37->Location = System::Drawing::Point(971,273);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);}
			 else { 
				    this->pictureBox37->Location = System::Drawing::Point(971,348);
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox32->Location != System::Drawing::Point(1055,273))
				  { this->pictureBox32->Location = System::Drawing::Point(1055,273);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);}
			 else { 
				    this->pictureBox32->Location = System::Drawing::Point(1055,348);
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }
		 }


 // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox6->Location != System::Drawing::Point(126,316))
				  { this->pictureBox6->Location = System::Drawing::Point(126,316);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);
			        this->pictureBox7->Location = System::Drawing::Point(126,273);}
			 else { 
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox11->Location != System::Drawing::Point(211,316))
				  { this->pictureBox11->Location = System::Drawing::Point(211,316);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);
			        this->pictureBox12->Location = System::Drawing::Point(211,273);}
			 else { 
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox16->Location != System::Drawing::Point(296,316))
				  { this->pictureBox16->Location = System::Drawing::Point(296,316);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);
			        this->pictureBox17->Location = System::Drawing::Point(296,273);}
			 else { 
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox21->Location != System::Drawing::Point(381,316))
				  { this->pictureBox21->Location = System::Drawing::Point(381,316);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);
			        this->pictureBox22->Location = System::Drawing::Point(381,273);}
			 else { 
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox26->Location != System::Drawing::Point(467,316))
				  { this->pictureBox26->Location = System::Drawing::Point(467,316);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);
			        this->pictureBox27->Location = System::Drawing::Point(467,273);}
			 else { 
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox61_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox61->Location != System::Drawing::Point(551,316))
				  { this->pictureBox61->Location = System::Drawing::Point(551,316);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);
			        this->pictureBox62->Location = System::Drawing::Point(551,273);}
			 else { 
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox56_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox56->Location != System::Drawing::Point(633,316))
				  { this->pictureBox56->Location = System::Drawing::Point(633,316);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);
			        this->pictureBox57->Location = System::Drawing::Point(633,273);}
			 else { 
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox51_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox51->Location != System::Drawing::Point(716,316))
				  { this->pictureBox51->Location = System::Drawing::Point(716,316);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);
			        this->pictureBox52->Location = System::Drawing::Point(716,273);}
			 else { 
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox46->Location != System::Drawing::Point(802,316))
				  { this->pictureBox46->Location = System::Drawing::Point(802,316);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);
			        this->pictureBox47->Location = System::Drawing::Point(802,273);}
			 else { 
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {

			  if( this->pictureBox41->Location != System::Drawing::Point(887,316))
				  { this->pictureBox41->Location = System::Drawing::Point(887,316);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);
			        this->pictureBox42->Location = System::Drawing::Point(887,273);}
			 else { 
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox36->Location != System::Drawing::Point(971,316))
				  { this->pictureBox36->Location = System::Drawing::Point(971,316);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);
			        this->pictureBox37->Location = System::Drawing::Point(971,273);}
			 else { 
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox31->Location != System::Drawing::Point(1055,316))
				  { this->pictureBox31->Location = System::Drawing::Point(1055,316);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);
			        this->pictureBox32->Location = System::Drawing::Point(1055,273);}
			 else { 
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }	
		 }
		  // movement of bids according to there position in abacus for moving bids up and down

private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox10->Location != System::Drawing::Point(126,359))
				  { this->pictureBox10->Location = System::Drawing::Point(126,359);
				    this->pictureBox6->Location = System::Drawing::Point(126,316);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);
			        this->pictureBox7->Location = System::Drawing::Point(126,273);}
			 else { 
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox15->Location != System::Drawing::Point(211,359))
				  { this->pictureBox15->Location = System::Drawing::Point(211,359);
				    this->pictureBox11->Location = System::Drawing::Point(211,316);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);
			        this->pictureBox12->Location = System::Drawing::Point(211,273);}
			 else { 
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox20->Location != System::Drawing::Point(296,359))
				  { this->pictureBox20->Location = System::Drawing::Point(296,359);
				    this->pictureBox16->Location = System::Drawing::Point(296,316);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);
			        this->pictureBox17->Location = System::Drawing::Point(296,273);}
			 else { 
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox25->Location != System::Drawing::Point(381,359))
				  { this->pictureBox25->Location = System::Drawing::Point(381,359);
				    this->pictureBox21->Location = System::Drawing::Point(381,316);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);
			        this->pictureBox22->Location = System::Drawing::Point(381,273);}
			 else { 
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox30->Location != System::Drawing::Point(467,359))
				  { this->pictureBox30->Location = System::Drawing::Point(467,359);
				    this->pictureBox26->Location = System::Drawing::Point(467,316);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);
			        this->pictureBox27->Location = System::Drawing::Point(467,273);}
			 else { 
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox65_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox65->Location != System::Drawing::Point(551,359))
				  { this->pictureBox65->Location = System::Drawing::Point(551,359);
				    this->pictureBox61->Location = System::Drawing::Point(551,316);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);
			        this->pictureBox62->Location = System::Drawing::Point(551,273);}
			 else { 
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox60_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox60->Location != System::Drawing::Point(633,359))
				  { this->pictureBox60->Location = System::Drawing::Point(633,359);
				    this->pictureBox56->Location = System::Drawing::Point(633,316);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);
			        this->pictureBox57->Location = System::Drawing::Point(633,273);}
			 else { 
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox55_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox55->Location != System::Drawing::Point(716,359))
				  { this->pictureBox55->Location = System::Drawing::Point(716,359);
				    this->pictureBox51->Location = System::Drawing::Point(716,316);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);
			        this->pictureBox52->Location = System::Drawing::Point(716,273);}
			 else { 
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox50_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox50->Location != System::Drawing::Point(802,359))
				  { this->pictureBox50->Location = System::Drawing::Point(802,359);
				    this->pictureBox46->Location = System::Drawing::Point(802,316);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);
			        this->pictureBox47->Location = System::Drawing::Point(802,273);}
			 else { 
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox45->Location != System::Drawing::Point(887,359))
				  { this->pictureBox45->Location = System::Drawing::Point(887,359);
				    this->pictureBox41->Location = System::Drawing::Point(887,316);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);
			        this->pictureBox42->Location = System::Drawing::Point(887,273);}
			 else { 
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
		  // movement of bids according to there position in abacus for moving bids up and down
private: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox40->Location != System::Drawing::Point(971,359))
				  { this->pictureBox40->Location = System::Drawing::Point(971,359);
				    this->pictureBox36->Location = System::Drawing::Point(971,316);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);
			        this->pictureBox37->Location = System::Drawing::Point(971,273);}
			 else { 
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
		 // movement of bids according to there position in abacus for moving bids up and down 
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox35->Location != System::Drawing::Point(1055,359))
				  { this->pictureBox35->Location = System::Drawing::Point(1055,359);
				    this->pictureBox31->Location = System::Drawing::Point(1055,316);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);
			        this->pictureBox32->Location = System::Drawing::Point(1055,273);}
			 else { 
			         this->pictureBox35->Location = System::Drawing::Point(1055,434);
			 }
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		     this->pictureBox66->Location = System::Drawing::Point(15,155);  //pointer pointing at level 1
			 level->Text="Level 1";    //level 1
			 Questions();            //questions for  level 1
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void button_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Addition";         //Addition
			 this->op0->Text="+";
			 level->Text="Level 1";       //by default set level 1
			// Questions();                 //questions for level 1
			 unlocked();
			 timer1->Enabled=false;
			 this->panel1->Visible=true;  //show panel 1 (abacus)
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;      //show panel 3
			  this->pictureBox66->Location = System::Drawing::Point(15,155);        //pointer location
		 }
private: System::Void sub_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Subtraction";               //subtraction        
			 this->op0->Text="-";
			 level->Text="Level 1";
			// Questions();                 // questions for this level
			 unlocked();  //level unlocked
			  timer1->Enabled=false;
			  this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;            //panel 3 show
			  this->pictureBox66->Location = System::Drawing::Point(15,155);            //pointer location
		 }
private: System::Void mul_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Multiplication";      // multiplication
			 this->op0->Text="*";
			 level->Text="Level 1";
			 //Questions();           //questions for  level 1
			 unlocked();
			  timer1->Enabled=false;
		     this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;                      //panel 3 show
			 this->pictureBox66->Location = System::Drawing::Point(15,155);           //pointer location
		 }
private: System::Void div_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Division";                //devision operation 
			 this->op0->Text="/";
			 level->Text="Level 1";
			 //Questions();                          //questions for  level 1
			 unlocked();
			  timer1->Enabled=false;
			 this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;                    //panel 3 show
	   	     this->pictureBox66->Location = System::Drawing::Point(15,155);    //pointer to level 1
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->pictureBox66->Location = System::Drawing::Point(15,225);
			 level->Text="Level 3";
		     Questions();                          //questions for this level
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void l2_Click(System::Object^  sender, System::EventArgs^  e) {
		     this->pictureBox66->Location = System::Drawing::Point(15,190);
		     level->Text="Level 2";
		     Questions();                 //questions for this level
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->pictureBox66->Location = System::Drawing::Point(15,260);
			  level->Text="Level 4";
			  Questions();                //questions for this level
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {	
			  this->pictureBox66->Location = System::Drawing::Point(15,295);
			 level->Text="Level 5";
			  Questions();                  //questions for this level
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->pictureBox66->Location = System::Drawing::Point(15,330);
			  level->Text="Level 6";
			  Questions();               //questions for this level
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->pictureBox66->Location = System::Drawing::Point(15,365); 
			 level->Text="Level 7";   
			 Questions();                       //questions for this level 
			 label3->Visible=false;
			 count=0;
			 timer1->Enabled=true;
			 this->timer1_Tick(e,e);
		 }
private: System::Void Abacus_Load(System::Object^  sender, System::EventArgs^  e) {
			 tmp=0,count=0;
			 additionpt=0,subpt=0,mulpt=0,divpt=0,timespent=0,quesolved=0;
			 this->output->Visible=false;
			 Intro->Visible=false;
			 this->panel1->Visible=false;
			 this->panel2->Visible=true;            //panel 2 show
			 this->panel3->Visible=false;
			 this->panel4->Visible=false;
			 label3->Visible=false;
			 count=0;
	         //level hided
			 l2->Visible=false;
			 l3->Visible=false;
			 l4->Visible=false;
			 l5->Visible=false;
			 l6->Visible=false;
			 l7->Visible=false;
		 }
private: System::Void BACK_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->panel1->Visible=false;
			 this->panel2->Visible=true;               // goback to home panel
			 this->panel3->Visible=false;
			 op1->Text="";
			 op2->Text="";                          //empty textbox
			 output->Text="";
			 Intro->Visible=false;
			 label3->Visible=false;
			 count=0;
			 l2->Visible=false;
			 l3->Visible=false;
			 l4->Visible=false;
			 l5->Visible=false;
			 l6->Visible=false;
			 l7->Visible=false;
			 timer1->Enabled=false;
			 label3->Visible=false;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible=false;
			 this->panel2->Visible=true;    //panel 2 shows
			 this->panel3->Visible=false;
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			       resetabacus();    //reset abacus
		 }
private: System::Void button13_Click_1(System::Object^  sender, System::EventArgs^  e) {
		label3->Visible=false;
         timer1->Enabled=false;
		//calculating answer value stored in abacus by user and checking answer with it 
			 int val=0;
			        if(this->pictureBox33->Location != System::Drawing::Point(1055,305))
			           {  val=val+1;
						   if(this->pictureBox32->Location != System::Drawing::Point(1055,348))
			                   { val=val+1;
								   if(this->pictureBox31->Location != System::Drawing::Point(1055,391))
			                          { val=val+1;
										  if(this->pictureBox35->Location != System::Drawing::Point(1055,434))
										  {val=val+1;
										  }
					                  }
					           }
					   }
					if(this->pictureBox34->Location != System::Drawing::Point(1055,132))
					{
						val=val+5;
					}
					
					//counting value stored in abacus 
					 if(this->pictureBox38->Location != System::Drawing::Point(971,305))
			           {  val=val+10;
						   if(this->pictureBox37->Location != System::Drawing::Point(971,348))
			                   { val=val+10;
								   if(this->pictureBox36->Location != System::Drawing::Point(971,391))
			                          { val=val+10;
										  if(this->pictureBox40->Location != System::Drawing::Point(971,434))
										  {val=val+10;
										  }
					                  }
					           }
					   }
					if(this->pictureBox39->Location != System::Drawing::Point(971,132))
					{
						val=val+50;
					}
					
					//calculaing value entered in abacus
					 if(this->pictureBox43->Location != System::Drawing::Point(887,305))
			           {  val=val+100;
						   if(this->pictureBox42->Location != System::Drawing::Point(887,348))
			                   { val=val+100;
								   if(this->pictureBox41->Location != System::Drawing::Point(887,391))
			                          { val=val+100;
										  if(this->pictureBox45->Location != System::Drawing::Point(887,434))
										  {val=val+100;
										  }
					                  }
					           }
					   }
					if(this->pictureBox44->Location != System::Drawing::Point(887,132))
					{
						val=val+500;
					}

					//calculating value in msb column 
					 if(this->pictureBox48->Location != System::Drawing::Point(802,305))
			           {  val=val+1000;
						   if(this->pictureBox47->Location != System::Drawing::Point(802,348))
			                   { val=val+1000;
								   if(this->pictureBox46->Location != System::Drawing::Point(802,391))
			                          { val=val+1000;
										  if(this->pictureBox50->Location != System::Drawing::Point(802,434))
										  { val=val+1000;
										  }
					                  }
					           }
					   }
					if(this->pictureBox49->Location != System::Drawing::Point(802,132))
					{
						val=val+5000;
					}
				if(output->Text == (""+val))                  //checking answer is correct or not
				{  
					MessageBox::Show("Correct Answer","Info");
					scoreadd();   //score inc
				}
				else
				{  
					MessageBox::Show("Incorrect Answer","Info");
				}
				quesolved++;     //one qusetion solved
				timespent+=count;  //add time spent
				resetabacus();      //reset abacus
				Questions();
				count=0;
				label3->Visible=true;
			    timer1->Enabled=true;
			    this->timer1_Tick(e,e);
				unlocked();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tmp%2==0)
			 Intro->Visible=true; //show introduction to user
			 else
		     Intro->Visible=false;  //hide intro
			 tmp++;
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible=true;               //open panel 1 i.e abacus
			 this->panel2->Visible=false;
			 this->panel3->Visible=false;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {      //open video link panel
			 panel4->Visible=true;
			 panel2->Visible=false;
		 }
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {   //back button of video panel
			 panel2->Visible=true;
			 panel4->Visible=false;
			 Intro->Visible=false;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {     //timer function
			 label3->Visible=true;
			 count++;
			 label3->Text=""+((120-count)/60) + "." ""+((120-count)%60);
			 if(count>=120)
				 {	  timespent+=count;  
					  count=0;
					 timer1->Enabled=false;
					  label3->Visible=false;
					  MessageBox::Show("Times up","Try harder");
					 this->button13_Click_1(e,e);
				 }
			 }
};
}

