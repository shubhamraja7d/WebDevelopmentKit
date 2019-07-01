#pragma once
#include "Form1.h"
#include "FormUser.h"
#include<iostream>
#include<fstream>
#include <msclr/marshal_cppstd.h>

namespace WebDevelopmentKit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// Summary for FormLogin
	/// </summary>
	public ref class FormLogin : public System::Windows::Forms::Form
	{
	public:
		FormLogin(void)
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
		~FormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSignUp;
	protected: 
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::TextBox^  textPassword;
	private: System::Windows::Forms::RichTextBox^  textUser;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLogin::typeid));
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->textUser = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btnSignUp
			// 
			this->btnSignUp->Location = System::Drawing::Point(831, 158);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(112, 45);
			this->btnSignUp->TabIndex = 12;
			this->btnSignUp->Text = L"Sign Up";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &FormLogin::btnSignUp_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(620, 158);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(110, 45);
			this->btnLogin->TabIndex = 11;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &FormLogin::btnLogin_Click);
			// 
			// textPassword
			// 
			this->textPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textPassword->Location = System::Drawing::Point(620, 104);
			this->textPassword->Multiline = true;
			this->textPassword->Name = L"textPassword";
			this->textPassword->PasswordChar = '*';
			this->textPassword->Size = System::Drawing::Size(323, 45);
			this->textPassword->TabIndex = 10;
			// 
			// textUser
			// 
			this->textUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textUser->Location = System::Drawing::Point(620, 45);
			this->textUser->Name = L"textUser";
			this->textUser->Size = System::Drawing::Size(323, 45);
			this->textUser->TabIndex = 9;
			this->textUser->Text = L"";
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(955, 608);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textUser);
			this->Name = L"FormLogin";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 String^ struser=this->textUser->Text;
			 String^ strpwd = this->textPassword->Text;

			 string user=msclr::interop::marshal_as< string >( struser );
			 string pwd=msclr::interop::marshal_as< string >( strpwd );

		/*	 UserDet temp;

			 ifstream infile;
			 infile.open("userManagement.txt",ios::in);
			 while(infile.read((char *)&temp,sizeof(temp))){	string dd = temp.getUserId();}
			 infile.close();

			 if(temp.u_id == user && temp.password == pwd)
			 {
				 this->textUser->Text="Great Job 7D";
			 }
			 else
				 this->textUser->Text="Word Hard 7D";
				 */
			 this->Hide();
			 Form1^ f1 = gcnew Form1(struser);
			 f1->Show();

		 }
private: System::Void btnSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
			  FormUser^ fu = gcnew FormUser();
			 fu->Show();
		 }
};
}
