#pragma once

namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormSubEditor
	/// </summary>
	public ref class FormSubEditor : public System::Windows::Forms::Form
	{
	public:
		FormSubEditor(void)
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
		~FormSubEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  buttonOpen;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Label^  label1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOpen = (gcnew System::Windows::Forms::Button());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(645, 593);
			this->textBox1->TabIndex = 0;
			// 
			// buttonOpen
			// 
			this->buttonOpen->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonOpen->Location = System::Drawing::Point(0, 0);
			this->buttonOpen->Name = L"buttonOpen";
			this->buttonOpen->Size = System::Drawing::Size(305, 46);
			this->buttonOpen->TabIndex = 4;
			this->buttonOpen->Text = L"Open File";
			this->buttonOpen->UseVisualStyleBackColor = true;
			this->buttonOpen->Click += gcnew System::EventHandler(this, &FormSubEditor::buttonOpen_Click);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->buttonOpen);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer3->Size = System::Drawing::Size(645, 46);
			this->splitContainer3->SplitterDistance = 305;
			this->splitContainer3->TabIndex = 0;
			// 
			// buttonSave
			// 
			this->buttonSave->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonSave->Location = System::Drawing::Point(0, 0);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(336, 46);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Save File";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &FormSubEditor::buttonSave_Click);
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
			this->splitContainer2->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(645, 643);
			this->splitContainer2->SplitterDistance = 593;
			this->splitContainer2->TabIndex = 1;
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
			this->label1->TabIndex = 3;
			this->label1->Text = L"Editor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(645, 693);
			this->splitContainer1->SplitterDistance = 46;
			this->splitContainer1->TabIndex = 1;
			// 
			// FormSubEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 693);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"FormSubEditor";
			this->Text = L"FormSubEditor";
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
				 openFileDialog->ShowDialog();
				 String^ strfilename = openFileDialog->InitialDirectory + openFileDialog->FileName;
				String^ ReadFile = File::ReadAllText(strfilename);
				 textBox1->Text=ReadFile;
			 }
private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
			 Stream^ myStream;
      SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
      saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
      saveFileDialog1->FilterIndex = 2;
      saveFileDialog1->RestoreDirectory = true;
	  saveFileDialog1->ShowDialog();
//	  String^ filename = saveFileDialog1->ShowDialog()->InitialDirectory + openFileDialog->FileName;
	 // StreamWriter^ outfile = gcnew StreamWriter(filename);
	 // outfile->Write(textBox1->Text);
	 // outfile->Close();
     
      //  if ( (myStream = saveFileDialog1->OpenFile()) != nullptr )
//       {

	//	StreamWriter^ outfile = gcnew StreamWriter(myStream);
	//  outfile->Write(textBox1->Text);
	//  outfile->Close();
            // Code to write the stream goes here.
     //       myStream->Close();
     //    }
     
		 }
};
}
