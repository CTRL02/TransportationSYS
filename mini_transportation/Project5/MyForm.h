#pragma once
#include <string>
#include "Graph.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <msclr/marshal_cppstd.h>


// imported from gitlab / more123 
namespace Project5 {
    using System::Drawing::Rectangle;

    using namespace System::Drawing::Drawing2D;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        Graph* graphPtr;

    public:
        MyForm(void)
        {
            InitializeComponent();
            graphPtr = new Graph();
            
            pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
        }
    protected:

        ~MyForm()
        {
            if (components)
            {
                delete components;
            }


        }
        

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Panel^ add;

    private: System::Windows::Forms::Panel^ update;

    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label4;




    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::TextBox^ textBox1;

    private: System::Windows::Forms::Label^ label3;

    private: System::Windows::Forms::TextBox^ textBox3;

    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Panel^ visualGraph;


    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button10;

    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label10;

    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;


    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Panel^ Short;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Panel^ VisShort;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;


    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Panel^ DeleteCity;
    private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Panel^ deleteEdge;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Panel^ Bfs;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Panel^ Dfs;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ button27;


















    private: System::ComponentModel::IContainer^ components;




    protected:

    private:


#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->add = (gcnew System::Windows::Forms::Panel());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->deleteEdge = (gcnew System::Windows::Forms::Panel());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->Short = (gcnew System::Windows::Forms::Panel());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->Dfs = (gcnew System::Windows::Forms::Panel());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->Bfs = (gcnew System::Windows::Forms::Panel());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->visualGraph = (gcnew System::Windows::Forms::Panel());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->update = (gcnew System::Windows::Forms::Panel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->DeleteCity = (gcnew System::Windows::Forms::Panel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->VisShort = (gcnew System::Windows::Forms::Panel());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->add->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->deleteEdge->SuspendLayout();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->Short->SuspendLayout();
            this->Dfs->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->Bfs->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->visualGraph->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->update->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->DeleteCity->SuspendLayout();
            this->panel5->SuspendLayout();
            this->VisShort->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(190, 360);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(326, 29);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Hi user, Welcome to وصلني";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::White;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Black;
            this->button1->Location = System::Drawing::Point(233, 424);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(299, 43);
            this->button1->TabIndex = 2;
            this->button1->Text = L"show options";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button1_Paint);
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(198, 331);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(326, 29);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Hi user, Welcome to وصلني";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel1
            // 
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->add);
            this->panel1->Controls->Add(this->pictureBox3);
            this->panel1->Controls->Add(this->deleteEdge);
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->Short);
            this->panel1->Controls->Add(this->Dfs);
            this->panel1->Controls->Add(this->Bfs);
            this->panel1->Controls->Add(this->visualGraph);
            this->panel1->Controls->Add(this->update);
            this->panel1->Controls->Add(this->DeleteCity);
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->VisShort);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1262, 673);
            this->panel1->TabIndex = 5;
            // 
            // add
            // 
            this->add->BackColor = System::Drawing::Color::White;
            this->add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add.BackgroundImage")));
            this->add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->add->Controls->Add(this->pictureBox5);
            this->add->Controls->Add(this->pictureBox4);
            this->add->Controls->Add(this->label7);
            this->add->Controls->Add(this->label10);
            this->add->Controls->Add(this->button10);
            this->add->Controls->Add(this->textBox3);
            this->add->Controls->Add(this->textBox2);
            this->add->Controls->Add(this->label3);
            this->add->Controls->Add(this->button8);
            this->add->Controls->Add(this->textBox1);
            this->add->Location = System::Drawing::Point(294, 62);
            this->add->Name = L"add";
            this->add->Size = System::Drawing::Size(731, 549);
            this->add->TabIndex = 8;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(3, 488);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(726, 58);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 25;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(531, 28);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(170, 128);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 24;
            this->pictureBox4->TabStop = false;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label7->Location = System::Drawing::Point(168, 326);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(127, 38);
            this->label7->TabIndex = 21;
            this->label7->Text = L"Distance";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label10->Location = System::Drawing::Point(134, 257);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(161, 38);
            this->label10->TabIndex = 20;
            this->label10->Text = L"Distination";
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::Transparent;
            this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
            this->button10->Location = System::Drawing::Point(3, 3);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(78, 70);
            this->button10->TabIndex = 19;
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_3);
            // 
            // textBox3
            // 
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox3->Location = System::Drawing::Point(314, 338);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(189, 22);
            this->textBox3->TabIndex = 5;
            // 
            // textBox2
            // 
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox2->Location = System::Drawing::Point(314, 269);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(189, 22);
            this->textBox2->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label3->Location = System::Drawing::Point(195, 183);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(104, 38);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Source";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::Transparent;
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
            this->button8->Location = System::Drawing::Point(313, 428);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(159, 54);
            this->button8->TabIndex = 1;
            this->button8->Text = L"Submit";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // textBox1
            // 
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox1->Location = System::Drawing::Point(313, 196);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(189, 22);
            this->textBox1->TabIndex = 0;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button3);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(294, 62);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(731, 549);
            this->panel2->TabIndex = 5;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(94, -63);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(501, 383);
            this->pictureBox2->TabIndex = 8;
            this->pictureBox2->TabStop = false;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::White;
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::Black;
            this->button4->Location = System::Drawing::Point(224, 473);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(299, 43);
            this->button4->TabIndex = 7;
            this->button4->Text = L"Update graph data ";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            this->button4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button4_Paint);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::White;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::Black;
            this->button3->Location = System::Drawing::Point(224, 424);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(299, 43);
            this->button3->TabIndex = 6;
            this->button3->Text = L"Display graph data";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            this->button3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button3_Paint);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::White;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Black;
            this->button2->Location = System::Drawing::Point(224, 375);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(299, 43);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Add graph";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            this->button2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button2_Paint);
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(0, 0);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(1262, 673);
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // deleteEdge
            // 
            this->deleteEdge->Controls->Add(this->label17);
            this->deleteEdge->Controls->Add(this->label16);
            this->deleteEdge->Controls->Add(this->textBox9);
            this->deleteEdge->Controls->Add(this->button25);
            this->deleteEdge->Controls->Add(this->textBox8);
            this->deleteEdge->Controls->Add(this->label15);
            this->deleteEdge->Controls->Add(this->button24);
            this->deleteEdge->Dock = System::Windows::Forms::DockStyle::Fill;
            this->deleteEdge->Location = System::Drawing::Point(0, 0);
            this->deleteEdge->Name = L"deleteEdge";
            this->deleteEdge->Size = System::Drawing::Size(1262, 673);
            this->deleteEdge->TabIndex = 29;
            this->deleteEdge->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::deleteEdge_Paint);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(379, 345);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(111, 46);
            this->label17->TabIndex = 33;
            this->label17->Text = L"City2";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(379, 246);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(111, 46);
            this->label16->TabIndex = 32;
            this->label16->Text = L"City1";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(546, 351);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(275, 22);
            this->textBox9->TabIndex = 31;
            // 
            // button25
            // 
            this->button25->Location = System::Drawing::Point(599, 425);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(167, 45);
            this->button25->TabIndex = 30;
            this->button25->Text = L"Delete";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(546, 265);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(275, 22);
            this->textBox8->TabIndex = 29;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(557, 163);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(239, 46);
            this->label15->TabIndex = 28;
            this->label15->Text = L"Delete Edge";
            // 
            // button24
            // 
            this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
            this->button24->Location = System::Drawing::Point(3, 3);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(78, 70);
            this->button24->TabIndex = 23;
            this->button24->UseVisualStyleBackColor = true;
            this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->button7);
            this->panel4->Controls->Add(this->button6);
            this->panel4->Controls->Add(this->button11);
            this->panel4->Controls->Add(this->button5);
            this->panel4->Controls->Add(this->button9);
            this->panel4->Controls->Add(this->label6);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->pictureBox6);
            this->panel4->Controls->Add(this->label4);
            this->panel4->Location = System::Drawing::Point(294, 62);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(731, 549);
            this->panel4->TabIndex = 10;
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(504, 473);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(211, 55);
            this->button7->TabIndex = 21;
            this->button7->Text = L"DFS";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::White;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button6->Location = System::Drawing::Point(18, 473);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(211, 55);
            this->button6->TabIndex = 20;
            this->button6->Text = L"BFS";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::White;
            this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::Black;
            this->button11->Location = System::Drawing::Point(386, 60);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(299, 43);
            this->button11->TabIndex = 19;
            this->button11->Text = L"Shortest Path";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
            this->button11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button11_Paint);
            // 
            // button5
            // 
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->Location = System::Drawing::Point(-11, -9);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(78, 70);
            this->button5->TabIndex = 18;
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_2);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::White;
            this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::Black;
            this->button9->Location = System::Drawing::Point(70, 60);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(299, 43);
            this->button9->TabIndex = 17;
            this->button9->Text = L"Display graph data";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            this->button9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button9_Paint);
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(118, 28);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(477, 29);
            this->label6->TabIndex = 16;
            this->label6->Text = L"Click Downbelow To Display graph Data";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(229, 331);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(244, 29);
            this->label5->TabIndex = 15;
            this->label5->Text = L"Traverse The Graph";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(195, 109);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(250, 188);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox6->TabIndex = 14;
            this->pictureBox6->TabStop = false;
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(218, 377);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(285, 29);
            this->label4->TabIndex = 11;
            this->label4->Text = L"Choose Your Algorithm";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // Short
            // 
            this->Short->Controls->Add(this->button15);
            this->Short->Controls->Add(this->label11);
            this->Short->Controls->Add(this->label8);
            this->Short->Controls->Add(this->button14);
            this->Short->Controls->Add(this->textBox5);
            this->Short->Controls->Add(this->textBox4);
            this->Short->Location = System::Drawing::Point(294, 62);
            this->Short->Name = L"Short";
            this->Short->Size = System::Drawing::Size(731, 549);
            this->Short->TabIndex = 20;
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::Color::Transparent;
            this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
            this->button15->Location = System::Drawing::Point(0, 3);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(78, 70);
            this->button15->TabIndex = 20;
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(179, 260);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(74, 16);
            this->label11->TabIndex = 4;
            this->label11->Text = L"Destination";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(179, 189);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(50, 16);
            this->label8->TabIndex = 3;
            this->label8->Text = L"Source";
            // 
            // button14
            // 
            this->button14->Location = System::Drawing::Point(335, 309);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(75, 23);
            this->button14->TabIndex = 2;
            this->button14->Text = L"Compute";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(273, 257);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(199, 22);
            this->textBox5->TabIndex = 1;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(273, 186);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(199, 22);
            this->textBox4->TabIndex = 0;
            // 
            // Dfs
            // 
            this->Dfs->BackColor = System::Drawing::Color::SeaShell;
            this->Dfs->Controls->Add(this->button27);
            this->Dfs->Controls->Add(this->label19);
            this->Dfs->Controls->Add(this->pictureBox9);
            this->Dfs->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Dfs->Location = System::Drawing::Point(0, 0);
            this->Dfs->Name = L"Dfs";
            this->Dfs->Size = System::Drawing::Size(1262, 673);
            this->Dfs->TabIndex = 31;
            this->Dfs->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Dfs_Paint);
            // 
            // button27
            // 
            this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
            this->button27->Location = System::Drawing::Point(3, 0);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(78, 70);
            this->button27->TabIndex = 23;
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::White;
            this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label19->Location = System::Drawing::Point(346, 479);
            this->label19->MinimumSize = System::Drawing::Size(600, 50);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(600, 50);
            this->label19->TabIndex = 3;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(363, 32);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(570, 419);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 2;
            this->pictureBox9->TabStop = false;
            // 
            // Bfs
            // 
            this->Bfs->BackColor = System::Drawing::Color::FloralWhite;
            this->Bfs->Controls->Add(this->button26);
            this->Bfs->Controls->Add(this->pictureBox7);
            this->Bfs->Controls->Add(this->label18);
            this->Bfs->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Bfs->Location = System::Drawing::Point(0, 0);
            this->Bfs->Name = L"Bfs";
            this->Bfs->Size = System::Drawing::Size(1262, 673);
            this->Bfs->TabIndex = 30;
            this->Bfs->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Bfs_Paint);
            // 
            // button26
            // 
            this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
            this->button26->Location = System::Drawing::Point(3, 3);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(78, 70);
            this->button26->TabIndex = 22;
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(363, 32);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(570, 419);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 1;
            this->pictureBox7->TabStop = false;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::White;
            this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label18->Location = System::Drawing::Point(346, 479);
            this->label18->MinimumSize = System::Drawing::Size(600, 50);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(600, 50);
            this->label18->TabIndex = 0;
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
            // 
            // visualGraph
            // 
            this->visualGraph->BackColor = System::Drawing::Color::Transparent;
            this->visualGraph->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->visualGraph->Controls->Add(this->button12);
            this->visualGraph->Controls->Add(this->label9);
            this->visualGraph->Location = System::Drawing::Point(0, 0);
            this->visualGraph->Name = L"visualGraph";
            this->visualGraph->Size = System::Drawing::Size(1262, 673);
            this->visualGraph->TabIndex = 11;
            this->visualGraph->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::visualGraph_Paint);
            // 
            // button12
            // 
            this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
            this->button12->Location = System::Drawing::Point(0, -1);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(78, 70);
            this->button12->TabIndex = 21;
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::White;
            this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label9->Location = System::Drawing::Point(832, 19);
            this->label9->MinimumSize = System::Drawing::Size(400, 200);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(400, 200);
            this->label9->TabIndex = 0;
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->pictureBox1);
            this->panel3->Controls->Add(this->button1);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Location = System::Drawing::Point(294, 62);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(731, 549);
            this->panel3->TabIndex = 6;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(94, -63);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(501, 383);
            this->pictureBox1->TabIndex = 9;
            this->pictureBox1->TabStop = false;
            // 
            // update
            // 
            this->update->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update.BackgroundImage")));
            this->update->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->update->Controls->Add(this->button13);
            this->update->Controls->Add(this->button19);
            this->update->Controls->Add(this->button17);
            this->update->Controls->Add(this->button18);
            this->update->Controls->Add(this->pictureBox8);
            this->update->Dock = System::Windows::Forms::DockStyle::Fill;
            this->update->Location = System::Drawing::Point(0, 0);
            this->update->Name = L"update";
            this->update->Size = System::Drawing::Size(1262, 673);
            this->update->TabIndex = 7;
            // 
            // button13
            // 
            this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
            this->button13->Location = System::Drawing::Point(0, 0);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(78, 70);
            this->button13->TabIndex = 22;
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
            // 
            // button19
            // 
            this->button19->Location = System::Drawing::Point(527, 198);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(213, 54);
            this->button19->TabIndex = 26;
            this->button19->Text = L"Add City ";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
            // 
            // button17
            // 
            this->button17->Location = System::Drawing::Point(527, 400);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(213, 54);
            this->button17->TabIndex = 25;
            this->button17->Text = L"Delete Edge";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // button18
            // 
            this->button18->Location = System::Drawing::Point(527, 299);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(213, 54);
            this->button18->TabIndex = 24;
            this->button18->Text = L"Delete City";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(0, 0);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(1262, 673);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 28;
            this->pictureBox8->TabStop = false;
            // 
            // DeleteCity
            // 
            this->DeleteCity->Controls->Add(this->label14);
            this->DeleteCity->Controls->Add(this->textBox7);
            this->DeleteCity->Controls->Add(this->button23);
            this->DeleteCity->Controls->Add(this->button22);
            this->DeleteCity->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DeleteCity->Location = System::Drawing::Point(0, 0);
            this->DeleteCity->Name = L"DeleteCity";
            this->DeleteCity->Size = System::Drawing::Size(1262, 673);
            this->DeleteCity->TabIndex = 29;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(509, 168);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(215, 46);
            this->label14->TabIndex = 27;
            this->label14->Text = L"Delete City";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(475, 269);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(275, 22);
            this->textBox7->TabIndex = 26;
            // 
            // button23
            // 
            this->button23->Location = System::Drawing::Point(537, 331);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(167, 45);
            this->button23->TabIndex = 25;
            this->button23->Text = L"Delete";
            this->button23->UseVisualStyleBackColor = true;
            this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
            // 
            // button22
            // 
            this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
            this->button22->Location = System::Drawing::Point(0, 0);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(78, 70);
            this->button22->TabIndex = 24;
            this->button22->UseVisualStyleBackColor = true;
            this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
            // 
            // panel5
            // 
            this->panel5->Controls->Add(this->button21);
            this->panel5->Controls->Add(this->button20);
            this->panel5->Controls->Add(this->label13);
            this->panel5->Controls->Add(this->textBox6);
            this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel5->Location = System::Drawing::Point(0, 0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1262, 673);
            this->panel5->TabIndex = 29;
            // 
            // button21
            // 
            this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
            this->button21->Location = System::Drawing::Point(0, 0);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(78, 70);
            this->button21->TabIndex = 23;
            this->button21->UseVisualStyleBackColor = true;
            this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
            // 
            // button20
            // 
            this->button20->Location = System::Drawing::Point(537, 360);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(167, 45);
            this->button20->TabIndex = 2;
            this->button20->Text = L"Add";
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(519, 209);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(195, 46);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Enter City";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(475, 297);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(275, 22);
            this->textBox6->TabIndex = 0;
            this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
            // 
            // VisShort
            // 
            this->VisShort->BackColor = System::Drawing::Color::Transparent;
            this->VisShort->Controls->Add(this->button16);
            this->VisShort->Controls->Add(this->label12);
            this->VisShort->Dock = System::Windows::Forms::DockStyle::Fill;
            this->VisShort->ForeColor = System::Drawing::Color::White;
            this->VisShort->Location = System::Drawing::Point(0, 0);
            this->VisShort->Name = L"VisShort";
            this->VisShort->Size = System::Drawing::Size(1262, 673);
            this->VisShort->TabIndex = 20;
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::Transparent;
            this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
            this->button16->Location = System::Drawing::Point(0, -1);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(78, 70);
            this->button16->TabIndex = 20;
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::White;
            this->label12->ForeColor = System::Drawing::Color::Black;
            this->label12->Location = System::Drawing::Point(959, 9);
            this->label12->MinimumSize = System::Drawing::Size(299, 200);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(299, 200);
            this->label12->TabIndex = 0;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1262, 673);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"وصلني شكرا";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->add->ResumeLayout(false);
            this->add->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->deleteEdge->ResumeLayout(false);
            this->deleteEdge->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->Short->ResumeLayout(false);
            this->Short->PerformLayout();
            this->Dfs->ResumeLayout(false);
            this->Dfs->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->Bfs->ResumeLayout(false);
            this->Bfs->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->visualGraph->ResumeLayout(false);
            this->visualGraph->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->update->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->DeleteCity->ResumeLayout(false);
            this->DeleteCity->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->VisShort->ResumeLayout(false);
            this->VisShort->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        GraphicsPath^ gp = gcnew GraphicsPath();
        int radius = 30;  // adjust the radius to control the amount of rounding

        // Add a rounded rectangle to the GraphicsPath object
        gp->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        gp->AddLine(radius, 0, pictureBox1->Width - radius, 0);
        gp->AddArc(pictureBox1->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        gp->AddLine(pictureBox1->Width, radius, pictureBox1->Width, pictureBox1->Height - radius);
        gp->AddArc(pictureBox1->Width - radius * 2, pictureBox1->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        gp->AddLine(pictureBox1->Width - radius, pictureBox1->Height, radius, pictureBox1->Height);
        gp->AddArc(0, pictureBox1->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        gp->AddLine(0, pictureBox1->Height - radius, 0, radius);
        gp->CloseFigure();

        // Set the GraphicsPath object as the Region of the PictureBox control
        pictureBox1->Region = gcnew System::Drawing::Region(gp);


    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Rectangle rect = button1->ClientRectangle;
        rect.Inflate(-2, -2);
        Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
        int d = 10;
        path->AddArc(rect.X, rect.Y, d, d, 180, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
        path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
        path->CloseFigure();
        button1->Region = gcnew System::Drawing::Region(path);

        Pen^ pen = gcnew Pen(Color::LightBlue, 3);
        e->Graphics->DrawPath(pen, path);
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME |SND_ASYNC);
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        GraphicsPath^ gp = gcnew GraphicsPath();
        int radius = 25;  // adjust the radius to control the amount of rounding

        // Add a rounded rectangle to the GraphicsPath object
        gp->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        gp->AddLine(radius, 0, pictureBox1->Width - radius, 0);
        gp->AddArc(pictureBox1->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        gp->AddLine(pictureBox1->Width, radius, pictureBox1->Width, pictureBox1->Height - radius);
        gp->AddArc(pictureBox1->Width - radius * 2, pictureBox1->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        gp->AddLine(pictureBox1->Width - radius, pictureBox1->Height, radius, pictureBox1->Height);
        gp->AddArc(0, pictureBox1->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        gp->AddLine(0, pictureBox1->Height - radius, 0, radius);
        gp->CloseFigure();

        // Set the GraphicsPath object as the Region of the PictureBox control
        pictureBox1->Region = gcnew System::Drawing::Region(gp);

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        add->BringToFront();
        add->Show();

    }
    private: System::Void button2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Rectangle rect = button1->ClientRectangle;
        rect.Inflate(-2, -2);
        Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
        int d = 10;
        path->AddArc(rect.X, rect.Y, d, d, 180, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
        path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
        path->CloseFigure();
        button1->Region = gcnew System::Drawing::Region(path);

        Pen^ pen = gcnew Pen(Color::LightBlue, 3);
        e->Graphics->DrawPath(pen, path);
    }
    private: System::Void button3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Rectangle rect = button1->ClientRectangle;
        rect.Inflate(-2, -2);
        Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
        int d = 10;
        path->AddArc(rect.X, rect.Y, d, d, 180, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
        path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
        path->CloseFigure();
        button1->Region = gcnew System::Drawing::Region(path);

        Pen^ pen = gcnew Pen(Color::LightBlue, 3);
        e->Graphics->DrawPath(pen, path);
    }
    private: System::Void button4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Rectangle rect = button1->ClientRectangle;
        rect.Inflate(-2, -2);
        Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
        int d = 10;
        path->AddArc(rect.X, rect.Y, d, d, 180, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
        path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
        path->CloseFigure();
        button1->Region = gcnew System::Drawing::Region(path);

        Pen^ pen = gcnew Pen(Color::LightBlue, 3);
        e->Graphics->DrawPath(pen, path);
    }
    private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        panel4->BringToFront();
        panel4->Show();
    }
    private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        update->BringToFront();
        update->Show();
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        System::String^ source = textBox1->Text; // Get the text from the TextBox
        System::String^ destination = textBox2->Text;
        System::String^ edge = textBox3->Text;
        if (source == "" || destination == "" || edge == "")
            MessageBox::Show("No data was entered...!");
        else {
            std::string strSrc = msclr::interop::marshal_as<std::string>(source); //change to normal string
            std::string strDest = msclr::interop::marshal_as<std::string>(destination);
            int distance = System::Convert::ToInt32(edge);
            graphPtr->addEdges(strSrc, strDest, distance);
        }
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        visualGraph->BringToFront();
        visualGraph->Show();
        graphPtr->displayGraph(visualGraph);
        std::string cppString = graphPtr->cmdDisplay(); //store whole adjacency list in string
        System::String^ sysString = msclr::interop::marshal_as<System::String^>(cppString);
        label9->Text = sysString;
    }
    private: System::Void button9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Rectangle rect = button1->ClientRectangle;
        rect.Inflate(-2, -2);
        Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
        int d = 10;
        path->AddArc(rect.X, rect.Y, d, d, 180, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
        path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
        path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
        path->CloseFigure();
        button1->Region = gcnew System::Drawing::Region(path);

        Pen^ pen = gcnew Pen(Color::LightBlue, 3);
        e->Graphics->DrawPath(pen, path);
    }


    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {




    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void visualGraph_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button10_Click_2(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button5_Click_2(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button10_Click_3(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel4->BringToFront();
        panel4->Show();
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    Rectangle rect = button1->ClientRectangle;
    rect.Inflate(-2, -2);
    Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
    int d = 10;
    path->AddArc(rect.X, rect.Y, d, d, 180, 90);
    path->AddArc(rect.X + rect.Width - d, rect.Y, d, d, 270, 90);
    path->AddArc(rect.X + rect.Width - d, rect.Y + rect.Height - d, d, d, 0, 90);
    path->AddArc(rect.X, rect.Y + rect.Height - d, d, d, 90, 90);
    path->CloseFigure();
    button1->Region = gcnew System::Drawing::Region(path);

    Pen^ pen = gcnew Pen(Color::LightBlue, 3);
    e->Graphics->DrawPath(pen, path);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    VisShort->BringToFront();
    VisShort->Show();
    System::String^ source = textBox4->Text; 
    System::String^ destination = textBox5->Text;
    std::string strSrc = msclr::interop::marshal_as<std::string>(source); 
    std::string strDest = msclr::interop::marshal_as<std::string>(destination);
    std::vector<std::string> citiesPassed = graphPtr->dijkstra(strSrc, strDest);
    int totalDistance = graphPtr->computeTotalDistance(citiesPassed);
    System::String^ strTotalDistance = System::Convert::ToString(totalDistance);
    label12->Text = "The total distance of the shortest path is: " + strTotalDistance + "\n";
    System::String^ sysString = msclr::interop::marshal_as<System::String^>(graphPtr->showCities(citiesPassed));
    label12->Text += sysString;
    graphPtr->displayShortestPath(citiesPassed, VisShort);
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Short->BringToFront();
    Short->Show();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    panel4->BringToFront();
    panel4->Show();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    Short->BringToFront();
    Short->Show();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    panel5->BringToFront();
    panel5->Show();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("success.wav"), NULL, SND_FILENAME | SND_ASYNC);
    System::String^ addCity = textBox6->Text;
    std::string addedCity = msclr::interop::marshal_as<std::string>(addCity);
    graphPtr->addCity(addedCity);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    DeleteCity->BringToFront();
    DeleteCity->Show();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("delete.wav"), NULL, SND_FILENAME | SND_ASYNC);
    System::String^ deleteCity = textBox7->Text;
    std::string deletedCity = msclr::interop::marshal_as<std::string>(deleteCity);
    graphPtr->DeleteCity(deletedCity);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    deleteEdge->BringToFront();
    deleteEdge->Show();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("delete.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
private: System::Void deleteEdge_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    System::String^ deleteCity1 = textBox8->Text;
    std::string deletedCity1 = msclr::interop::marshal_as<std::string>(deleteCity1);
    System::String^ deleteCity2 = textBox9->Text;
    std::string deletedCity2 = msclr::interop::marshal_as<std::string>(deleteCity2);
    graphPtr->DeleteEdge(deletedCity1, deletedCity2);
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Bfs_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
   
        std::string basicBfsString = graphPtr->BFS();
        System::String^ sysBfsString = msclr::interop::marshal_as<System::String^>(basicBfsString);
        label18->Text = sysBfsString;
        Bfs->BringToFront();
        Bfs->Show();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    pictureBox3->Show();
    panel4->BringToFront();
    panel4->Show();
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    pictureBox3->Show();
    panel4->BringToFront();
    panel4->Show();
}
private: System::Void Dfs_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    std::string basicDfsString = graphPtr->DFS();
    System::String^ sysDfsString = msclr::interop::marshal_as<System::String^>(basicDfsString);
    label19->Text = sysDfsString;
    Dfs->BringToFront();
    Dfs->Show();
}
};
}