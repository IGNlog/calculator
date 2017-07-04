#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^  textBoxDisplay;
	private: System::Windows::Forms::Button^  buttonSinx;
	private: System::Windows::Forms::Button^  buttonCosx;
	private: System::Windows::Forms::Button^  buttonSqrt;
	protected:

	protected:



	private: System::Windows::Forms::Button^  buttonPowXY;
	private: System::Windows::Forms::Button^  buttonDiv;


	private: System::Windows::Forms::Button^  buttonBackspace;

	private: System::Windows::Forms::Button^  buttonC;

	private: System::Windows::Forms::Button^  buttonCE;
	private: System::Windows::Forms::Button^  buttonMult;


	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buttonSub;


	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  button9;



	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  buttonEqually;


	private: System::Windows::Forms::Button^  buttonDot;

	private: System::Windows::Forms::Button^  button0;

	private: System::Windows::Forms::Button^  buttonPlusOrMinus;

	private: System::Windows::Forms::Label^  labelShowOp;


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
			this->textBoxDisplay = (gcnew System::Windows::Forms::TextBox());
			this->buttonSinx = (gcnew System::Windows::Forms::Button());
			this->buttonCosx = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonPowXY = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonBackspace = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->buttonEqually = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPlusOrMinus = (gcnew System::Windows::Forms::Button());
			this->labelShowOp = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxDisplay
			// 
			this->textBoxDisplay->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDisplay->Location = System::Drawing::Point(1, 12);
			this->textBoxDisplay->Multiline = true;
			this->textBoxDisplay->Name = L"textBoxDisplay";
			this->textBoxDisplay->Size = System::Drawing::Size(317, 51);
			this->textBoxDisplay->TabIndex = 0;
			this->textBoxDisplay->Text = L"0";
			this->textBoxDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxDisplay_TextChanged);
			// 
			// buttonSinx
			// 
			this->buttonSinx->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSinx->Location = System::Drawing::Point(1, 69);
			this->buttonSinx->Name = L"buttonSinx";
			this->buttonSinx->Size = System::Drawing::Size(75, 50);
			this->buttonSinx->TabIndex = 1;
			this->buttonSinx->Text = L"sin(x)";
			this->buttonSinx->UseVisualStyleBackColor = true;
			this->buttonSinx->Click += gcnew System::EventHandler(this, &MyForm::buttonSinx_Click);
			// 
			// buttonCosx
			// 
			this->buttonCosx->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCosx->Location = System::Drawing::Point(82, 69);
			this->buttonCosx->Name = L"buttonCosx";
			this->buttonCosx->Size = System::Drawing::Size(75, 50);
			this->buttonCosx->TabIndex = 2;
			this->buttonCosx->Text = L"cos(x)";
			this->buttonCosx->UseVisualStyleBackColor = true;
			this->buttonCosx->Click += gcnew System::EventHandler(this, &MyForm::buttonCosx_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSqrt->Location = System::Drawing::Point(243, 69);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(75, 50);
			this->buttonSqrt->TabIndex = 4;
			this->buttonSqrt->Text = L"sqrt";
			this->buttonSqrt->UseVisualStyleBackColor = true;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &MyForm::buttonSqrt_Click);
			// 
			// buttonPowXY
			// 
			this->buttonPowXY->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPowXY->Location = System::Drawing::Point(163, 69);
			this->buttonPowXY->Name = L"buttonPowXY";
			this->buttonPowXY->Size = System::Drawing::Size(75, 50);
			this->buttonPowXY->TabIndex = 3;
			this->buttonPowXY->Text = L"X^y";
			this->buttonPowXY->UseVisualStyleBackColor = true;
			this->buttonPowXY->Click += gcnew System::EventHandler(this, &MyForm::buttonPowXY_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->Location = System::Drawing::Point(243, 125);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(75, 50);
			this->buttonDiv->TabIndex = 8;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// buttonBackspace
			// 
			this->buttonBackspace->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBackspace->Location = System::Drawing::Point(163, 125);
			this->buttonBackspace->Name = L"buttonBackspace";
			this->buttonBackspace->Size = System::Drawing::Size(75, 50);
			this->buttonBackspace->TabIndex = 7;
			this->buttonBackspace->Text = L"<<";
			this->buttonBackspace->UseVisualStyleBackColor = true;
			this->buttonBackspace->Click += gcnew System::EventHandler(this, &MyForm::buttonBackspace_Click);
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(82, 125);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(75, 50);
			this->buttonC->TabIndex = 6;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCE->Location = System::Drawing::Point(1, 125);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(75, 50);
			this->buttonCE->TabIndex = 5;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMult->Location = System::Drawing::Point(243, 181);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(75, 50);
			this->buttonMult->TabIndex = 12;
			this->buttonMult->Text = L"X";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(163, 181);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 50);
			this->button3->TabIndex = 11;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(82, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 10;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSub->Location = System::Drawing::Point(243, 237);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(75, 50);
			this->buttonSub->TabIndex = 16;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(163, 237);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 50);
			this->button6->TabIndex = 15;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(82, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 50);
			this->button5->TabIndex = 14;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1, 237);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 50);
			this->button4->TabIndex = 13;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(243, 293);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 50);
			this->buttonAdd->TabIndex = 20;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(163, 293);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 50);
			this->button9->TabIndex = 19;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(82, 293);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 50);
			this->button8->TabIndex = 18;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1, 293);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 50);
			this->button7->TabIndex = 17;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// buttonEqually
			// 
			this->buttonEqually->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->buttonEqually->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqually->Location = System::Drawing::Point(243, 349);
			this->buttonEqually->Name = L"buttonEqually";
			this->buttonEqually->Size = System::Drawing::Size(75, 50);
			this->buttonEqually->TabIndex = 24;
			this->buttonEqually->Text = L"=";
			this->buttonEqually->UseVisualStyleBackColor = false;
			this->buttonEqually->Click += gcnew System::EventHandler(this, &MyForm::buttonEqually_Click);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDot->Location = System::Drawing::Point(163, 349);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(75, 50);
			this->buttonDot->TabIndex = 23;
			this->buttonDot->Text = L",";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::buttonDot_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(82, 349);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(75, 50);
			this->button0->TabIndex = 22;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// buttonPlusOrMinus
			// 
			this->buttonPlusOrMinus->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonPlusOrMinus->Location = System::Drawing::Point(1, 349);
			this->buttonPlusOrMinus->Name = L"buttonPlusOrMinus";
			this->buttonPlusOrMinus->Size = System::Drawing::Size(75, 50);
			this->buttonPlusOrMinus->TabIndex = 21;
			this->buttonPlusOrMinus->Text = L"+/-";
			this->buttonPlusOrMinus->UseVisualStyleBackColor = true;
			this->buttonPlusOrMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusOrMinus_Click);
			// 
			// labelShowOp
			// 
			this->labelShowOp->AutoSize = true;
			this->labelShowOp->BackColor = System::Drawing::Color::White;
			this->labelShowOp->Location = System::Drawing::Point(5, 47);
			this->labelShowOp->Name = L"labelShowOp";
			this->labelShowOp->Size = System::Drawing::Size(0, 13);
			this->labelShowOp->TabIndex = 25;
			this->labelShowOp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 402);
			this->Controls->Add(this->labelShowOp);
			this->Controls->Add(this->buttonEqually);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonPlusOrMinus);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonBackspace);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->buttonSqrt);
			this->Controls->Add(this->buttonPowXY);
			this->Controls->Add(this->buttonCosx);
			this->Controls->Add(this->buttonSinx);
			this->Controls->Add(this->textBoxDisplay);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Переменные необходимые для вычисления
		double iFirstNum;
		double iSecondNum;
		double iResult;
		String^ iOperator;
		
	//Очищает всё 
	private: System::Void buttonC_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxDisplay->Text = "0";
		labelShowOp->Text = "";
	}

	//Очищает поле на дисплее
	private: System::Void buttonCE_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxDisplay->Text = "0";
	}

	//Обрабатывает нажатие на кнопки от 0 до 9
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBoxDisplay->Text == "0")
			textBoxDisplay->Text = Numbers->Text;
		else
			textBoxDisplay->Text += Numbers->Text;
	}
	
	//Обрабатывает нажатие на кнопки + , - , * , /
	private: System::Void Arithmetic(System::Object^  sender, System::EventArgs^  e) {
		Button^ operation = safe_cast<Button^>(sender);
		iFirstNum = Double::Parse(textBoxDisplay->Text);
		textBoxDisplay->Text = "";
		iOperator = operation->Text;
		labelShowOp->Text = System::Convert::ToString(iFirstNum) + " " + iOperator;
	}

	//Обрабатывает нажатие на кнопку =
	private: System::Void buttonEqually_Click(System::Object^  sender, System::EventArgs^  e) {
		labelShowOp->Text = "";
		iSecondNum = Double::Parse(textBoxDisplay->Text);

		if (iOperator == "+")
		{
			iResult = iFirstNum + iSecondNum;
			textBoxDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-")
		{
			iResult = iFirstNum - iSecondNum;
			textBoxDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "X")
		{
			iResult = iFirstNum * iSecondNum;
			textBoxDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "/")
		{
			iResult = iFirstNum / iSecondNum;
			textBoxDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "X^y")
		{
			iResult =Math::Pow(iFirstNum, iSecondNum);
			textBoxDisplay->Text = System::Convert::ToString(iResult);
		}
	}

	//Обрабатывает нажатие на кнопку << (Backspace)
	private: System::Void buttonBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBoxDisplay->Text->Length > 0)
		{
			textBoxDisplay->Text = textBoxDisplay->Text->Remove(textBoxDisplay->Text->Length - 1, 1);
		}
	}
	
	//Обрабатывает происходящие на дисплее
	private: System::Void textBoxDisplay_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//если на дисплее ничего нет (пустая строка), ставиться 0
		if (textBoxDisplay->Text=="")
		{
			textBoxDisplay->Text = "0";
		}
	}

	//Обрабатывает нажатие на кнопку ","
	private: System::Void buttonDot_Click(System::Object^  sender, System::EventArgs^  e) {
		//если в строку ещё не входил символ "," , то приписываем к концу строки 
		if (!textBoxDisplay->Text->Contains(","))
		{
			textBoxDisplay->Text = textBoxDisplay->Text + ",";
		}
	}
	
	//Обрабатывает нажатие на кнопку "+/-"
	private: System::Void buttonPlusOrMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		//если в строку  входил символ "-"
		if (textBoxDisplay->Text->Contains("-"))
		{
			//то убираем символ "-" в начале строки
			textBoxDisplay->Text = textBoxDisplay->Text->Remove(0,1) ;
		}
		else
		{
			// приписываем символ "-" в начало строки
			textBoxDisplay->Text = "-" + textBoxDisplay->Text;
		}
	}

	//Обработка нажатия на кнопку Sqrt 
	private: System::Void buttonSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
		//Если значение >= 0 
		if (System::Convert::ToDouble(textBoxDisplay->Text) >= 0)
		{
			//То вычисляем корень числа
			textBoxDisplay->Text = System::Math::Sqrt(System::Convert::ToDouble(textBoxDisplay->Text)).ToString();
		}
		else
		{
			//иначе выводим сообщение о неверном значении 
			textBoxDisplay->Text = "Введённы неверные данные";
		}
	}

	//Обрабатывает нажатие на кнопку "X^y"
	private: System::Void buttonPowXY_Click(System::Object^  sender, System::EventArgs^  e) {
		iFirstNum = Double::Parse(textBoxDisplay->Text);
		labelShowOp->Text = System::Convert::ToString(textBoxDisplay->Text+"^");
		textBoxDisplay->Text = "";
		iOperator = "X^y";
	}

	//Обрабатывает нажатие на кнопку "cos(x)"
	private: System::Void buttonCosx_Click(System::Object^  sender, System::EventArgs^  e) {
		iFirstNum = Double::Parse(textBoxDisplay->Text);
		labelShowOp->Text = System::Convert::ToString("cos(" + textBoxDisplay->Text + ")");
		iResult = Math::Cos(iFirstNum);
		textBoxDisplay->Text = iResult.ToString();
	}

	//Обрабатывает нажатие на кнопку "sin(x)"
	private: System::Void buttonSinx_Click(System::Object^  sender, System::EventArgs^  e) {
		iFirstNum = Double::Parse(textBoxDisplay->Text);
		labelShowOp->Text = System::Convert::ToString("sin(" + textBoxDisplay->Text + ")");
		iResult = Math::Sin(iFirstNum);
		textBoxDisplay->Text = iResult.ToString();
}
};
}
