#pragma once

#include "stdAfx.h"
#include "FormEditor.h"
#include "NewPageForm.h"
#include "FormPageSource.h"
#include "FormPdfViewer.h"
#include "FormUser.h"
#include "FormVideo.h"
#include "FormBrowse.h"
#include<iostream>
#include<fstream>
#include <msclr/marshal_cppstd.h>

namespace WebDevelopmentKit {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

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
		Form1(String^ name)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->labelName->Text="WelCome "+name+" !";
			timer1->Start();
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click_2);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(47, 133);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(672, 452);
			this->panel2->TabIndex = 13;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Gainsboro;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->linkLabel4);
			this->panel5->Location = System::Drawing::Point(373, 253);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(225, 171);
			this->panel5->TabIndex = 9;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-2, -2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(225, 133);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click_1);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel4->Location = System::Drawing::Point(55, 134);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(117, 24);
			this->linkLabel4->TabIndex = 4;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Video Player";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel4_LinkClicked_1);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gainsboro;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->linkLabel3);
			this->panel4->Location = System::Drawing::Point(62, 253);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(225, 171);
			this->panel4->TabIndex = 8;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-2, -2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(225, 133);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click_1);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel3->Location = System::Drawing::Point(58, 134);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(111, 24);
			this->linkLabel3->TabIndex = 3;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"PDF Viewer";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel3_LinkClicked_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gainsboro;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->linkLabel2);
			this->panel3->Location = System::Drawing::Point(373, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(225, 171);
			this->panel3->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-2, -2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(225, 133);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click_1);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(16, 134);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(186, 24);
			this->linkLabel2->TabIndex = 2;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Source Code Viewer";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Location = System::Drawing::Point(61, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(225, 171);
			this->panel1->TabIndex = 6;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(3, 134);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(221, 24);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Real Time Code Browser";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Pristina", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(223, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 52);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Choose your option";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(104, 97);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click_1);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Location = System::Drawing::Point(45, 73);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(108, 101);
			this->panel6->TabIndex = 10;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->panel10);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->panel6);
			this->panel7->Location = System::Drawing::Point(752, 135);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(366, 452);
			this->panel7->TabIndex = 14;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Gainsboro;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->pictureBox10);
			this->panel12->Location = System::Drawing::Point(210, 333);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(108, 101);
			this->panel12->TabIndex = 14;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(0, 0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(104, 97);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click_1);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Gainsboro;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->pictureBox9);
			this->panel11->Location = System::Drawing::Point(45, 331);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(108, 101);
			this->panel11->TabIndex = 13;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(104, 97);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click_1);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Gainsboro;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->pictureBox8);
			this->panel10->Location = System::Drawing::Point(208, 204);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(108, 101);
			this->panel10->TabIndex = 12;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(104, 97);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click_1);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Gainsboro;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->pictureBox7);
			this->panel9->Location = System::Drawing::Point(45, 202);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(108, 101);
			this->panel9->TabIndex = 11;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(104, 97);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click_1);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Gainsboro;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->pictureBox6);
			this->panel8->Location = System::Drawing::Point(212, 75);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(108, 101);
			this->panel8->TabIndex = 11;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(104, 97);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Pristina", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 44);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Need Online Help\?";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(164, 6);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(164, 6);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->toolsToolStripMenuItem, this->helpToolStripMenuItem, this->aboutToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1170, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->toolStripSeparator, this->toolStripSeparator1, this->toolStripSeparator2, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->newToolStripMenuItem->Text = L"&New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click_1);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->openToolStripMenuItem->Text = L"&Open";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(164, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->toolsToolStripMenuItem->Text = L"&Work Group";
			this->toolsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::toolsToolStripMenuItem_Click_1);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"&Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->aboutToolStripMenuItem->Text = L"&About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->BackColor = System::Drawing::Color::Transparent;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(111, 62);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(155, 33);
			this->labelName->TabIndex = 15;
			this->labelName->Text = L"WelCome!!!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(775, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 36);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Time";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1170, 650);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"Web Development Kit";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		 //----------------------
private: System::Void pictureBox1_Click_2(System::Object^  sender, System::EventArgs^  e) {
			  FormEditor^ f2 = gcnew FormEditor();
			 f2->Show();
		 }
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			  FormEditor^ f2 = gcnew FormEditor();
			 f2->Show();
		 }
private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormPageSource^ f3 = gcnew FormPageSource();
			 f3->Show();
		 }
private: System::Void linkLabel2_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 FormPageSource^ f3 = gcnew FormPageSource();
			 f3->Show();
		 }
private: System::Void pictureBox4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormVideo^ fv = gcnew FormVideo();
			 fv->Show();
		 }
private: System::Void linkLabel3_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 FormPdfViewer^ fp = gcnew FormPdfViewer();
			 fp->Show();
		 }
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormPdfViewer^ fp = gcnew FormPdfViewer();
			 fp->Show();
		 }
private: System::Void linkLabel4_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 FormVideo^ fv = gcnew FormVideo();
			 fv->Show();
		 }
private: System::Void pictureBox5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormBrowse^ fb = gcnew FormBrowse("https://WWW.Google.com");
			 fb->Show();
		 }
private: System::Void pictureBox6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormBrowse^ fb = gcnew FormBrowse("https://WWW.youtube.com");
			 fb->Show();
		 }
private: System::Void pictureBox8_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  FormBrowse^ fb = gcnew FormBrowse("https://www.w3schools.com/");
			 fb->Show();
		 }
private: System::Void pictureBox7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  FormBrowse^ fb = gcnew FormBrowse("https://www.tutorialspoint.com/web_development_tutorials.htm");
			 fb->Show();
		 }
private: System::Void pictureBox9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormBrowse^ fb = gcnew FormBrowse("https://developer.mozilla.org/en-US/docs/Web/Tutorials");
			 fb->Show();
		 }
private: System::Void pictureBox10_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormBrowse^ fb = gcnew FormBrowse("https://in.udacity.com/course/intro-to-programming-nanodegree--nd000");
			 fb->Show();
		 }
private: System::Void newToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormEditor^ f2 = gcnew FormEditor();
			 f2->ShowDialog();
		 }
private: System::Void toolsToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 FormUser^ fu = gcnew FormUser();
			 fu->Show();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;
			this->label2->Text=dateTime.ToString();
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//			 Application::exit;
		 }
private: System::Void switchUserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			//this->Hide();
			// FormLogin^ f7 = gcnew FormLogin();
			// f7->Show();
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("This is a web development kit application");
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Created by\nShubham Raja Shrivastava!!!\n;)");
		 }
};
}

