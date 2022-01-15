#pragma once
#include <string.h>
#include <string>
#include <locale>  
using namespace std;
namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	/// 

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;




	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Location = System::Drawing::Point(188, 182);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(401, 401);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->LoadCompleted += gcnew System::ComponentModel::AsyncCompletedEventHandler(this, &Form1::pictureBox1_LoadCompleted);
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &Form1::pictureBox1_SizeChanged);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(595, 579);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 85);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Очистить поле";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->TextChanged += gcnew System::EventHandler(this, &Form1::button1_TextChanged);
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(197, 182);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(401, 401);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(565, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L" Кто же победит\?";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(466, 607);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 45);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ᐅ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(227, 607);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ᐊ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(637, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 67);
			this->button4->TabIndex = 6;
			this->button4->Text = L" ᐃ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(637, 465);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 67);
			this->button5->TabIndex = 7;
			this->button5->Text = L"ᐁ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(367, 615);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 29);
			this->label2->TabIndex = 8;
			this->label2->Text = L"-";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(645, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"-";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(197, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 34);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"30";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 29);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Размеры поля:";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 29);
			this->label7->TabIndex = 18;
			this->label7->Text = L"х 30";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(231, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(403, 69);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Крестики-Нолики";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(352, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 29);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Ход: крестиков";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 306);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = 7;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBar1->Size = System::Drawing::Size(133, 56);
			this->trackBar1->TabIndex = 22;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 58);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Кол-во \r\nвидимых ячеек";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(52, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 29);
			this->label9->TabIndex = 24;
			this->label9->Text = L"10";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(808, 687);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Form1";
			this->Text = L"5 in a row";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::Form1_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int turn = 0;
		Graphics^ g;
		int sizeX = 30, sizeY = 30;
		char** arr;
		int scale = 10;
		int posCamX = sizeX / 2 - scale / 2;
		int posCamY = sizeY / 2 - scale / 2;

	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   char** createArr(int m, int n) {
			   arr = new char* [m];
			   for (int i = 0; i < m; i++) {
				   arr[i] = new char[n];
			   }
			   for (int i = 0; i < m; i++)
			   {
				   for (int j = 0; j < n; j++)
				   {
					   arr[i][j] = ' ';
				   }
			   }
			   return arr;
		   }
		   int isFin()
		   {
			   g = pictureBox1->CreateGraphics();
			   int width = pictureBox1->Width;
			   int height = pictureBox1->Height;
			   Pen^ greenPen = gcnew Pen(Color::Green, 2);
			   //vertCheck
			   for (int i = 0; i < sizeX; i++)
			   {

				   for (int j = 0; j < sizeY - 4; j++)
				   {
					   if (arr[i][j] == ' ')
					   {
						   continue;
					   }
					   else if (arr[i][j] == 'x' && arr[i][j + 1] == 'x' && arr[i][j + 2] == 'x' && arr[i][j + 3] == 'x' && arr[i][j + 4] == 'x')
					   {
						   label1->Text = "Крестики победили";
						   g->DrawLine(greenPen, (j-posCamX) * width / scale, (i-posCamY) * height / scale + height / (2 * scale), (j-posCamX + 5) * width / scale, (i-posCamY) * height / scale + height / (2 * scale));
						   return 1;
					   }
					   else if (arr[i][j] == 'o' && arr[i][j + 1] == 'o' && arr[i][j + 2] == 'o' && arr[i][j + 3] == 'o' && arr[i][j + 4] == 'o')
					   {
						   label1->Text = "Нолики победили";
						   g->DrawLine(greenPen, (j - posCamX) * width / scale, (i - posCamY) * height / scale + height / (2 * scale), (j - posCamX + 5) * width / scale, (i - posCamY) * height / scale + height / (2 * scale));
						   return 2;
					   }
				   }
			   }
			   //horizCheck
			   for (int i = 0; i < sizeX - 4; i++)
			   {
				   for (int j = 0; j < sizeY; j++)
				   {
					   if (arr[i][j] == 'x' && arr[i + 1][j] == 'x' && arr[i + 2][j] == 'x' && arr[i + 3][j] == 'x' && arr[i + 4][j] == 'x')
					   {
						   label1->Text = "Крестики победили";
						   g->DrawLine(greenPen, (j - posCamX) * width / scale + width / (2 * scale), (i-posCamY) * height / scale, (j - posCamX) * width / scale + width / (2 * scale), (i - posCamY + 5) * height / scale);

						   return 1;
					   }
					   if (arr[i][j] == 'o' && arr[i + 1][j] == 'o' && arr[i + 2][j] == 'o' && arr[i + 3][j] == 'o' && arr[i + 4][j] == 'o')
					   {
						   label1->Text = "Нолики победили";
						   g->DrawLine(greenPen, (j - posCamX) * width / scale + width / (2 * scale), (i - posCamY) * height / scale, (j - posCamX) * width / scale + width / (2 * scale), (i - posCamY + 5) * height / scale);
						   return 2;
					   }
				   }
			   }
			   //mainDiagCheck
			   for (int i = 0; i < sizeX - 4; i++)
			   {
				   for (int j = 0; j < sizeY - 4; j++)
				   {
					   if (arr[i][j] == 'x' && arr[i + 1][j + 1] == 'x' && arr[i + 2][j + 2] == 'x' && arr[i + 3][j + 3] == 'x' && arr[i + 4][j + 4] == 'x')
					   {
						   label1->Text = "Крестики победили";
						   g->DrawLine(greenPen, (j-posCamX) * width / scale, (i - posCamY) * height / scale, (j - posCamX + 5) * width / scale, (i - posCamY + 5) * height / scale);

						   return 1;
					   }
					   if (arr[i][j] == 'o' && arr[i + 1][j + 1] == 'o' && arr[i + 2][j + 2] == 'o' && arr[i + 3][j + 3] == 'o' && arr[i + 4][j + 4] == 'o')
					   {
						   label1->Text = "Нолики победили";
						   g->DrawLine(greenPen, (j - posCamX) * width / scale, (i - posCamY) * height / scale, (j - posCamX + 5) * width / scale, (i - posCamY + 5) * height / scale);
						   return 2;
					   }
				   }
			   }
			   //secondDiagCheck
			   for (int i = 0; i < sizeY - 4; i++)
			   {
				   for (int j = 4; j < sizeX - 1; j++)
				   {
					   if (arr[i][j] == 'x' && arr[i + 1][j - 1] == 'x' && arr[i + 2][j - 2] == 'x' && arr[i + 3][j - 3] == 'x' && arr[i + 4][j - 4] == 'x')
					   {
						   label1->Text = "Крестики победили";
						   g->DrawLine(greenPen, (j - posCamX + 1) * width / scale, (i - posCamY) * height / scale, (j - posCamX - 4) * width / scale, (i - posCamY + 5) * height / scale);

						   return 1;
					   }
					   if (arr[i][j] == 'o' && arr[i + 1][j - 1] == 'o' && arr[i + 2][j - 2] == 'o' && arr[i + 3][j - 3] == 'o' && arr[i + 4][j - 4] == 'o')
					   {
						   label1->Text = "Нолики победили";
						   g->DrawLine(greenPen, (j - posCamX + 1) * width / scale, (i - posCamY) * height / scale, (j - posCamX - 4) * width / scale, (i - posCamY + 5) * height / scale);
						   return 2;
					   }
				   }
			   }
			   return 0;
		   }
		   void drawCross(float x, float y)
		   {
			   g = pictureBox1->CreateGraphics();
			   Pen^ bluePen = gcnew Pen(Color::Blue, 3);
			   g->DrawLine(bluePen, x + 5, y + 5, x - 5 + pictureBox1->Width / scale, y - 5 + pictureBox1->Height / scale);
			   g->DrawLine(bluePen, x - 5 + pictureBox1->Width / scale, y + 5, x + 5, y - 5 + pictureBox1->Height / scale);
		   }
		   void drawCircle(float x, float y)
		   {
			   g = pictureBox1->CreateGraphics();
			   Pen^ redPen = gcnew Pen(Color::Red, 3);
			   g->DrawEllipse(redPen, x + 5, y + 5, (float)pictureBox1->Width / scale - 10, (float)pictureBox1->Height / scale - 10);
		   }
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		createArr(sizeX, sizeY);
		//dataGridView1->ColumnCount = sizeX;
		//dataGridView1->RowCount = sizeY;
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int fin = isFin();
		
		float clickX = e->X;
		float clickY = e->Y;
		int cageY = -1, cageX = -1;
		for (int i = 0; i < pictureBox1->Width; i += pictureBox1->Width / scale, cageX++)
		{
			if (clickX<i && clickX>i - pictureBox1->Width / scale)
			{
				clickX = i - pictureBox1->Width / scale;
				break;
			}
		}
		for (int i = 0; i < pictureBox1->Height; i += pictureBox1->Height / scale, cageY++)
		{
			if (clickY<i && clickY>i - pictureBox1->Height / scale)
			{
				clickY = i - pictureBox1->Height / scale;
				break;
			}
		}

		if (fin==0&& arr[cageY + posCamY][cageX + posCamX] == ' ')
		{
			if (turn % 2 == 0)
			{
				drawCross(clickX, clickY);
				arr[cageY + posCamY][cageX + posCamX] = 'x';
				label8->Text = "Ход: ноликов";
				turn++;
			}
			else if (turn % 2 == 1)
			{
				drawCircle(clickX, clickY);
				arr[cageY + posCamY][cageX + posCamX] = 'o';
				label8->Text = "Ход: крестиков";
				turn++;
			}
		}
		
		fin = isFin();
		if (fin == 1)
		{
			label1->Text = "крестики победили";
		}
		else if (fin == 2)
		{
			label1->Text = "нолики победили";
		}
	/*	for (int i = 0; i < sizeX; i++)
		{
			for (int j = 0; j < sizeY; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = arr[i][j].ToString();
			}
		}*/

	}
		   void drawField()
		   {
			   drawGrid();
			   for (int i = 0; i < sizeY; i++)
			   {
				   for (int j = 0; j < sizeX; j++)
				   {
					   if (i >= posCamY && i <= posCamY + scale)
					   {
						   float cageX = (j - posCamX) * pictureBox1->Width / scale,
							   cageY = (i - posCamY) * pictureBox1->Height / scale;
						   if (arr[i][j] == 'x')
						   {
							   drawCross(cageX, cageY);
						   }
						   else if (arr[i][j] == 'o')
						   {
							   drawCircle(cageX, cageY);
						   }
					   }

				   }
			   }
		   }
		   void goRight() {
			   if (posCamX < sizeX - scale)
			   {
				   button3->Enabled = true;
				   posCamX++;
				   drawField();
				   return;
			   }
			   else if(posCamX >= sizeX - scale)
			   {
				   button2->Enabled = false;
			   }
		   }
		   void goLeft() {
			   if (posCamX > 0)
			   {
				   
				   button2->Enabled = true;
				   posCamX--;
				   drawField();
			   }
			   else
			   {
				   button3->Enabled = false;
			   }
		   }
		   void goUp() {
			   if (posCamY > 0)
			   {
				   button5->Enabled = true;
				   posCamY--;
				   drawField();
			   }
			   else if(posCamY==0)
			   {
				   button4->Enabled = false;
			   }
		   }
		   void goDown()
		   {
			   if (posCamY < sizeY - scale)
			   {
				   button4->Enabled = true;
				   posCamY++;
				   drawField();
			   }
			   else
			   {
				   button5->Enabled = false;
			   }
		   }
		   void drawGrid() {
			   g = pictureBox1->CreateGraphics();
			   g->Clear(Color::White);
			   int step = 0;
			   Pen^ blackPen = gcnew Pen(Color::Black, 1);
			   for (int step = 0; step < pictureBox1->Width; step += pictureBox1->Width / scale)
			   {
				   g->DrawLine(blackPen, step, 0, step, pictureBox1->Height);
			   }
			   step = 0;
			   for (int step = 0; step < pictureBox1->Height; step += pictureBox1->Height / scale)
			   {
				   g->DrawLine(blackPen, 0, step, pictureBox1->Width, step);
			   }

		   }
		   void showPosCam() {
			   label2->Text = posCamX.ToString();
			   label3->Text = posCamY.ToString();
		   };
		   void setCross(int i, int j)
		   {
			   arr[i][j] = 'x';
			   float cageY=(i-posCamY)*pictureBox1->Height/scale;
			   float cageX= (j - posCamX) * pictureBox1->Width / scale;
			   drawCross(cageX, cageY);
		   }
		   void setCircle(int i, int j)
		   {
			   arr[i][j] = 'x';
			   float cageY = (i - posCamY) * pictureBox1->Height / scale;
			   float cageX = (j - posCamX) * pictureBox1->Width / scale;
			   drawCircle(cageX, cageY);
		   }
	private: System::Void Form1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {

	}
	private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		label1->Text = "Кто же победит?";
		pictureBox1->Enabled = true;
		clearField();
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		goRight();
		showPosCam();
	};
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		goLeft();
		showPosCam();
	};
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		goUp();
		showPosCam();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		goDown();
		showPosCam();
	}
	
	
	void clearField()
	{
		turn = 0;
		drawGrid();
		createArr(sizeX, sizeY);
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	clearField();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {



	if (textBox1->Text!="")
	{
		sizeX = Convert::ToInt32(textBox1->Text);
		sizeY = sizeX;
	}
	label7->Text = "x "+textBox1->Text->ToString();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	label9->Text = trackBar1->Value.ToString();
	scale = trackBar1->Value;
}
};

}