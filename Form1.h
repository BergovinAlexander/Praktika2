#pragma once
#include <math.h>
#include <string.h>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(321, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(114, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"���������� �������� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"������� �������� A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"������� �������� X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"�������� ������� Y=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(206, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"3";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Form1::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(206, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(231, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"5";
			this->textBox2->Enter += gcnew System::EventHandler(this, &Form1::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(206, 253);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(231, 22);
			this->textBox3->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(463, 165);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 361);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"�������� ������� ������ 23-�� �������� �.�. ������� 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double y, x, a;
	//��������, ��� ������ ��� � � � �������
	if ((textBox1->Text != "") && (textBox2->Text != ""))
	{
		//�������������� �� ������ � ������� ����� � � � a =
		Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		if (x <= 0)y = 2*x*exp(-x);

		else

			if (x > 0 && x <= a) { y = (x-1)* (x - 1)* (x - 1)+cos(x*x*x); }

			else

			{
				y = 2*sqrt(x*x*x)*sin(x*x*x);
			};
		//����� � ���������� �extBox3 ���������������� � ����� �������� �
		textBox3->Text = Convert::ToString(y);
	}

	else

					//����� ���� � ����������, ���� �� ������� ������ � �����������extBox1 � �extBox2
					{ MessageBox::Show("������� ���������� ������ � � �", "����������� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//������ �������, � ������� �������� 
	t=0;
	//����������� ������� � ������ (���� �������� ��������0, 2384, 1254, 1251 � ��� �� �����) 
	k = 0;
	//������� ����������, ���� ���� ����� �������������
	 if(str[t]=='-') t++;
	//����� �� ����� ���������� � ������� 
	if(str[t]==',') a=false; while(t<l)
{ if (str[t] == ',')
//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
{
	if (t == l - 1 || k > 0) a = false; k++;

}

//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'
 else if(str[t]<'0' || str[t] > '9') a = false;
t++;
}
if (a == false)
{
	MessageBox::Show("�������� � �� �������� ������", "����������� ������",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//������� ������ ���������� ���� 
	this->textBox1->Focus();
}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//������ �������, � ������� ��������t=0;
	//����������� ������� � ������ (���� �������� ��������0, 2384, 1254, 1251 � ��� �� �����) 
	k = 0;
	//������� ����������, ���� ���� ����� ������������� 
	if(str[t]=='-') t++;
	//����� �� ����� ���������� � ������� 
	if(str[t]==',') a=false; while(t<l)
{ if (str[t] == ',')
//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������

{
	if (t == l - 1 || k > 0) a = false; k++;
}

//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'

else if (str[t] < '0' || str[t]>'9') a = false; t++;
}
if (a == false)
{
	MessageBox::Show("�������� � �� �������� ������", "����������� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//������� ������ ���������� ���� 
	this->textBox2->Focus();
}
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
};
}
