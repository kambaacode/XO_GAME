#pragma once



namespace Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		String^ Symbol = "X";
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Panel^ pyramid;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Label^ label4;


		   int counter = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool IsWinner();
		bool IsWinner_Connect_Four();
		bool IsWinner_Pyramid();
		int IsWinner_five();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ nav_bar;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ minimize;
	private: System::Windows::Forms::Button^ maxmin;
	private: System::Windows::Forms::Panel^ menu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ XoButt;
	private: System::Windows::Forms::Button^ FourButt;
	private: System::Windows::Forms::Panel^ panelXO;
	private: System::Windows::Forms::Panel^ connect4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->nav_bar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->minimize = (gcnew System::Windows::Forms::Button());
			this->maxmin = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->FourButt = (gcnew System::Windows::Forms::Button());
			this->XoButt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->pyramid = (gcnew System::Windows::Forms::Panel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->connect4 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panelXO = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nav_bar->SuspendLayout();
			this->menu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pyramid->SuspendLayout();
			this->connect4->SuspendLayout();
			this->panelXO->SuspendLayout();
			this->SuspendLayout();
			// 
			// nav_bar
			// 
			this->nav_bar->Controls->Add(this->label1);
			this->nav_bar->Controls->Add(this->minimize);
			this->nav_bar->Controls->Add(this->maxmin);
			this->nav_bar->Controls->Add(this->Exit);
			this->nav_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->nav_bar->Location = System::Drawing::Point(0, 0);
			this->nav_bar->Name = L"nav_bar";
			this->nav_bar->Size = System::Drawing::Size(856, 55);
			this->nav_bar->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(360, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"XO";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// minimize
			// 
			this->minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize.BackgroundImage")));
			this->minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->minimize->FlatAppearance->BorderSize = 0;
			this->minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimize->Location = System::Drawing::Point(685, 3);
			this->minimize->Name = L"minimize";
			this->minimize->Size = System::Drawing::Size(61, 30);
			this->minimize->TabIndex = 10;
			this->minimize->UseVisualStyleBackColor = true;
			this->minimize->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// maxmin
			// 
			this->maxmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->maxmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maxmin.BackgroundImage")));
			this->maxmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->maxmin->FlatAppearance->BorderSize = 0;
			this->maxmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maxmin->Location = System::Drawing::Point(734, 3);
			this->maxmin->Name = L"maxmin";
			this->maxmin->Size = System::Drawing::Size(65, 30);
			this->maxmin->TabIndex = 9;
			this->maxmin->UseVisualStyleBackColor = true;
			this->maxmin->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.BackgroundImage")));
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Location = System::Drawing::Point(788, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(56, 30);
			this->Exit->TabIndex = 8;
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->menu->Controls->Add(this->button62);
			this->menu->Controls->Add(this->button36);
			this->menu->Controls->Add(this->button35);
			this->menu->Controls->Add(this->FourButt);
			this->menu->Controls->Add(this->XoButt);
			this->menu->Location = System::Drawing::Point(0, 55);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(156, 544);
			this->menu->TabIndex = 8;
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::Gray;
			this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button62->Location = System::Drawing::Point(9, 14);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(143, 44);
			this->button62->TabIndex = 21;
			this->button62->Text = L"Restart";
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// button36
			// 
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(3, 206);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(150, 87);
			this->button36->TabIndex = 20;
			this->button36->Text = L"five";
			this->button36->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button35
			// 
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(3, 330);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(150, 87);
			this->button35->TabIndex = 19;
			this->button35->Text = L"Pyramid";
			this->button35->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// FourButt
			// 
			this->FourButt->BackColor = System::Drawing::Color::Black;
			this->FourButt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FourButt.BackgroundImage")));
			this->FourButt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->FourButt->FlatAppearance->BorderSize = 0;
			this->FourButt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FourButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FourButt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FourButt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->FourButt->Location = System::Drawing::Point(0, 446);
			this->FourButt->Name = L"FourButt";
			this->FourButt->Size = System::Drawing::Size(153, 91);
			this->FourButt->TabIndex = 11;
			this->FourButt->Text = L"Four";
			this->FourButt->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->FourButt->UseVisualStyleBackColor = false;
			this->FourButt->Click += gcnew System::EventHandler(this, &MyForm::FourButt_Click);
			// 
			// XoButt
			// 
			this->XoButt->BackColor = System::Drawing::Color::Black;
			this->XoButt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"XoButt.BackgroundImage")));
			this->XoButt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->XoButt->FlatAppearance->BorderSize = 0;
			this->XoButt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->XoButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XoButt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->XoButt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->XoButt->Location = System::Drawing::Point(3, 80);
			this->XoButt->Name = L"XoButt";
			this->XoButt->Size = System::Drawing::Size(153, 91);
			this->XoButt->TabIndex = 5;
			this->XoButt->Text = L"3x3";
			this->XoButt->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->XoButt->UseVisualStyleBackColor = false;
			this->XoButt->Click += gcnew System::EventHandler(this, &MyForm::XoButt_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pyramid);
			this->panel1->Controls->Add(this->connect4);
			this->panel1->Controls->Add(this->panelXO);
			this->panel1->Location = System::Drawing::Point(162, 61);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(694, 538);
			this->panel1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button61);
			this->panel2->Controls->Add(this->button60);
			this->panel2->Controls->Add(this->button59);
			this->panel2->Controls->Add(this->button58);
			this->panel2->Controls->Add(this->button57);
			this->panel2->Controls->Add(this->button56);
			this->panel2->Controls->Add(this->button55);
			this->panel2->Controls->Add(this->button54);
			this->panel2->Controls->Add(this->button53);
			this->panel2->Controls->Add(this->button52);
			this->panel2->Controls->Add(this->button51);
			this->panel2->Controls->Add(this->button50);
			this->panel2->Controls->Add(this->button49);
			this->panel2->Controls->Add(this->button48);
			this->panel2->Controls->Add(this->button47);
			this->panel2->Controls->Add(this->button46);
			this->panel2->Controls->Add(this->button45);
			this->panel2->Controls->Add(this->button44);
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Controls->Add(this->button41);
			this->panel2->Controls->Add(this->button40);
			this->panel2->Controls->Add(this->button39);
			this->panel2->Controls->Add(this->button38);
			this->panel2->Controls->Add(this->button37);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(694, 538);
			this->panel2->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(288, 512);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 25;
			this->label4->Text = L"label4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(590, 440);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(79, 69);
			this->button61->TabIndex = 24;
			this->button61->Text = L"button61";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(452, 440);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(79, 69);
			this->button60->TabIndex = 23;
			this->button60->Text = L"button60";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(300, 440);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(79, 69);
			this->button59->TabIndex = 22;
			this->button59->Text = L"button59";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(166, 440);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(79, 69);
			this->button58->TabIndex = 21;
			this->button58->Text = L"button58";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(25, 439);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(79, 69);
			this->button57->TabIndex = 20;
			this->button57->Text = L"button57";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(590, 342);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(79, 69);
			this->button56->TabIndex = 19;
			this->button56->Text = L"button56";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(452, 342);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(79, 69);
			this->button55->TabIndex = 18;
			this->button55->Text = L"button55";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(300, 342);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(79, 69);
			this->button54->TabIndex = 17;
			this->button54->Text = L"button54";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(166, 342);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(79, 69);
			this->button53->TabIndex = 16;
			this->button53->Text = L"button53";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(25, 342);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(79, 69);
			this->button52->TabIndex = 15;
			this->button52->Text = L"button52";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(590, 228);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(79, 69);
			this->button51->TabIndex = 14;
			this->button51->Text = L"button51";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(452, 228);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(79, 69);
			this->button50->TabIndex = 13;
			this->button50->Text = L"button50";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(300, 228);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(79, 69);
			this->button49->TabIndex = 12;
			this->button49->Text = L"button49";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(166, 228);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(79, 69);
			this->button48->TabIndex = 11;
			this->button48->Text = L"button48";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(25, 228);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(79, 69);
			this->button47->TabIndex = 10;
			this->button47->Text = L"button47";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(590, 119);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(79, 69);
			this->button46->TabIndex = 9;
			this->button46->Text = L"button46";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(452, 119);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(79, 69);
			this->button45->TabIndex = 8;
			this->button45->Text = L"button45";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(300, 119);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(79, 69);
			this->button44->TabIndex = 7;
			this->button44->Text = L"button44";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(166, 119);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(79, 69);
			this->button43->TabIndex = 6;
			this->button43->Text = L"button43";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(25, 116);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(79, 69);
			this->button42->TabIndex = 5;
			this->button42->Text = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(590, 6);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(79, 69);
			this->button41->TabIndex = 4;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(452, 6);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(79, 69);
			this->button40->TabIndex = 3;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(300, 6);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(79, 69);
			this->button39->TabIndex = 2;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(166, 6);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(79, 69);
			this->button38->TabIndex = 1;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(25, 6);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(79, 69);
			this->button37->TabIndex = 0;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick3);
			// 
			// pyramid
			// 
			this->pyramid->Controls->Add(this->button26);
			this->pyramid->Controls->Add(this->button27);
			this->pyramid->Controls->Add(this->button28);
			this->pyramid->Controls->Add(this->button29);
			this->pyramid->Controls->Add(this->button30);
			this->pyramid->Controls->Add(this->button31);
			this->pyramid->Controls->Add(this->button32);
			this->pyramid->Controls->Add(this->button33);
			this->pyramid->Controls->Add(this->button34);
			this->pyramid->Controls->Add(this->label3);
			this->pyramid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pyramid->Location = System::Drawing::Point(0, 0);
			this->pyramid->Name = L"pyramid";
			this->pyramid->Size = System::Drawing::Size(694, 538);
			this->pyramid->TabIndex = 6;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(287, 24);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(101, 98);
			this->button26->TabIndex = 18;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(72, 213);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(101, 98);
			this->button27->TabIndex = 17;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(287, 213);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(101, 98);
			this->button28->TabIndex = 16;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(512, 213);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(101, 98);
			this->button29->TabIndex = 15;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(3, 396);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(101, 98);
			this->button30->TabIndex = 14;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(144, 396);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(101, 98);
			this->button31->TabIndex = 13;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(287, 396);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(101, 98);
			this->button32->TabIndex = 12;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(452, 396);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(101, 98);
			this->button33->TabIndex = 11;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(590, 396);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(101, 98);
			this->button34->TabIndex = 10;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick2);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(246, 506);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// connect4
			// 
			this->connect4->Controls->Add(this->button25);
			this->connect4->Controls->Add(this->button24);
			this->connect4->Controls->Add(this->button23);
			this->connect4->Controls->Add(this->button22);
			this->connect4->Controls->Add(this->button21);
			this->connect4->Controls->Add(this->button20);
			this->connect4->Controls->Add(this->button19);
			this->connect4->Controls->Add(this->button18);
			this->connect4->Controls->Add(this->button17);
			this->connect4->Controls->Add(this->button16);
			this->connect4->Controls->Add(this->button15);
			this->connect4->Controls->Add(this->button14);
			this->connect4->Controls->Add(this->button13);
			this->connect4->Controls->Add(this->button12);
			this->connect4->Controls->Add(this->button11);
			this->connect4->Controls->Add(this->button10);
			this->connect4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->connect4->Location = System::Drawing::Point(0, 0);
			this->connect4->Name = L"connect4";
			this->connect4->Size = System::Drawing::Size(694, 538);
			this->connect4->TabIndex = 3;
			this->connect4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::connect4_Paint);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(581, 419);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(101, 107);
			this->button25->TabIndex = 15;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(405, 419);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(101, 107);
			this->button24->TabIndex = 14;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(225, 419);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(101, 107);
			this->button23->TabIndex = 13;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(25, 419);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(101, 107);
			this->button22->TabIndex = 12;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(581, 283);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(101, 107);
			this->button21->TabIndex = 11;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(405, 283);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 107);
			this->button20->TabIndex = 10;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(225, 283);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(101, 107);
			this->button19->TabIndex = 9;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(25, 283);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 107);
			this->button18->TabIndex = 8;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(581, 140);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 107);
			this->button17->TabIndex = 7;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(405, 140);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 107);
			this->button16->TabIndex = 6;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(225, 140);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(101, 107);
			this->button15->TabIndex = 5;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(25, 140);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 107);
			this->button14->TabIndex = 4;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(581, 6);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 107);
			this->button13->TabIndex = 3;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(405, 6);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(101, 107);
			this->button12->TabIndex = 2;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(225, 6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(101, 107);
			this->button11->TabIndex = 1;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(25, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(101, 107);
			this->button10->TabIndex = 0;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick1);
			// 
			// panelXO
			// 
			this->panelXO->Controls->Add(this->button9);
			this->panelXO->Controls->Add(this->button8);
			this->panelXO->Controls->Add(this->button7);
			this->panelXO->Controls->Add(this->button6);
			this->panelXO->Controls->Add(this->button5);
			this->panelXO->Controls->Add(this->button4);
			this->panelXO->Controls->Add(this->button3);
			this->panelXO->Controls->Add(this->button2);
			this->panelXO->Controls->Add(this->button1);
			this->panelXO->Controls->Add(this->label2);
			this->panelXO->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelXO->Location = System::Drawing::Point(0, 0);
			this->panelXO->Name = L"panelXO";
			this->panelXO->Size = System::Drawing::Size(694, 538);
			this->panelXO->TabIndex = 5;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(523, 396);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 98);
			this->button9->TabIndex = 18;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(263, 396);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 98);
			this->button8->TabIndex = 17;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(25, 396);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 98);
			this->button7->TabIndex = 16;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(523, 213);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 98);
			this->button6->TabIndex = 15;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(263, 213);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 98);
			this->button5->TabIndex = 14;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 98);
			this->button4->TabIndex = 13;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(523, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 98);
			this->button3->TabIndex = 12;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 98);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 98);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(246, 506);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(856, 599);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->nav_bar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->nav_bar->ResumeLayout(false);
			this->menu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->pyramid->ResumeLayout(false);
			this->connect4->ResumeLayout(false);
			this->panelXO->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void XoButt_Click(System::Object^ sender, System::EventArgs^ e) {
	panelXO->BringToFront();
}
private: System::Void FourButt_Click(System::Object^ sender, System::EventArgs^ e) {
	connect4->BringToFront();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	pyramid->BringToFront();
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->BringToFront();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState(MinimizeBox);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
	}
	else
		this->WindowState = FormWindowState::Maximized;
}
private: System::Void ButtonClick(System::Object^ sender, System::EventArgs^ e) {	
	Button^ ClickedButt = dynamic_cast <Button^> (sender);

	if (ClickedButt != nullptr && (ClickedButt->Text != "X" && ClickedButt->Text != "O") && !IsWinner())
	{
		ClickedButt->Text = Symbol;
		 counter++;
		if (IsWinner())
		{
			label2->Text = Symbol + " Wins!";
			return;
		}
		else Symbol = (Symbol == "X") ? "O" : "X";
	}
	if (!IsWinner() && counter == 9)
	{
		label2->Text = "Draw!";
	}
}
private: System::Void connect4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void ButtonClick1(System::Object^ sender, System::EventArgs^ e) {
	Button^ ClickedButt = dynamic_cast <Button^> (sender);

	if (ClickedButt != nullptr && (ClickedButt->Text != "X" && ClickedButt->Text != "O"))
	{
		ClickedButt->Text = Symbol;
		counter++;
		if (IsWinner_Connect_Four())
		{
			label2->Text = Symbol + " Wins!";
			return;
		}
		else Symbol = (Symbol == "X") ? "O" : "X";
	}
}
private: System::Void ButtonClick2(System::Object^ sender, System::EventArgs^ e) {
	Button^ ClickedButt = dynamic_cast <Button^> (sender);

	if (ClickedButt != nullptr && (ClickedButt->Text != "X" && ClickedButt->Text != "O") && !IsWinner_Pyramid())
	{
		ClickedButt->Text = Symbol;
		counter++;
		if (IsWinner_Pyramid())
		{
			label3->Text = Symbol + " Wins!";
			return;
		}
		else Symbol = (Symbol == "X") ? "O" : "X";
	}
	if (!IsWinner_Pyramid() && counter == 9)
	{
		label3->Text = "Draw!";
		return;
	}
}
private: System::Void ButtonClick3(System::Object^ sender, System::EventArgs^ e) {
	Button^ ClickedButt = dynamic_cast <Button^> (sender);

	if (ClickedButt != nullptr && (ClickedButt->Text != "X" && ClickedButt->Text != "O") && counter <= 24)
	{
		ClickedButt->Text = Symbol;
		counter++;
		Symbol = (Symbol == "X") ? "O" : "X";
	}
	if (counter == 24)
	{
		if (IsWinner_five() == 1)
			label4->Text = "X Wins!";
		else if (IsWinner_five() == 0)
			label4->Text = "O Wins!";
		else
			label4->Text = "Draw!";
	}
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
	// Restart
}
};
}

