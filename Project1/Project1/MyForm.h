#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	protected:


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->����ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->���ToolStripMenuItem, this->���������������ToolStripMenuItem, this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(628, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->ToolTipText = L"����������� ���������� ���������� (F1)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 25);
			this->button1->TabIndex = 1;
			this->toolTip1->SetToolTip(this->button1, L"������� ������ (Ctrl+N)");
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 25);
			this->button2->TabIndex = 2;
			this->toolTip1->SetToolTip(this->button2, L"������� ������ (Ctrl+O)");
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(68, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 25);
			this->button3->TabIndex = 3;
			this->toolTip1->SetToolTip(this->button3, L"��������� (Ctrl+S)");
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(99, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 25);
			this->button4->TabIndex = 4;
			this->toolTip1->SetToolTip(this->button4, L"������ (Ctrl+P)");
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 50);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(254, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 25);
			this->button9->TabIndex = 9;
			this->toolTip1->SetToolTip(this->button9, L"������� �������� (Ctrl+Y)");
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(223, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 25);
			this->button8->TabIndex = 8;
			this->toolTip1->SetToolTip(this->button8, L"�������� �������� (Ctrl+Z)");
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(192, 20);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 25);
			this->button7->TabIndex = 7;
			this->toolTip1->SetToolTip(this->button7, L"�������� (Ctrl+V)");
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(161, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 25);
			this->button6->TabIndex = 6;
			this->toolTip1->SetToolTip(this->button6, L"���������� (Ctrl+C)");
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(130, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 25);
			this->button5->TabIndex = 5;
			this->toolTip1->SetToolTip(this->button5, L"�������� (Ctrl+X)");
			this->button5->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(55, 84);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(561, 397);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->AutoSize = true;
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Location = System::Drawing::Point(12, 78);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(37, 403);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(6, 359);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(25, 25);
			this->button20->TabIndex = 11;
			this->toolTip1->SetToolTip(this->button20, L"�������");
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(6, 328);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(25, 25);
			this->button19->TabIndex = 10;
			this->toolTip1->SetToolTip(this->button19, L"����� ����������");
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 25);
			this->button10->TabIndex = 9;
			this->toolTip1->SetToolTip(this->button10, L"�������");
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 267);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(25, 25);
			this->button11->TabIndex = 8;
			this->toolTip1->SetToolTip(this->button11, L"�����������");
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(6, 205);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(25, 25);
			this->button12->TabIndex = 7;
			this->toolTip1->SetToolTip(this->button12, L"������������");
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 174);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(25, 25);
			this->button13->TabIndex = 6;
			this->toolTip1->SetToolTip(this->button13, L"�������������� ������");
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(6, 143);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(25, 25);
			this->button14->TabIndex = 5;
			this->toolTip1->SetToolTip(this->button14, L"����");
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(6, 19);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(25, 25);
			this->button15->TabIndex = 1;
			this->toolTip1->SetToolTip(this->button15, L"�������� ������");
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(6, 112);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(25, 25);
			this->button16->TabIndex = 4;
			this->toolTip1->SetToolTip(this->button16, L"�����");
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(6, 50);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(25, 25);
			this->button17->TabIndex = 2;
			this->toolTip1->SetToolTip(this->button17, L"�������");
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(6, 81);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(25, 25);
			this->button18->TabIndex = 3;
			this->toolTip1->SetToolTip(this->button18, L"�������");
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(6, 297);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(25, 25);
			this->button21->TabIndex = 12;
			this->toolTip1->SetToolTip(this->button21, L"���������� ����� �������");
			this->button21->UseVisualStyleBackColor = true;
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->���������������ToolStripMenuItem->Text = L"���������������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 491);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"������������� ��������������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
