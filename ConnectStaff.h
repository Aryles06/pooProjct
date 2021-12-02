#pragma once
#include "stat.h"
#include "order.h"
#include "staff.h"
#include "client.h"
#include "stock.h"
namespace poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ConnectStaff
	/// </summary>
	public ref class ConnectStaff : public System::Windows::Forms::Form
	{
	public:
		ConnectStaff(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ConnectStaff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(417, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"What do you whant to do \?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 224);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Manage orders";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConnectStaff::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(212, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 224);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Manage staff";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConnectStaff::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(420, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 224);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Manage clients";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ConnectStaff::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(627, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 224);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Manage stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ConnectStaff::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(809, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(164, 224);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Manage statistics";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ConnectStaff::button5_Click);
			// 
			// ConnectStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 538);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ConnectStaff";
			this->Text = L"ConnectStaff";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		poo::order or;
		or.ShowDialog();
		this->Show();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	poo::staff staf;
	staf.ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	poo::client cli;
	cli.ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	poo::stock sto;
	sto.ShowDialog();
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	poo::stat sta;
	sta.ShowDialog();
	this->Show();
}
};
}
