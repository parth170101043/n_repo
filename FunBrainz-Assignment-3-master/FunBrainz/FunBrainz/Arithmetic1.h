#pragma once
#include"Image_Quiz_Display.h"
#include<cmath>
#include<ctime>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for Arithmetic1
	/// </summary>
	public ref class Arithmetic1 : public System::Windows::Forms::UserControl
	{
		
	 public:
		String^ user;
	 public:
		Arithmetic1(void)
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
		~Arithmetic1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	protected: 
		/*private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;*/
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"Default";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(25, 18);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"Default";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series1->Legend = L"Legend1";
			series1->Name = L"perfomance";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(720, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Arithmetic1::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Arithmetic1::button1_Click);
			// 
			// Arithmetic1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Arithmetic1";
			this->Size = System::Drawing::Size(804, 439);
			this->Load += gcnew System::EventHandler(this, &Arithmetic1::Arithmetic1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Arithmetic1_Load(System::Object^  sender, System::EventArgs^  e)
			 
			 {

			 }




			 int h(String ^ d)
			 {
				 String ^ dd = "";
				 String ^ mm= "";
				 String ^ yyyy="";


				    time_t now = time(0);
					tm *ltm = localtime(&now);
					int year =  1900 + ltm->tm_year;
					int month =  1 + ltm->tm_mon;
					int date = ltm->tm_mday ;

				    int prevmonth=month-1;
					int prevyear=year;
					if(prevmonth==0) prevyear--;
					if(prevmonth==0) prevmonth=12;
					int prevdate =date;

				 int j=0;
		
				 while(d[j]!='/') {dd+=d[j];j++;}
				 j++;
				 while(d[j]!='/') {mm+=d[j];j++;}
				 j++;
				
				 while(j<d->Length ) {yyyy+=d[j];j++;}
				 
				 
					 MessageBox::Show(d);
				 int  num1 = Convert::ToInt32(dd);
				 int num2 = Convert::ToInt32(mm);
				 int num3 = Convert::ToInt32(yyyy);
                 if(num3==year&&num2==month&&num1<date) return num1;
				 if(num3==prevyear&&num2==prevmonth&&date<=num1) return num1;
				 return 32;
			 }



			 private: System::Void msgx(String ^ x)
					  {
						 MessageBox::Show(x);
					  } 
            int noofdays(int m,int year)
			{
				if(m==1) return 31;
				if(m==2) 
				{
					if (year % 4)  return 28;
					else if (year % 100)  return 29;
					else if (year % 400) return 28;
					else return 29;
				}
				if(m==3) return 31;
				if(m==4) return 30;
				
				if(m==5) return 31;
				if(m==6) return 30;
				
				if(m==7) return 31;
				
				if(m==8) return 31;
				if(m==9) return 30;
				
				if(m==10) return 31;
				if(m==11) return 30;
				
				if(m==12) return 31;
				return 32;
			}


			 private: System::Void Showgraph(int day[])
			  {
				   this->chart1->ChartAreas["Default"]->AxisX->Interval = 1;
				   this->chart1->ChartAreas["Default"]->AxisY->Interval = 1;
				   this->chart1->ChartAreas["Default"]->AxisY->Minimum = 0;
				   
				   this->chart1->ChartAreas["Default"]->AxisX->MajorGrid->LineColor = Color();
				  // this->chart1->ChartAreas["Default"]->AxisY->MajorGrid->LineColor = Color();
				   this->chart1->Series["perfomance"]->Points->Clear();

				     time_t now = time(0);
					 tm *ltm = localtime(&now);
					int year =  1900 + ltm->tm_year;
					int month =  1 + ltm->tm_mon;
					int date = ltm->tm_mday ;

				    int prevmonth=month-1;
					int prevyear=year;
					if(prevmonth==0) prevyear--;
					if(prevmonth==0) prevmonth=12;
					int prevdate =date;
					for(int i=date;i<=noofdays(prevmonth,year);i++)
					{
						String ^  dd = Convert::ToString(i);
						String ^ mm =Convert::ToString(prevmonth);
						String ^ yyyy=Convert::ToString(prevyear);
						 this->chart1->Series["perfomance"]->Points->AddXY(dd+"-"+mm,day[i]);
					}
					for(int i=1;i<date;i++)
					{
						String ^  dd = Convert::ToString(i);
						String ^ mm =Convert::ToString(month);
						String ^ yyyy=Convert::ToString(year);
						this->chart1->Series["perfomance"]->Points->AddXY(dd+"-"+mm,day[i]);
					}
					
			  }



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 OleDb::OleDbDataReader ^ reader;
					 int day[33];
				 try{
				     int id;
					// searching for ID from username
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
                     String ^Sql = "Select [ID] from database_ikya WHERE  UserName = '" + user + "' ";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 id = (int)command->ExecuteScalar();
					 con->Close();
					 msgx(Convert::ToString(id));
					 

                     for(int i=0;i<=32;i++) {day[i]=0;}



					// serching for dates
					 con->Open();
					 Sql = "Select [dateplayed] from graph WHERE  [StID] =  " + id +" ";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 reader = command->ExecuteReader();
					 while (reader->Read() == true)
					  {
						   String ^ datep= reader->GetString(0);
						   day[h(datep)]++;
					  }
					  reader->Close();
					  con->Close();
				  }
				 catch (Exception ^ ex)
			 {
					 reader->Close();
				 con->Close();
				 MessageBox::Show(ex->Message);
			 }
			 Showgraph(day);
			 }


	//private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e)
	//		 {
	//			 
	//		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

};

}
