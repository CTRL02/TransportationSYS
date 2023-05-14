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




    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label10;





    private: System::Windows::Forms::PictureBox^ pictureBox4;

    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Panel^ Short;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Panel^ VisShort;
    private: System::Windows::Forms::Label^ label12;


    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;


    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Button^ button20;

    private: System::Windows::Forms::TextBox^ textBox6;

    private: System::Windows::Forms::Panel^ DeleteCity;



private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Panel^ deleteEdge;

private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TextBox^ textBox8;

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
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ pictureBox20;




















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
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->deleteEdge = (gcnew System::Windows::Forms::Panel());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->DeleteCity = (gcnew System::Windows::Forms::Panel());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->add = (gcnew System::Windows::Forms::Panel());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->update = (gcnew System::Windows::Forms::Panel());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->Short = (gcnew System::Windows::Forms::Panel());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Dfs = (gcnew System::Windows::Forms::Panel());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->Bfs = (gcnew System::Windows::Forms::Panel());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->visualGraph = (gcnew System::Windows::Forms::Panel());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->VisShort = (gcnew System::Windows::Forms::Panel());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->deleteEdge->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            this->DeleteCity->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->add->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->update->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->Short->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->Dfs->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->Bfs->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->visualGraph->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->VisShort->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(414, 317);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(511, 46);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Hi user, Welcome to وصلني";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Black;
            this->button1->Location = System::Drawing::Point(677, 462);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(319, 55);
            this->button1->TabIndex = 2;
            this->button1->Text = L"show options";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button1_Paint);
            this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
            this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(399, 294);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(511, 46);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Hi user, Welcome to وصلني";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Controls->Add(this->pictureBox3);
            this->panel1->Controls->Add(this->deleteEdge);
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->DeleteCity);
            this->panel1->Controls->Add(this->add);
            this->panel1->Controls->Add(this->update);
            this->panel1->Controls->Add(this->Short);
            this->panel1->Controls->Add(this->Dfs);
            this->panel1->Controls->Add(this->Bfs);
            this->panel1->Controls->Add(this->visualGraph);
            this->panel1->Controls->Add(this->VisShort);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1305, 650);
            this->panel1->TabIndex = 5;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Transparent;
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->panel3->Controls->Add(this->button1);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Controls->Add(this->pictureBox17);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(0, 0);
            this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(1305, 650);
            this->panel3->TabIndex = 6;
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
            // 
            // pictureBox17
            // 
            this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
            this->pictureBox17->Location = System::Drawing::Point(0, 0);
            this->pictureBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox17->Name = L"pictureBox17";
            this->pictureBox17->Size = System::Drawing::Size(1305, 650);
            this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox17->TabIndex = 3;
            this->pictureBox17->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button3);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1305, 650);
            this->panel2->TabIndex = 5;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Transparent;
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::Black;
            this->button4->Location = System::Drawing::Point(764, 577);
            this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(308, 58);
            this->button4->TabIndex = 7;
            this->button4->Text = L"Update graph data ";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            this->button4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button4_Paint);
            this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm::button4_MouseEnter);
            this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button4_MouseLeave);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Transparent;
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::Black;
            this->button3->Location = System::Drawing::Point(677, 468);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(308, 54);
            this->button3->TabIndex = 6;
            this->button3->Text = L"Display graph data";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            this->button3->DragLeave += gcnew System::EventHandler(this, &MyForm::button3_DragLeave);
            this->button3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button3_Paint);
            this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button3_MouseEnter);
            this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button3_MouseLeave);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Black;
            this->button2->Location = System::Drawing::Point(528, 369);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(304, 52);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Add graph";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            this->button2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button2_Paint);
            this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
            this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
            this->button2->MouseHover += gcnew System::EventHandler(this, &MyForm::button2_MouseHover);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1305, 650);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 9;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(0, 0);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(1305, 650);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
            // 
            // deleteEdge
            // 
            this->deleteEdge->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteEdge.BackgroundImage")));
            this->deleteEdge->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->deleteEdge->Controls->Add(this->pictureBox5);
            this->deleteEdge->Controls->Add(this->label17);
            this->deleteEdge->Controls->Add(this->label16);
            this->deleteEdge->Controls->Add(this->textBox9);
            this->deleteEdge->Controls->Add(this->button25);
            this->deleteEdge->Controls->Add(this->textBox8);
            this->deleteEdge->Controls->Add(this->pictureBox20);
            this->deleteEdge->Dock = System::Windows::Forms::DockStyle::Fill;
            this->deleteEdge->Location = System::Drawing::Point(0, 0);
            this->deleteEdge->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->deleteEdge->Name = L"deleteEdge";
            this->deleteEdge->Size = System::Drawing::Size(1305, 650);
            this->deleteEdge->TabIndex = 29;
            this->deleteEdge->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::deleteEdge_Paint);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(9, 16);
            this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(96, 78);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 34;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click_1);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::White;
            this->label17->Location = System::Drawing::Point(863, 109);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(116, 46);
            this->label17->TabIndex = 33;
            this->label17->Text = L"City2";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::White;
            this->label16->Location = System::Drawing::Point(863, 56);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(116, 46);
            this->label16->TabIndex = 32;
            this->label16->Text = L"City1";
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(986, 121);
            this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(275, 34);
            this->textBox9->TabIndex = 31;
            // 
            // button25
            // 
            this->button25->BackColor = System::Drawing::Color::White;
            this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
            this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button25->FlatAppearance->BorderSize = 0;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->Location = System::Drawing::Point(940, 530);
            this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(342, 88);
            this->button25->TabIndex = 30;
            this->button25->Text = L"Delete";
            this->button25->UseVisualStyleBackColor = false;
            this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
            this->button25->MouseEnter += gcnew System::EventHandler(this, &MyForm::button25_MouseEnter);
            this->button25->MouseLeave += gcnew System::EventHandler(this, &MyForm::button25_MouseLeave);
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(986, 58);
            this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(275, 34);
            this->textBox8->TabIndex = 29;
            // 
            // pictureBox20
            // 
            this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
            this->pictureBox20->Location = System::Drawing::Point(0, 0);
            this->pictureBox20->Name = L"pictureBox20";
            this->pictureBox20->Size = System::Drawing::Size(1305, 650);
            this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox20->TabIndex = 35;
            this->pictureBox20->TabStop = false;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Transparent;
            this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
            this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel5->Controls->Add(this->pictureBox16);
            this->panel5->Controls->Add(this->button20);
            this->panel5->Controls->Add(this->textBox6);
            this->panel5->Controls->Add(this->pictureBox18);
            this->panel5->Location = System::Drawing::Point(0, 0);
            this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1305, 650);
            this->panel5->TabIndex = 29;
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
            // 
            // pictureBox16
            // 
            this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
            this->pictureBox16->Location = System::Drawing::Point(16, 11);
            this->pictureBox16->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(69, 62);
            this->pictureBox16->TabIndex = 3;
            this->pictureBox16->TabStop = false;
            this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::White;
            this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button20->FlatAppearance->BorderSize = 3;
            this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(940, 530);
            this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(342, 88);
            this->button20->TabIndex = 2;
            this->button20->Text = L"Add";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            this->button20->MouseEnter += gcnew System::EventHandler(this, &MyForm::button20_MouseEnter);
            this->button20->MouseLeave += gcnew System::EventHandler(this, &MyForm::button20_MouseLeave);
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::White;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(940, 104);
            this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(256, 38);
            this->textBox6->TabIndex = 0;
            this->textBox6->Text = L"Enter City...";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
            this->textBox6->Enter += gcnew System::EventHandler(this, &MyForm::textBox6_Enter);
            // 
            // pictureBox18
            // 
            this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
            this->pictureBox18->Location = System::Drawing::Point(0, 0);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(1305, 650);
            this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox18->TabIndex = 4;
            this->pictureBox18->TabStop = false;
            // 
            // DeleteCity
            // 
            this->DeleteCity->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteCity.BackgroundImage")));
            this->DeleteCity->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->DeleteCity->Controls->Add(this->textBox7);
            this->DeleteCity->Controls->Add(this->pictureBox13);
            this->DeleteCity->Controls->Add(this->button23);
            this->DeleteCity->Controls->Add(this->pictureBox19);
            this->DeleteCity->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DeleteCity->Location = System::Drawing::Point(0, 0);
            this->DeleteCity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->DeleteCity->Name = L"DeleteCity";
            this->DeleteCity->Size = System::Drawing::Size(1305, 650);
            this->DeleteCity->TabIndex = 29;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::White;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(940, 104);
            this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(256, 38);
            this->textBox7->TabIndex = 29;
            this->textBox7->Text = L"Enter City...";
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(17, 18);
            this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(64, 62);
            this->pictureBox13->TabIndex = 28;
            this->pictureBox13->TabStop = false;
            this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::Color::White;
            this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button23->FlatAppearance->BorderSize = 3;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->Location = System::Drawing::Point(940, 530);
            this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(342, 88);
            this->button23->TabIndex = 25;
            this->button23->Text = L"Delete";
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
            this->button23->MouseEnter += gcnew System::EventHandler(this, &MyForm::button23_MouseEnter);
            this->button23->MouseLeave += gcnew System::EventHandler(this, &MyForm::button23_MouseLeave);
            // 
            // pictureBox19
            // 
            this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(0, 0);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(1305, 650);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox19->TabIndex = 30;
            this->pictureBox19->TabStop = false;
            // 
            // add
            // 
            this->add->BackColor = System::Drawing::Color::White;
            this->add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add.BackgroundImage")));
            this->add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->add->Controls->Add(this->pictureBox11);
            this->add->Controls->Add(this->label7);
            this->add->Controls->Add(this->label10);
            this->add->Controls->Add(this->textBox3);
            this->add->Controls->Add(this->textBox2);
            this->add->Controls->Add(this->label3);
            this->add->Controls->Add(this->button8);
            this->add->Controls->Add(this->textBox1);
            this->add->Controls->Add(this->pictureBox4);
            this->add->Location = System::Drawing::Point(153, 26);
            this->add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->add->Name = L"add";
            this->add->Size = System::Drawing::Size(995, 644);
            this->add->TabIndex = 8;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(9, 4);
            this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(97, 89);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 26;
            this->pictureBox11->TabStop = false;
            this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label7->Location = System::Drawing::Point(263, 438);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(137, 33);
            this->label7->TabIndex = 21;
            this->label7->Text = L"Distance";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label10->Location = System::Drawing::Point(224, 368);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(163, 33);
            this->label10->TabIndex = 20;
            this->label10->Text = L"Distination";
            // 
            // textBox3
            // 
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(439, 449);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(190, 37);
            this->textBox3->TabIndex = 5;
            // 
            // textBox2
            // 
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(439, 380);
            this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(190, 37);
            this->textBox2->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label3->Location = System::Drawing::Point(299, 300);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(113, 33);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Source";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::Transparent;
            this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
            this->button8->Location = System::Drawing::Point(375, 530);
            this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(284, 54);
            this->button8->TabIndex = 1;
            this->button8->Text = L"Submit";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            this->button8->MouseEnter += gcnew System::EventHandler(this, &MyForm::button8_MouseEnter);
            this->button8->MouseLeave += gcnew System::EventHandler(this, &MyForm::button8_MouseLeave);
            // 
            // textBox1
            // 
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(437, 306);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(190, 37);
            this->textBox1->TabIndex = 0;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(305, -11);
            this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(345, 300);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 24;
            this->pictureBox4->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::White;
            this->panel4->Controls->Add(this->button7);
            this->panel4->Controls->Add(this->button6);
            this->panel4->Controls->Add(this->button11);
            this->panel4->Controls->Add(this->button5);
            this->panel4->Controls->Add(this->button9);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->pictureBox6);
            this->panel4->Location = System::Drawing::Point(204, 30);
            this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(890, 613);
            this->panel4->TabIndex = 10;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Transparent;
            this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(465, 527);
            this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(284, 49);
            this->button7->TabIndex = 21;
            this->button7->Text = L"DFS";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
            this->button7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button7_Paint);
            this->button7->MouseEnter += gcnew System::EventHandler(this, &MyForm::button7_MouseEnter);
            this->button7->MouseLeave += gcnew System::EventHandler(this, &MyForm::button7_MouseLeave);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::Transparent;
            this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(95, 527);
            this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(284, 49);
            this->button6->TabIndex = 20;
            this->button6->Text = L"BFS";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            this->button6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button6_Paint);
            this->button6->MouseEnter += gcnew System::EventHandler(this, &MyForm::button6_MouseEnter);
            this->button6->MouseLeave += gcnew System::EventHandler(this, &MyForm::button6_MouseLeave);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::White;
            this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
            this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::Black;
            this->button11->Location = System::Drawing::Point(473, 84);
            this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(284, 49);
            this->button11->TabIndex = 19;
            this->button11->Text = L"Shortest Path";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
            this->button11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button11_Paint);
            // 
            // button5
            // 
            this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
            this->button5->Location = System::Drawing::Point(0, 0);
            this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(77, 70);
            this->button5->TabIndex = 18;
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_2);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::White;
            this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
            this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::Black;
            this->button9->Location = System::Drawing::Point(112, 84);
            this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(284, 49);
            this->button9->TabIndex = 17;
            this->button9->Text = L"Display graph data";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            this->button9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button9_Paint);
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(308, 478);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(248, 29);
            this->label5->TabIndex = 15;
            this->label5->Text = L"Traverse The Graph";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(159, 148);
            this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(547, 303);
            this->pictureBox6->TabIndex = 14;
            this->pictureBox6->TabStop = false;
            // 
            // update
            // 
            this->update->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update.BackgroundImage")));
            this->update->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->update->Controls->Add(this->button19);
            this->update->Controls->Add(this->pictureBox10);
            this->update->Controls->Add(this->button17);
            this->update->Controls->Add(this->button18);
            this->update->Controls->Add(this->pictureBox8);
            this->update->Dock = System::Windows::Forms::DockStyle::Fill;
            this->update->Location = System::Drawing::Point(0, 0);
            this->update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->update->Name = L"update";
            this->update->Size = System::Drawing::Size(1305, 650);
            this->update->TabIndex = 7;
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::Color::White;
            this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
            this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button19->FlatAppearance->BorderSize = 0;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(513, 220);
            this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(303, 64);
            this->button19->TabIndex = 26;
            this->button19->Text = L"Add City ";
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
            this->button19->MouseEnter += gcnew System::EventHandler(this, &MyForm::button19_MouseEnter);
            this->button19->MouseLeave += gcnew System::EventHandler(this, &MyForm::button19_MouseLeave);
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(17, 16);
            this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(63, 57);
            this->pictureBox10->TabIndex = 29;
            this->pictureBox10->TabStop = false;
            this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
            // 
            // button17
            // 
            this->button17->BackColor = System::Drawing::Color::White;
            this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
            this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button17->FlatAppearance->BorderSize = 0;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(511, 458);
            this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(303, 64);
            this->button17->TabIndex = 25;
            this->button17->Text = L"Delete Edge";
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            this->button17->MouseEnter += gcnew System::EventHandler(this, &MyForm::button17_MouseEnter);
            this->button17->MouseLeave += gcnew System::EventHandler(this, &MyForm::button17_MouseLeave);
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::Color::White;
            this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
            this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button18->FlatAppearance->BorderSize = 0;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(513, 337);
            this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(303, 64);
            this->button18->TabIndex = 24;
            this->button18->Text = L"Delete City";
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            this->button18->MouseEnter += gcnew System::EventHandler(this, &MyForm::button18_MouseEnter);
            this->button18->MouseLeave += gcnew System::EventHandler(this, &MyForm::button18_MouseLeave);
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(0, 0);
            this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(1305, 650);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 28;
            this->pictureBox8->TabStop = false;
            // 
            // Short
            // 
            this->Short->BackColor = System::Drawing::Color::White;
            this->Short->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Short.BackgroundImage")));
            this->Short->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->Short->Controls->Add(this->pictureBox12);
            this->Short->Controls->Add(this->label11);
            this->Short->Controls->Add(this->label8);
            this->Short->Controls->Add(this->button14);
            this->Short->Controls->Add(this->textBox5);
            this->Short->Controls->Add(this->textBox4);
            this->Short->Controls->Add(this->pictureBox2);
            this->Short->Location = System::Drawing::Point(204, 30);
            this->Short->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Short->Name = L"Short";
            this->Short->Size = System::Drawing::Size(890, 613);
            this->Short->TabIndex = 20;
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(0, 0);
            this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(71, 62);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 21;
            this->pictureBox12->TabStop = false;
            this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::Black;
            this->label11->Location = System::Drawing::Point(217, 183);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(169, 32);
            this->label11->TabIndex = 4;
            this->label11->Text = L"Destination";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::Black;
            this->label8->Location = System::Drawing::Point(217, 131);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(110, 32);
            this->label8->TabIndex = 3;
            this->label8->Text = L"Source";
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::Color::Transparent;
            this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
            this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(31, 235);
            this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(209, 53);
            this->button14->TabIndex = 2;
            this->button14->Text = L"Compute";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            this->button14->MouseEnter += gcnew System::EventHandler(this, &MyForm::button14_MouseEnter);
            this->button14->MouseLeave += gcnew System::EventHandler(this, &MyForm::button14_MouseLeave);
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(31, 183);
            this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(180, 34);
            this->textBox5->TabIndex = 1;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(31, 131);
            this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(180, 34);
            this->textBox4->TabIndex = 0;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(0, 0);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(890, 613);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox2->TabIndex = 22;
            this->pictureBox2->TabStop = false;
            // 
            // Dfs
            // 
            this->Dfs->BackColor = System::Drawing::Color::Snow;
            this->Dfs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dfs.BackgroundImage")));
            this->Dfs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dfs->Controls->Add(this->button27);
            this->Dfs->Controls->Add(this->label19);
            this->Dfs->Controls->Add(this->pictureBox9);
            this->Dfs->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Dfs->Location = System::Drawing::Point(0, 0);
            this->Dfs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Dfs->Name = L"Dfs";
            this->Dfs->Size = System::Drawing::Size(1305, 650);
            this->Dfs->TabIndex = 31;
            this->Dfs->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Dfs_Paint);
            // 
            // button27
            // 
            this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
            this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
            this->button27->Location = System::Drawing::Point(9, 4);
            this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(77, 70);
            this->button27->TabIndex = 23;
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::White;
            this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label19->Location = System::Drawing::Point(383, 508);
            this->label19->MinimumSize = System::Drawing::Size(547, 86);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(547, 86);
            this->label19->TabIndex = 3;
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(303, 2);
            this->pictureBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(676, 496);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 2;
            this->pictureBox9->TabStop = false;
            // 
            // Bfs
            // 
            this->Bfs->BackColor = System::Drawing::Color::White;
            this->Bfs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bfs.BackgroundImage")));
            this->Bfs->Controls->Add(this->button26);
            this->Bfs->Controls->Add(this->label18);
            this->Bfs->Controls->Add(this->pictureBox7);
            this->Bfs->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Bfs->Location = System::Drawing::Point(0, 0);
            this->Bfs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Bfs->Name = L"Bfs";
            this->Bfs->Size = System::Drawing::Size(1305, 650);
            this->Bfs->TabIndex = 30;
            this->Bfs->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Bfs_Paint);
            // 
            // button26
            // 
            this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
            this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
            this->button26->Location = System::Drawing::Point(3, 2);
            this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(84, 78);
            this->button26->TabIndex = 22;
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::WhiteSmoke;
            this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label18->Location = System::Drawing::Point(349, 468);
            this->label18->MinimumSize = System::Drawing::Size(547, 86);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(547, 86);
            this->label18->TabIndex = 0;
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(289, 32);
            this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(664, 480);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 1;
            this->pictureBox7->TabStop = false;
            // 
            // visualGraph
            // 
            this->visualGraph->BackColor = System::Drawing::Color::Transparent;
            this->visualGraph->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->visualGraph->Controls->Add(this->pictureBox15);
            this->visualGraph->Controls->Add(this->label9);
            this->visualGraph->Location = System::Drawing::Point(0, 0);
            this->visualGraph->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->visualGraph->Name = L"visualGraph";
            this->visualGraph->Size = System::Drawing::Size(1261, 673);
            this->visualGraph->TabIndex = 11;
            this->visualGraph->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::visualGraph_Paint);
            // 
            // pictureBox15
            // 
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(17, 18);
            this->pictureBox15->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(69, 62);
            this->pictureBox15->TabIndex = 1;
            this->pictureBox15->TabStop = false;
            this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::White;
            this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label9->Location = System::Drawing::Point(841, 11);
            this->label9->MinimumSize = System::Drawing::Size(400, 199);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(400, 199);
            this->label9->TabIndex = 0;
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // VisShort
            // 
            this->VisShort->BackColor = System::Drawing::Color::Transparent;
            this->VisShort->Controls->Add(this->pictureBox14);
            this->VisShort->Controls->Add(this->label12);
            this->VisShort->Dock = System::Windows::Forms::DockStyle::Fill;
            this->VisShort->ForeColor = System::Drawing::Color::White;
            this->VisShort->Location = System::Drawing::Point(0, 0);
            this->VisShort->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->VisShort->Name = L"VisShort";
            this->VisShort->Size = System::Drawing::Size(1305, 650);
            this->VisShort->TabIndex = 20;
            // 
            // pictureBox14
            // 
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(9, 4);
            this->pictureBox14->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(72, 76);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox14->TabIndex = 1;
            this->pictureBox14->TabStop = false;
            this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::White;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::Black;
            this->label12->Location = System::Drawing::Point(936, 9);
            this->label12->MinimumSize = System::Drawing::Size(360, 209);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(360, 209);
            this->label12->TabIndex = 0;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1305, 650);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"وصلني شكرا";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->deleteEdge->ResumeLayout(false);
            this->deleteEdge->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            this->DeleteCity->ResumeLayout(false);
            this->DeleteCity->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->add->ResumeLayout(false);
            this->add->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->update->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->Short->ResumeLayout(false);
            this->Short->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->Dfs->ResumeLayout(false);
            this->Dfs->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->Bfs->ResumeLayout(false);
            this->Bfs->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->visualGraph->ResumeLayout(false);
            this->visualGraph->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->VisShort->ResumeLayout(false);
            this->VisShort->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME |SND_ASYNC);
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        add->BringToFront();
        add->Show();

    }
    private: System::Void button2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
       
    }
    private: System::Void button3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
      
    }
    private: System::Void button4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
     
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

        Pen^ pen = gcnew Pen(Color::Black, 3);
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
       
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
        pictureBox3->BringToFront();
        pictureBox3->Show();
        panel2->BringToFront();
        panel2->Show();
    }
    private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
     
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
     
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

    Pen^ pen = gcnew Pen(Color::Black, 3);
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
    if (graphPtr->graph.empty())
        MessageBox::Show("No Data was found..!");
    else {
        std::string basicBfsString = graphPtr->BFS();
        System::String^ sysBfsString = msclr::interop::marshal_as<System::String^>(basicBfsString);
        label18->Text = sysBfsString;
        Bfs->BringToFront();
        Bfs->Show();
    }
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
    if (graphPtr->graph.empty())
        MessageBox::Show("No Data was found..!");
    else {
        std::string basicDfsString = graphPtr->DFS();
        System::String^ sysDfsString = msclr::interop::marshal_as<System::String^>(basicDfsString);
        label19->Text = sysDfsString;
        Dfs->BringToFront();
        Dfs->Show();
    }
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    pictureBox3->Show();
    panel2->BringToFront();
    panel2->Show();
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    pictureBox3->Show();
    panel2->BringToFront();
    panel2->Show();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button1->Top -= 5; // raise the button up
    this->button1->Invalidate(); // redraw the button
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button1->Top += 5; // lower the button down
    this->button1->Invalidate(); // redraw the button
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
  }
