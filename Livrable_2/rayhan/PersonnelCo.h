#pragma once
#include "pch.h"
#include "SC.h"
namespace NS_Personnel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_SuperC;
	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Personnel : System::Windows::Forms::Form , SuperC
	{
	public:
		Personnel(Form^ Prece)//:SuperC(Prece)
		{
			InitializeComponent();	
		}

		Personnel()//:SuperC()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: System::Windows::Forms::TextBox^ Nom;

	private: System::Windows::Forms::TextBox^ Prenom;



	private: System::Windows::Forms::Label^ LabNom;
	private: System::Windows::Forms::Label^ LabPrenom;
	private: System::Windows::Forms::Label^ LabDate;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ Connexion;
	private: System::Windows::Forms::DateTimePicker^ PickDate;
	private: System::Windows::Forms::Button^ But_Precedent;
	private: System::ComponentModel::IContainer^ components;
		   /// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Choix Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Nom = (gcnew System::Windows::Forms::TextBox());
			this->Prenom = (gcnew System::Windows::Forms::TextBox());
			this->LabNom = (gcnew System::Windows::Forms::Label());
			this->LabPrenom = (gcnew System::Windows::Forms::Label());
			this->LabDate = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Connexion = (gcnew System::Windows::Forms::Button());
			this->PickDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->But_Precedent = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// Nom
			// 
			this->Nom->Location = System::Drawing::Point(39, 135);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(120, 22);
			this->Nom->TabIndex = 0;
			// 
			// Prenom
			// 
			this->Prenom->Location = System::Drawing::Point(247, 134);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(100, 22);
			this->Prenom->TabIndex = 1;
			// 
			// LabNom
			// 
			this->LabNom->AutoSize = true;
			this->LabNom->Location = System::Drawing::Point(75, 95);
			this->LabNom->Name = L"LabNom";
			this->LabNom->Size = System::Drawing::Size(37, 17);
			this->LabNom->TabIndex = 3;
			this->LabNom->Text = L"Nom";
			// 
			// LabPrenom
			// 
			this->LabPrenom->AutoSize = true;
			this->LabPrenom->Location = System::Drawing::Point(269, 95);
			this->LabPrenom->Name = L"LabPrenom";
			this->LabPrenom->Size = System::Drawing::Size(57, 17);
			this->LabPrenom->TabIndex = 4;
			this->LabPrenom->Text = L"Prenom";
			// 
			// LabDate
			// 
			this->LabDate->AutoSize = true;
			this->LabDate->Location = System::Drawing::Point(455, 95);
			this->LabDate->Name = L"LabDate";
			this->LabDate->Size = System::Drawing::Size(38, 17);
			this->LabDate->TabIndex = 5;
			this->LabDate->Text = L"Date";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Connexion
			// 
			this->errorProvider1->SetIconAlignment(this->Connexion, System::Windows::Forms::ErrorIconAlignment::MiddleLeft);
			this->Connexion->Location = System::Drawing::Point(245, 278);
			this->Connexion->Name = L"Connexion";
			this->Connexion->Size = System::Drawing::Size(100, 54);
			this->Connexion->TabIndex = 6;
			this->Connexion->Text = L"Valider";
			this->Connexion->UseVisualStyleBackColor = true;
			// 
			// PickDate
			// 
			this->PickDate->CustomFormat = L"yyyy-MM-dd";
			this->PickDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->PickDate->Location = System::Drawing::Point(430, 132);
			this->PickDate->Name = L"PickDate";
			this->PickDate->Size = System::Drawing::Size(120, 22);
			this->PickDate->TabIndex = 7;
			// 
			// But_Precedent
			// 
			this->But_Precedent->Location = System::Drawing::Point(10, 10);
			this->But_Precedent->Name = L"But_Precedent";
			this->But_Precedent->Size = System::Drawing::Size(25, 25);
			this->But_Precedent->TabIndex = 8;
			this->But_Precedent->Text = L"<";
			this->But_Precedent->UseVisualStyleBackColor = true;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 403);
			this->Controls->Add(this->But_Precedent);
			this->Controls->Add(this->PickDate);
			this->Controls->Add(this->Connexion);
			this->Controls->Add(this->LabDate);
			this->Controls->Add(this->LabPrenom);
			this->Controls->Add(this->LabNom);
			this->Controls->Add(this->Prenom);
			this->Controls->Add(this->Nom);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Personnel::Personnel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Personnel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	//Precedent->Close();

}
};
}
