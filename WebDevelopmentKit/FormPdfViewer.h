#pragma once

namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPdfViewer
	/// </summary>
	public ref class FormPdfViewer : public System::Windows::Forms::Form
	{
	public:
		FormPdfViewer(void)
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
		~FormPdfViewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	protected: 
	private: System::Windows::Forms::Button^  buttonPdf;
	private: AxAcroPDFLib::AxAcroPDF^  axAcroPDF1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPdfViewer::typeid));
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonPdf = (gcnew System::Windows::Forms::Button());
			this->axAcroPDF1 = (gcnew AxAcroPDFLib::AxAcroPDF());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->BeginInit();
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
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->buttonPdf);
			this->splitContainer2->Size = System::Drawing::Size(922, 38);
			this->splitContainer2->SplitterDistance = 262;
			this->splitContainer2->TabIndex = 0;
			// 
			// buttonPdf
			// 
			this->buttonPdf->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPdf->Location = System::Drawing::Point(0, 0);
			this->buttonPdf->Name = L"buttonPdf";
			this->buttonPdf->Size = System::Drawing::Size(262, 38);
			this->buttonPdf->TabIndex = 0;
			this->buttonPdf->Text = L"open file";
			this->buttonPdf->UseVisualStyleBackColor = true;
			this->buttonPdf->Click += gcnew System::EventHandler(this, &FormPdfViewer::buttonPdf_Click);
			// 
			// axAcroPDF1
			// 
			this->axAcroPDF1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axAcroPDF1->Enabled = true;
			this->axAcroPDF1->Location = System::Drawing::Point(0, 0);
			this->axAcroPDF1->Name = L"axAcroPDF1";
			this->axAcroPDF1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axAcroPDF1.OcxState")));
			this->axAcroPDF1->Size = System::Drawing::Size(922, 615);
			this->axAcroPDF1->TabIndex = 0;
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
			this->splitContainer1->Panel2->Controls->Add(this->axAcroPDF1);
			this->splitContainer1->Size = System::Drawing::Size(922, 657);
			this->splitContainer1->SplitterDistance = 38;
			this->splitContainer1->TabIndex = 1;
			// 
			// FormPdfViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 657);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"FormPdfViewer";
			this->Text = L"FormPdfViewer";
			this->splitContainer2->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonPdf_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
				 openFileDialog->ShowDialog();
				 axAcroPDF1->src=openFileDialog->FileName;
			 }
};
}
