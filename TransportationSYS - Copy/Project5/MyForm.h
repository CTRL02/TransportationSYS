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
    private:
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

    private: System::Windows::Forms::Button^ button7;

    private: System::Windows::Forms::Button^ button6;
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
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->update = (gcnew System::Windows::Forms::Panel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->visualGraph = (gcnew System::Windows::Forms::Panel());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            this->add->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->update->SuspendLayout();
            this->visualGraph->SuspendLayout();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
            this->button1->Size = System::Drawing::Size(300, 43);
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
            this->panel1->Controls->Add(this->add);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->pictureBox3);
            this->panel1->Controls->Add(this->update);
            this->panel1->Controls->Add(this->visualGraph);
            this->panel1->Controls->Add(this->panel4);
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
            this->add->Size = System::Drawing::Size(732, 549);
            this->add->TabIndex = 8;
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
            // panel3
            // 
            this->panel3->Controls->Add(this->pictureBox1);
            this->panel3->Controls->Add(this->button1);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Location = System::Drawing::Point(294, 62);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(732, 549);
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
            // panel2
            // 
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button3);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(294, 62);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(732, 549);
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
            this->button4->Size = System::Drawing::Size(300, 43);
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
            this->button3->Size = System::Drawing::Size(300, 43);
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
            this->button2->Size = System::Drawing::Size(300, 43);
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
            // update
            // 
            this->update->Controls->Add(this->button13);
            this->update->Dock = System::Windows::Forms::DockStyle::Fill;
            this->update->Location = System::Drawing::Point(0, 0);
            this->update->Name = L"update";
            this->update->Size = System::Drawing::Size(1262, 673);
            this->update->TabIndex = 7;
            // 
            // button13
            // 
            this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
            this->button13->Location = System::Drawing::Point(0, -1);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(78, 70);
            this->button13->TabIndex = 22;
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
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
            this->label9->MinimumSize = System::Drawing::Size(400, 400);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(400, 400);
            this->label9->TabIndex = 0;
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->button5);
            this->panel4->Controls->Add(this->button9);
            this->panel4->Controls->Add(this->label6);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->pictureBox6);
            this->panel4->Controls->Add(this->label4);
            this->panel4->Controls->Add(this->button7);
            this->panel4->Controls->Add(this->button6);
            this->panel4->Location = System::Drawing::Point(294, 62);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(732, 549);
            this->panel4->TabIndex = 10;
            // 
            // button5
            // 
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->Location = System::Drawing::Point(0, 0);
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
            this->button9->Location = System::Drawing::Point(195, 60);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(300, 43);
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
            this->label5->Location = System::Drawing::Point(228, 331);
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
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::White;
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::Black;
            this->button7->Location = System::Drawing::Point(-3, 473);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(300, 43);
            this->button7->TabIndex = 6;
            this->button7->Text = L"BFS";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            this->button7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button3_Paint);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::White;
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::Black;
            this->button6->Location = System::Drawing::Point(429, 473);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(300, 43);
            this->button6->TabIndex = 6;
            this->button6->Text = L"DFS";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            this->button6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button3_Paint);
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
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->update->ResumeLayout(false);
            this->visualGraph->ResumeLayout(false);
            this->visualGraph->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
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
        panel4->BringToFront();
        panel4->Show();
    }
    private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        update->BringToFront();
        update->Show();
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {


        System::String^ source = textBox1->Text; // Get the text from the TextBox
        System::String^ destination = textBox2->Text;
        std::string strSrc = msclr::interop::marshal_as<std::string>(source); //change to normal string
        std::string strDest = msclr::interop::marshal_as<std::string>(destination);
        System::String^ edge = textBox3->Text;
        int distance = System::Convert::ToInt32(edge);
        graphPtr->addEdges(strSrc, strDest, distance);

    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
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
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button10_Click_3(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}