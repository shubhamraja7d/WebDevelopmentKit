#pragma once
#include "FormSubEditor.h"
namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormEditor
	/// </summary>
	public ref class FormEditor : public System::Windows::Forms::Form
	{
	public:
		FormEditor(void)
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
		~FormEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer7;
	private: System::Windows::Forms::Button^  buttonBack;
	private: System::Windows::Forms::SplitContainer^  splitContainer8;
	private: System::Windows::Forms::Button^  buttonFwd;
	private: System::Windows::Forms::SplitContainer^  splitContainer9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonRefress;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonAddTab;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::SplitContainer^  splitContainer6;
	private: System::Windows::Forms::Button^  buttonOpen;
	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;

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
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer7 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->splitContainer8 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonFwd = (gcnew System::Windows::Forms::Button());
			this->splitContainer9 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonRefress = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddTab = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonOpen = (gcnew System::Windows::Forms::Button());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer7))->BeginInit();
			this->splitContainer7->Panel1->SuspendLayout();
			this->splitContainer7->Panel2->SuspendLayout();
			this->splitContainer7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer8))->BeginInit();
			this->splitContainer8->Panel1->SuspendLayout();
			this->splitContainer8->Panel2->SuspendLayout();
			this->splitContainer8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer9))->BeginInit();
			this->splitContainer9->Panel1->SuspendLayout();
			this->splitContainer9->Panel2->SuspendLayout();
			this->splitContainer9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer7);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->webBrowser1);
			this->splitContainer2->Size = System::Drawing::Size(664, 693);
			this->splitContainer2->SplitterDistance = 33;
			this->splitContainer2->TabIndex = 0;
			// 
			// splitContainer7
			// 
			this->splitContainer7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer7->Location = System::Drawing::Point(0, 0);
			this->splitContainer7->Name = L"splitContainer7";
			// 
			// splitContainer7.Panel1
			// 
			this->splitContainer7->Panel1->Controls->Add(this->buttonBack);
			// 
			// splitContainer7.Panel2
			// 
			this->splitContainer7->Panel2->Controls->Add(this->splitContainer8);
			this->splitContainer7->Size = System::Drawing::Size(664, 33);
			this->splitContainer7->SplitterDistance = 36;
			this->splitContainer7->TabIndex = 0;
			// 
			// buttonBack
			// 
			this->buttonBack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonBack->Location = System::Drawing::Point(0, 0);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(36, 33);
			this->buttonBack->TabIndex = 2;
			this->buttonBack->Text = L"<-";
			this->buttonBack->UseVisualStyleBackColor = true;
			// 
			// splitContainer8
			// 
			this->splitContainer8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer8->Location = System::Drawing::Point(0, 0);
			this->splitContainer8->Name = L"splitContainer8";
			// 
			// splitContainer8.Panel1
			// 
			this->splitContainer8->Panel1->Controls->Add(this->buttonFwd);
			// 
			// splitContainer8.Panel2
			// 
			this->splitContainer8->Panel2->Controls->Add(this->splitContainer9);
			this->splitContainer8->Size = System::Drawing::Size(624, 33);
			this->splitContainer8->SplitterDistance = 33;
			this->splitContainer8->TabIndex = 0;
			// 
			// buttonFwd
			// 
			this->buttonFwd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonFwd->Location = System::Drawing::Point(0, 0);
			this->buttonFwd->Name = L"buttonFwd";
			this->buttonFwd->Size = System::Drawing::Size(33, 33);
			this->buttonFwd->TabIndex = 2;
			this->buttonFwd->Text = L"->";
			this->buttonFwd->UseVisualStyleBackColor = true;
			// 
			// splitContainer9
			// 
			this->splitContainer9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer9->Location = System::Drawing::Point(0, 0);
			this->splitContainer9->Name = L"splitContainer9";
			// 
			// splitContainer9.Panel1
			// 
			this->splitContainer9->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer9.Panel2
			// 
			this->splitContainer9->Panel2->Controls->Add(this->buttonRefress);
			this->splitContainer9->Size = System::Drawing::Size(587, 33);
			this->splitContainer9->SplitterDistance = 173;
			this->splitContainer9->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Browser";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonRefress
			// 
			this->buttonRefress->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonRefress->Location = System::Drawing::Point(0, 0);
			this->buttonRefress->Name = L"buttonRefress";
			this->buttonRefress->Size = System::Drawing::Size(410, 33);
			this->buttonRefress->TabIndex = 0;
			this->buttonRefress->Text = L"Refresh";
			this->buttonRefress->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(664, 656);
			this->webBrowser1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(489, 607);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"<html></html>";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormEditor::textBox1_TextChanged_1);
			// 
			// buttonAddTab
			// 
			this->buttonAddTab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonAddTab->Location = System::Drawing::Point(0, 0);
			this->buttonAddTab->Name = L"buttonAddTab";
			this->buttonAddTab->Size = System::Drawing::Size(132, 41);
			this->buttonAddTab->TabIndex = 2;
			this->buttonAddTab->Text = L"Add Tab";
			this->buttonAddTab->UseVisualStyleBackColor = true;
			this->buttonAddTab->Click += gcnew System::EventHandler(this, &FormEditor::buttonAddTab_Click_1);
			// 
			// buttonSave
			// 
			this->buttonSave->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonSave->Location = System::Drawing::Point(0, 0);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(188, 41);
			this->buttonSave->TabIndex = 0;
			this->buttonSave->Text = L"Save File";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &FormEditor::buttonSave_Click);
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->Location = System::Drawing::Point(0, 0);
			this->splitContainer6->Name = L"splitContainer6";
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->buttonSave);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->buttonAddTab);
			this->splitContainer6->Size = System::Drawing::Size(324, 41);
			this->splitContainer6->SplitterDistance = 188;
			this->splitContainer6->TabIndex = 0;
			// 
			// buttonOpen
			// 
			this->buttonOpen->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonOpen->Location = System::Drawing::Point(0, 0);
			this->buttonOpen->Name = L"buttonOpen";
			this->buttonOpen->Size = System::Drawing::Size(161, 41);
			this->buttonOpen->TabIndex = 3;
			this->buttonOpen->Text = L"Open File";
			this->buttonOpen->UseVisualStyleBackColor = true;
			this->buttonOpen->Click += gcnew System::EventHandler(this, &FormEditor::buttonOpen_Click);
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->buttonOpen);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->splitContainer6);
			this->splitContainer5->Size = System::Drawing::Size(489, 41);
			this->splitContainer5->SplitterDistance = 161;
			this->splitContainer5->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Editor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// splitContainer4
			// 
			this->splitContainer4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->splitContainer5);
			this->splitContainer4->Size = System::Drawing::Size(491, 656);
			this->splitContainer4->SplitterDistance = 609;
			this->splitContainer4->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer3->Size = System::Drawing::Size(491, 693);
			this->splitContainer3->SplitterDistance = 33;
			this->splitContainer3->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer3);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(1167, 697);
			this->splitContainer1->SplitterDistance = 495;
			this->splitContainer1->TabIndex = 6;
			// 
			// FormEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1167, 697);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"FormEditor";
			this->Text = L"FormEditor";
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer7->Panel1->ResumeLayout(false);
			this->splitContainer7->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer7))->EndInit();
			this->splitContainer7->ResumeLayout(false);
			this->splitContainer8->Panel1->ResumeLayout(false);
			this->splitContainer8->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer8))->EndInit();
			this->splitContainer8->ResumeLayout(false);
			this->splitContainer9->Panel1->ResumeLayout(false);
			this->splitContainer9->Panel1->PerformLayout();
			this->splitContainer9->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer9))->EndInit();
			this->splitContainer9->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonAddTab_Click_1(System::Object^  sender, System::EventArgs^  e) {
				  FormSubEditor^ f3 = gcnew FormSubEditor();
				 f3->Show();
			 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			  this->webBrowser1->DocumentText=this->textBox1->Text;
		 }
private: System::Void buttonOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		/*	// Stream^ myStream;
			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

			 if( openFileDialog->ShowFileDialog() == System::Windows::Forms::DialogResult::OK)
			 {
			//	 if( (myStream = openFileDialog->OpenFile()) != nullptr )
			//	 {
					String^ strfilename = openFileDialog->InitialDirectory + openFileDialog->FileName;
					textBox1->Text=strfilename;
			//		myStream->Close();
			//	 }
			 }   */
			  OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
				 openFileDialog->ShowDialog();
				 String^ strfilename = openFileDialog->InitialDirectory + openFileDialog->FileName;
				String^ ReadFile = File::ReadAllText(strfilename);
				 textBox1->Text=ReadFile;


		 }
private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
      saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
      saveFileDialog1->FilterIndex = 2;
      saveFileDialog1->RestoreDirectory = true;
	  saveFileDialog1->ShowDialog();
		 }
};
}
