#pragma once

namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormVideo
	/// </summary>
	public ref class FormVideo : public System::Windows::Forms::Form
	{
	public:
		FormVideo(void)
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
		~FormVideo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonChoose;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Panel^  panel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormVideo::typeid));
			this->buttonChoose = (gcnew System::Windows::Forms::Button());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonChoose
			// 
			this->buttonChoose->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonChoose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonChoose->Location = System::Drawing::Point(0, 0);
			this->buttonChoose->Name = L"buttonChoose";
			this->buttonChoose->Size = System::Drawing::Size(119, 26);
			this->buttonChoose->TabIndex = 0;
			this->buttonChoose->Text = L"Choose Video";
			this->buttonChoose->UseVisualStyleBackColor = true;
			this->buttonChoose->Click += gcnew System::EventHandler(this, &FormVideo::buttonChoose_Click);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->buttonChoose);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->textBox1);
			this->splitContainer2->Size = System::Drawing::Size(1090, 26);
			this->splitContainer2->SplitterDistance = 119;
			this->splitContainer2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(967, 26);
			this->textBox1->TabIndex = 0;
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
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->axWindowsMediaPlayer1);
			this->splitContainer1->Size = System::Drawing::Size(1090, 659);
			this->splitContainer1->SplitterDistance = 26;
			this->splitContainer1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->splitContainer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1090, 659);
			this->panel1->TabIndex = 1;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 0);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1090, 629);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// FormVideo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 659);
			this->Controls->Add(this->panel1);
			this->Name = L"FormVideo";
			this->Text = L"FormVideo";
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonChoose_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
				 openFileDialog->ShowDialog();
				 textBox1->Text=openFileDialog->FileName;
				 axWindowsMediaPlayer1->URL=textBox1->Text;
				 axWindowsMediaPlayer1->Ctlcontrols->play();
			 }
};
}
