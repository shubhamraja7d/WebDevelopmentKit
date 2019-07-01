#pragma once

namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormBrowse
	/// </summary>
	public ref class FormBrowse : public System::Windows::Forms::Form
	{
	public:
		FormBrowse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormBrowse(String^ url)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->webBrowser1->Navigate(url );
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormBrowse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(1005, 664);
			this->webBrowser1->TabIndex = 1;
			// 
			// FormBrowse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 664);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"FormBrowse";
			this->Text = L"Browser";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
