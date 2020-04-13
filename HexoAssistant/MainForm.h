#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#define toAnsi(_str) (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(_str)
namespace HexoAssistant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm 摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RichTextBox^  textBox2;
	private: System::Windows::Forms::Button^  button9;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(-1, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"新建文章";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(683, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"名称";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(761, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 30);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(243, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"保存文章";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(365, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"删除文章";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(-1, 470);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"重新生成";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(121, 470);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 32);
			this->button5->TabIndex = 7;
			this->button5->Text = L"测试";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(243, 470);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"推送";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(121, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 32);
			this->button7->TabIndex = 9;
			this->button7->Text = L"加载文章";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(830, 470);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(116, 32);
			this->button8->TabIndex = 10;
			this->button8->Text = L"关于";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(-1, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(960, 414);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button9->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(487, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(116, 32);
			this->button9->TabIndex = 12;
			this->button9->Text = L"重命名";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(958, 510);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForm";
			this->Text = L"HexoAssistant     Alpha-5内测版         Aya~敲BUG的                         By ZiRanGe"
				L"-Jason";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string title = toAnsi(textBox1->Text), work = toAnsi(System::IO::Directory::GetCurrentDirectory());
		std::string addddd;
		//std::cout<<std::string("hexo new " + title).c_str();
		system(std::string("hexo new " + title).c_str());
		System::String^ text = System::IO::File::ReadAllText(gcnew String(std::string(work + "\\source\\_posts\\" + title + ".md").c_str()));
		textBox2->Text = text;
		/*std::ofstream ofile;
		ofile.open(work + "\\source\\_posts\\" + title + ".md", std::ios::out);
		ofile << page;
		ofile.close();*/
		textBox2->BackColor = Color::White;
		MessageBox::Show("您已添加文章 " + textBox1->Text,"成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox2->BackColor == Color::LightGray) {
			MessageBox::Show("未打开文章", "失败", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (MessageBox::Show("请问您是否要修改这篇文章?", "确认消息", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::OK)return;
		std::string title = toAnsi(textBox1->Text), page = toAnsi(textBox2->Text), work = toAnsi(System::IO::Directory::GetCurrentDirectory());
		/*std::ofstream ofile;
		ofile.open(work + "\\source\\_posts\\" + title + ".md", std::ios::out);
		ofile << page;
		ofile.close();*/
		System::IO::File::WriteAllText(gcnew String(std::string(work + "\\source\\_posts\\" + title + ".md").c_str()),textBox2->Text);
		textBox2->BackColor = Color::White;
		MessageBox::Show("您已修改文章 " + textBox1->Text, "成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("请问您是否要删除这篇文章?", "确认消息", MessageBoxButtons::OKCancel,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::OK)return;
		std::string title = toAnsi(textBox1->Text), page = toAnsi(textBox2->Text), work = toAnsi(System::IO::Directory::GetCurrentDirectory());
		if (!remove(std::string(work + "\\source\\_posts\\" + title + ".md").c_str())) {
			system(std::string("rmdir /s/q " + work + "\\source\\_posts\\" + title).c_str());
			textBox2->BackColor = Color::LightGray;
			MessageBox::Show("您已删除文章 " + textBox1->Text, "成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("删除文章 " + textBox1->Text+" 失败", "失败", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		system("hexo clean");
		system("hexo g&&pause");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		system("hexo s");
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		system("hexo d&&pause");
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string title = toAnsi(textBox1->Text), work = toAnsi(System::IO::Directory::GetCurrentDirectory());
		if (System::IO::File::Exists(gcnew String(std::string(work + "\\source\\_posts\\" + title + ".md").c_str())) == false) {
			MessageBox::Show("未找到文章", "失败", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::String^ text = System::IO::File::ReadAllText(gcnew String(std::string(work + "\\source\\_posts\\" + title + ".md").c_str()));
		textBox2->Text = text;
		textBox2->BackColor = Color::White;
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("HexoAssistant\n作者： ZiRanGe-Jason\n版本： Alpha-5\n作者网站： https://zirange-jason.gitee.io/ \n欢迎访问并提出修改意见！", "关于HexoAssistant", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::File::Exists(System::IO::Directory::GetCurrentDirectory()+"\\_config.yml")==false) {
			MessageBox::Show("请在您的Hexo博客根目录下运行本程序", "警告", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		//
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ newname=Microsoft::VisualBasic::Interaction::InputBox("新名称", "重命名", "", 100, 500);
		if (newname == "")return;
		std::string title = toAnsi(textBox1->Text),newtitle=toAnsi(newname), page = toAnsi(textBox2->Text), work = toAnsi(System::IO::Directory::GetCurrentDirectory());
		if (System::IO::File::Exists(gcnew String(std::string(work + "\\source\\_posts\\" + title + ".md").c_str())) == false) {
			MessageBox::Show("未找到文章", "失败", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!rename(std::string(work + "\\source\\_posts\\" + title + ".md").c_str(), std::string(work + "\\source\\_posts\\" + newtitle +".md").c_str())) {
			system(std::string("rename " + work + "\\source\\_posts\\" + title + " " + newtitle).c_str());
			MessageBox::Show("您已重命名文章 " + textBox1->Text+" 至 "+newname, "成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
			textBox1->Text = newname;
		}
		else {
			MessageBox::Show("重命名文章 " + textBox1->Text + " 失败", "失败", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
