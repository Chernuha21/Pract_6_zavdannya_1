#pragma once
#include<string>
#using <microsoft.visualbasic.dll>
namespace Pract6zavdannya1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListBox^ listBox4;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 35);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(212, 404);
			this->listBox1->TabIndex = 0;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Up", L"NUmbers", L"pop" });
			this->checkedListBox1->Location = System::Drawing::Point(331, 60);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 89);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(331, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(63, 460);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(365, 246);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(675, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(608, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(554, 143);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(221, 324);
			this->listBox2->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(872, 178);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(872, 234);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(872, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1036, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1131, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 13;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1232, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 14;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1232, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 15;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1117, 372);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 16;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(982, 143);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(210, 212);
			this->listBox3->TabIndex = 17;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1232, 272);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 18;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1019, 13);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 19;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(1350, 460);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(120, 84);
			this->listBox4->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1324, 516);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Collections::Generic::Stack<int>numbersStack;
		System::Collections::Generic::Stack<int>myStack1;
		System::Collections::Generic::Stack<String^>strstack;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersStack.Push(10);
		numbersStack.Push(20);
		numbersStack.Push(30);
		textBox1->Clear();
		for each (int number in numbersStack) {

			textBox1->AppendText(number.ToString() + "/r/n");
		}


	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) {
		if (numbersStack.Count > 0) {

			MessageBox::Show("First up element: " + numbersStack.Peek().ToString());

		}
		else
		{
			MessageBox::Show("Stack is empty");
		}
	}
	else if (checkedListBox1->GetItemChecked(1)) {

		int count = numbersStack.Count;
		MessageBox::Show("Numbers of stack elements: " + count.ToString());
	}
	else if (checkedListBox1->GetItemChecked(2)); {

		if (numbersStack.Count > 0) {

			int removedelement = numbersStack.Pop();
			MessageBox::Show("Delete up element: " + removedelement.ToString());

		}
		else
		{
			MessageBox::Show("Stack is empty");
		}
	}
	textBox1->Clear();
	for each (int num in numbersStack) {
		textBox1->AppendText(num.ToString() + "/r/n");
	}



}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox2->Text);
	numbersStack.Push(number);
	textBox1->Clear();
	for each (int num in numbersStack) {
		textBox1->AppendText(num.ToString() + "/r/n");

	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Clear();
	textBox1->Clear();
	if (numbersStack.Count == 0) {
		MessageBox::Show("Stack is empty");
	}
	else
	{
		MessageBox::Show("Stack is not empty");

	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox3->Text);
	while (myStack1.Count < size)
	{
		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("element"));
		myStack1.Push(inputValue);
		listBox1->Items->Insert(0, inputValue.ToString());
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStack1.Count > 0) {
		myStack1.Pop();
		listBox1->Items->Clear();
		for each (int value in myStack1) {
			listBox1->Items->Add(value.ToString());
		}
	}
	else {
		listBox1->Items->Add("stack is empty");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	int sum = 0;
	int evenCount = 0;
	for each (int value in myStack1) {
		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}
	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("average value of non add numbers for 10 to 20 " + average.ToString(), "Result");

	}
	else
	{
		MessageBox::Show("there is no average value of non add numbers for 10 to 20 " , "Result");

	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox4->Text);
	while (strstack.Count < size) {
		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("element of stack", "Write value of stack elements");
		strstack.Push(inputValue);
		listBox2->Items->Insert(0, inputValue);
	}
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (strstack.Count > 0) {
		strstack.Pop();
		listBox2->Items->Clear();
		for each (String ^ value in strstack) {
			listBox2->Items->Add(value);
		}
	}
	else
	{
		listBox2->Items->Add("stack is emty");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int countchats = 0;
	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		countchats += value->Length;
	}
	MessageBox::Show("Count of symvols " + countchats, "Result of symvols");
}
};
}
