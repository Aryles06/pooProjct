#pragma once
#include "Catalogue.h"
#include "Panier.h"

namespace poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ConnectClient
	/// </summary>
	public ref class ConnectClient : public System::Windows::Forms::Form
	{
	public:
		ConnectClient(void)
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
		~ConnectClient()
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(243, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Que souhaitez vous faire \?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Catalogue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConnectClient::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(426, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Panier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConnectClient::button2_Click);
			// 
			// ConnectClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 481);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ConnectClient";
			this->Text = L"ConnectClient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		poo::Catalogue cata;
		cata.ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		poo::Panier Pan;
		Pan.ShowDialog();
		this->Show();
	}
	};
}

