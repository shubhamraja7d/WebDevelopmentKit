#pragma once

#include<iostream>
#include<fstream>
#include <msclr/marshal_cppstd.h>
#include "ClassUser.h"

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
	/// Summary for FormUser
	/// </summary>
	public ref class FormUser : public System::Windows::Forms::Form
	{
	public:
		FormUser(void)
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
		~FormUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	protected: 
	private: System::Windows::Forms::TextBox^  textName;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textRole;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textPassword;
	private: System::Windows::Forms::TextBox^  textUser;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormUser::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textRole = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->textUser = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Role";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(160, 35);
			this->textName->Multiline = true;
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(233, 33);
			this->textName->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(274, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Manage User";
			// 
			// textRole
			// 
			this->textRole->Location = System::Drawing::Point(160, 215);
			this->textRole->Multiline = true;
			this->textRole->Name = L"textRole";
			this->textRole->Size = System::Drawing::Size(233, 35);
			this->textRole->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User ID";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textRole);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textName);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->buttonAdd);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textPassword);
			this->panel1->Controls->Add(this->textUser);
			this->panel1->Location = System::Drawing::Point(91, 135);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(552, 363);
			this->panel1->TabIndex = 8;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Centaur", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(33, 292);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(86, 43);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->Text = L"Add User";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FormUser::buttonAdd_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(160, 156);
			this->textPassword->Multiline = true;
			this->textPassword->Name = L"textPassword";
			this->textPassword->PasswordChar = '*';
			this->textPassword->Size = System::Drawing::Size(233, 33);
			this->textPassword->TabIndex = 4;
			// 
			// textUser
			// 
			this->textUser->Location = System::Drawing::Point(160, 97);
			this->textUser->Multiline = true;
			this->textUser->Name = L"textUser";
			this->textUser->Size = System::Drawing::Size(233, 32);
			this->textUser->TabIndex = 3;
			// 
			// FormUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(755, 701);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"FormUser";
			this->Text = L"Sign Up";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ strname=this->textName->Text;
			 String^ struser=this->textUser->Text;
			 String^ strpwd = this->textPassword->Text;
			 String^ strrole=this->textRole->Text;

			 string user=msclr::interop::marshal_as< string >( struser);
			 string pwd=msclr::interop::marshal_as< string >( strpwd);
			 string name=msclr::interop::marshal_as< string >( strname);
			 string role=msclr::interop::marshal_as< string >( strrole);


			 //onject creation
			 UserDet u(name,user,pwd,role);
			 // open a file in write mode.
			ofstream outfile;
			outfile.open("userManagement.txt",ios::out | ios::app);

		/*	// write user data into the file.
			outfile << user << endl;

			// again write inputted data
			outfile << pwd << endl;
			outfile << name << endl;
			outfile << role << endl;
		*/

			outfile.write((char *)&u,sizeof(u));

			// close the opened file.
			outfile.close();      

			this->textUser->Text="";
			this->textPassword->Text="";
			this->textName->Text="";
			this->textRole->Text="";
		 }
			
};
}