private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button2->Top -= 5; // raise the button up
    this->button2->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button2->Top += 5; // lower the button down
    this->button2->Invalidate(); // redraw the button
    //leave
}
private: System::Void button3_DragLeave(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button3->Top -= 5; // raise the button up
    this->button3->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button3->Top += 5; // lower the button down
    this->button3->Invalidate(); // redraw the button
    //leave
}
private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button4->Top -= 5; // raise the button up
    this->button4->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button4->Top += 5; // lower the button down
    this->button4->Invalidate(); // redraw the button
    //leave
}
private: System::Void button14_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button14->Top -= 5; // raise the button up
    this->button14->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button14_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button14->Top += 5; // lower the button down
    this->button14->Invalidate(); // redraw the button
    //leave
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    panel4->BringToFront();
    panel4->Show();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button8->Top -= 5; // raise the button up
    this->button8->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button8->Top += 5; // lower the button down
    this->button8->Invalidate(); // redraw the button
    //leave
}
private: System::Void button19_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button19->Top += 5; // lower the button down
    this->button19->Invalidate(); // redraw the button
    //leave
}
private: System::Void button19_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button19->Top -= 5; // raise the button up
    this->button19->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button18_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button18->Top -= 5; // raise the button up
    this->button18->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button18_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button18->Top += 5; // lower the button down
    this->button18->Invalidate(); // redraw the button
    //leave
}
private: System::Void button17_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button17->Top -= 5; // raise the button up
    this->button17->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button17_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button17->Top += 5; // lower the button down
    this->button17->Invalidate(); // redraw the button
    //leave
}
private: System::Void button25_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button25->Top -= 5; // raise the button up
    this->button25->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button25_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button25->Top += 5; // lower the button down
    this->button25->Invalidate(); // redraw the button
    //leave
}
private: System::Void pictureBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    Short->BringToFront();
    Short->Show();
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    pictureBox3->BringToFront();
    pictureBox3->Show();
    panel4->BringToFront();
    panel4->Show();
}
private: System::Void button6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button6->Top -= 5; // raise the button up
    this->button6->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button6->Top += 5; // lower the button down
    this->button6->Invalidate(); // redraw the button
    //leave
}
private: System::Void button7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button7->Top -= 5; // raise the button up
    this->button7->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button7->Top += 5; // lower the button down
    this->button7->Invalidate(); // redraw the button
    //leave
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
    PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
    update->BringToFront();
    update->Show();
}
private: System::Void button20_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button20->Top -= 5; // raise the button up
    this->button20->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button20_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button20->Top += 5; // lower the button down
    this->button20->Invalidate(); // redraw the button
    //leave
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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

    Pen^ pen = gcnew Pen(Color::Black, 3);
    e->Graphics->DrawPath(pen, path);
}
private: System::Void button7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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

    Pen^ pen = gcnew Pen(Color::Black, 3);
    e->Graphics->DrawPath(pen, path);
}
private: System::Void button23_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
    this->button23->Top -= 5; // raise the button up
    this->button23->Invalidate(); // redraw the button
    //mouse_enter
}
private: System::Void button23_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->button23->Top += 5; // lower the button down
    this->button23->Invalidate(); // redraw the button
    //leave
}
private: System::Void textBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
    if (textBox6->Text == "Enter City...") {
        textBox6->Text = "";
    }
}
};
}