bool Gui::MyForm::IsWinner()
{
	//rows
	if (button1->Text == button2->Text && button1->Text == button3->Text)
		return true;
	if (button4->Text == button5->Text && button4->Text == button6->Text)
		return true;
	if (button7->Text == button8->Text && button7->Text == button9->Text)
		return true;
	//diagonals
	if (button1->Text == button5->Text && button1->Text == button9->Text)
		return true;
	if (button3->Text == button5->Text && button3->Text == button7->Text)
		return true;
	//columns
	if (button1->Text == button4->Text && button1->Text == button7->Text)
		return true;
	if (button2->Text == button5->Text && button2->Text == button8->Text)
		return true;
	if (button3->Text == button6->Text && button3->Text == button9->Text)
		return true;
	return false;
}
bool Gui::MyForm::IsWinner_Connect_Four()
{
	return false;
}

bool Gui::MyForm:: IsWinner_Pyramid()
{
	if (button26->Text == button27->Text && button26->Text == button30->Text)
		return true;
	if (button26->Text == button29->Text && button26->Text == button34->Text)
		return true;
	if (button27->Text == button28->Text && button27->Text == button29->Text)
		return true;
	if (button32->Text == button31->Text && button32->Text == button31->Text)
		return true;
	if (button32->Text == button3->Text && button32->Text == button34->Text)
		return true;
	if (button26->Text == button28->Text && button26->Text == button32->Text)
		return true;
	if (button31->Text == button32->Text && button31->Text == button33->Text)
		return true;
	return false;
}

int Gui::MyForm::IsWinner_five()
{
	int Xcounter = 0;
	int ocounter = 0;
	
	//Check Rows 
	if (button39->Text == "X" || button44->Text == "X" || button49->Text == "X" || button54->Text == "X" || button59->Text == "X")
	{
		if (button39->Text == button38->Text && button39->Text == button37->Text)
			Xcounter++;
		if (button39->Text == button40->Text && button39->Text == button41->Text)
			Xcounter++;
		if (button44->Text == button43->Text && button44->Text == button42->Text)
			Xcounter++;
		if (button44->Text == button45->Text && button44->Text == button46->Text)
			Xcounter++;
		if (button49->Text == button48->Text && button49->Text == button47->Text)
			Xcounter++;
		if (button49->Text == button50->Text && button49->Text == button51->Text)
			Xcounter++;
		if (button54->Text == button53->Text && button54->Text == button52->Text)
			Xcounter++;
		if (button54->Text == button55->Text && button54->Text == button56->Text)
			Xcounter++;
		if (button59->Text == button58->Text && button59->Text == button57->Text)
			Xcounter++;
		if (button59->Text == button60->Text && button59->Text == button61->Text)
			Xcounter++;
		if (button38->Text == button39->Text && button38->Text == button40->Text)
			Xcounter++;
		if (button43->Text == button44->Text && button43->Text == button45->Text)
			Xcounter++;
		if (button48->Text == button49->Text && button48->Text == button50->Text)
			Xcounter++;
		if (button53->Text == button54->Text && button53->Text == button55->Text)
			Xcounter++;
		if (button58->Text == button59->Text && button58->Text == button60->Text)
			Xcounter++;
	}
	if (button39->Text == "O" || button44->Text == "O" || button49->Text == "O" || button54->Text == "O" || button59->Text == "O")
	{
		if (button39->Text == button38->Text && button39->Text == button37->Text)
			ocounter++;
		if (button39->Text == button40->Text && button39->Text == button41->Text)
			ocounter++;
		if (button44->Text == button43->Text && button44->Text == button42->Text)
			ocounter++;
		if (button44->Text == button45->Text && button44->Text == button46->Text)
			ocounter++;
		if (button49->Text == button48->Text && button49->Text == button47->Text)
			ocounter++;
		if (button49->Text == button50->Text && button49->Text == button51->Text)
			ocounter++;
		if (button54->Text == button53->Text && button54->Text == button52->Text)
			ocounter++;
		if (button54->Text == button55->Text && button54->Text == button56->Text)
			ocounter++;
		if (button59->Text == button58->Text && button59->Text == button57->Text)
			ocounter++;
		if (button59->Text == button60->Text && button59->Text == button61->Text)
			ocounter++;
		if (button38->Text == button39->Text && button38->Text == button40->Text)
			ocounter++;
		if (button43->Text == button44->Text && button43->Text == button45->Text)
			ocounter++;
		if (button48->Text == button49->Text && button48->Text == button50->Text)
			ocounter++;
		if (button53->Text == button54->Text && button53->Text == button55->Text)
			ocounter++;
		if (button58->Text == button59->Text && button58->Text == button60->Text)
			ocounter++;
	}
	// Check columns
	if (button47 -> Text == "X" || button48 -> Text == "X" || button49 -> Text == "X" || button50-> Text == "X" || button51-> Text == "X")
	{
		if (button47->Text == button42->Text && button47->Text == button37->Text)
			Xcounter++;
		if (button47->Text == button52->Text && button47->Text == button57->Text)
			Xcounter++;
		if (button48->Text == button43->Text && button48->Text == button38->Text)
			Xcounter++;
		if (button48->Text == button53->Text && button48->Text == button58->Text)
			Xcounter++;
		if (button49->Text == button44->Text && button49->Text == button39->Text)
			Xcounter++;
		if (button49->Text == button54->Text && button49->Text == button59->Text)
			Xcounter++;
		if (button50->Text == button55->Text && button50->Text == button60->Text)
			Xcounter++;
		if (button50->Text == button45->Text && button50->Text == button40->Text)
			Xcounter++;
		if (button51->Text == button46->Text && button51->Text == button41->Text)
			Xcounter++;
		if (button51->Text == button56->Text && button51->Text == button61->Text)
			Xcounter++;
		if (button42->Text == button47->Text && button42->Text == button52->Text)
			Xcounter++;
		if (button43->Text == button48->Text && button43->Text == button53->Text)
			Xcounter++;
		if (button44->Text == button49->Text && button44->Text == button54->Text)
			Xcounter++;
		if (button45->Text == button50->Text && button45->Text == button55->Text)
			Xcounter++;
		if (button46->Text == button51->Text && button46->Text == button56->Text)
			Xcounter++;
	}
	if (button47->Text == "O" || button48->Text == "O" || button49->Text == "O" || button50->Text == "O" || button51->Text == "O")
	{
		if (button47->Text == button42->Text && button47->Text == button37->Text)
			ocounter++;
		if (button47->Text == button52->Text && button47->Text == button57->Text)
			ocounter++;
		if (button48->Text == button43->Text && button48->Text == button38->Text)
			ocounter++;
		if (button48->Text == button53->Text && button48->Text == button58->Text)
			ocounter++;
		if (button49->Text == button44->Text && button49->Text == button39->Text)
			ocounter++;
		if (button49->Text == button54->Text && button49->Text == button59->Text)
			ocounter++;
		if (button50->Text == button55->Text && button50->Text == button60->Text)
			ocounter++;
		if (button50->Text == button45->Text && button50->Text == button40->Text)
			ocounter++;
		if (button51->Text == button46->Text && button51->Text == button41->Text)
			ocounter++;
		if (button51->Text == button56->Text && button51->Text == button61->Text)
			ocounter++;
		if (button42->Text == button47->Text && button42->Text == button52->Text)
			ocounter++;
		if (button43->Text == button48->Text && button43->Text == button53->Text)
			ocounter++;
		if (button44->Text == button49->Text && button44->Text == button54->Text)
			ocounter++;
		if (button45->Text == button50->Text && button45->Text == button55->Text)
			ocounter++;
		if (button46->Text == button51->Text && button46->Text == button56->Text)
			ocounter++;
	}

	//check diagonals
	if (button37->Text == "X" || button43->Text == "X" || button49->Text == "X" || button55->Text == "X" || button61->Text == "X")
	{
		if (button49->Text == button43->Text && button49->Text == button37->Text)
			Xcounter++;
		if (button49->Text == button45->Text && button40->Text == button41->Text)
			Xcounter++;
		if (button49->Text == button55->Text && button49->Text == button61->Text)
			Xcounter++;
		if (button49->Text == button53->Text && button49->Text == button57->Text)
			Xcounter++;

		if (button43->Text == button49->Text && button43->Text == button55->Text)
			Xcounter++;
		if (button45->Text == button49->Text && button45->Text == button45->Text)
			Xcounter++;
		
		if (button47->Text == button53->Text && button47->Text == button59->Text)
		Xcounter++;
		if (button39->Text == button45->Text && button39->Text == button51->Text)
			Xcounter++;

		if (button44->Text == button38->Text && button44->Text == button50->Text)
			Xcounter++;
		if (button50->Text == button44->Text && button50->Text == button56->Text)
			Xcounter++;
		if (button48->Text == button42->Text && button48->Text == button54->Text)
			Xcounter++;
		if (button54->Text == button48->Text && button54->Text == button60->Text)
			Xcounter++;
	}
	if (button37->Text == "O" || button43->Text == "O" || button49->Text == "O" || button55->Text == "O" || button61->Text == "O")
	{
		if (button49->Text == button43->Text && button49->Text == button37->Text)
			ocounter++;
		if (button49->Text == button45->Text && button40->Text == button41->Text)
			ocounter++;
		if (button49->Text == button55->Text && button49->Text == button61->Text)
			ocounter++;
		if (button49->Text == button53->Text && button49->Text == button57->Text)
			ocounter++;

		if (button43->Text == button49->Text && button43->Text == button55->Text)
			ocounter++;
		if (button45->Text == button49->Text && button45->Text == button45->Text)
			ocounter++;

		if (button47->Text == button53->Text && button47->Text == button59->Text)
			ocounter++;
		if (button39->Text == button45->Text && button39->Text == button51->Text)
			ocounter++;

		if (button44->Text == button38->Text && button44->Text == button50->Text)
			ocounter++;
		if (button50->Text == button44->Text && button50->Text == button56->Text)
			ocounter++;
		if (button48->Text == button42->Text && button48->Text == button54->Text)
			ocounter++;
		if (button54->Text == button48->Text && button54->Text == button60->Text)
			ocounter++;
	}
	if (Xcounter > ocounter)
		return 1;
	else if (ocounter > Xcounter)
		return 0;
	else return -1;
}