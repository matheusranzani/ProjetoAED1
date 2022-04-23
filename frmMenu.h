#pragma once

#include "Estoque.hpp"

#include <msclr\marshal_cppstd.h>

namespace ProjetoAED1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Estoque estoque;

	public ref class frmMenu : public System::Windows::Forms::Form {
		public:
			frmMenu(void) {
				InitializeComponent();
		
				pnlAdicionar->Hide();
				pnlAlterarQuantidade->Hide();
				pnlRemover->Hide();
				pnlExibirProduto->Hide();
				gpbExibirProduto->Visible = false;
				pnlExibirEstoque->Hide();
				dgvEstoque->Visible = false;

				cria(&estoque);
			}

		protected:
			~frmMenu() {
				if (components) {
					delete components;
				}
			}

		private:
			System::ComponentModel::Container ^components;

		#pragma region Componentes
		private: System::Windows::Forms::Label^ lblEstoque;
		private: System::Windows::Forms::Button^ btnAdicionar;
		private: System::Windows::Forms::Button^ btnAlterarQuantidade;
		private: System::Windows::Forms::Button^ btnRemover;
		private: System::Windows::Forms::Button^ btnExibirProduto;
		private: System::Windows::Forms::Button^ btnExibirEstoque;
		private: System::Windows::Forms::Button^ btnSair;
		private: System::Windows::Forms::Panel^ pnlAdicionar;
		private: System::Windows::Forms::Button^ btnAdicionarSair;
		private: System::Windows::Forms::Panel^ pnlAlterarQuantidade;
		private: System::Windows::Forms::Button^ btnAlterarQuantidadeSair;
		private: System::Windows::Forms::Label^ lblNome;
		private: System::Windows::Forms::Button^ btnAdicionarPanel;
		private: System::Windows::Forms::Label^ lblAdicionar;
		private: System::Windows::Forms::TextBox^ txtQuantidade;
		private: System::Windows::Forms::TextBox^ txtPreco;
		private: System::Windows::Forms::TextBox^ txtNome;
		private: System::Windows::Forms::Label^ lblPreco;
		private: System::Windows::Forms::Label^ lblQuantidade;
		private: System::Windows::Forms::TextBox^ txtNomeAlterar;
		private: System::Windows::Forms::TextBox^ txtQuantidadeAlterar;
		private: System::Windows::Forms::Label^ lblQuantidadeAlterar;
		private: System::Windows::Forms::Label^ lblNomeAlterar;
		private: System::Windows::Forms::Button^ btnAlterarPanel;
		private: System::Windows::Forms::Label^ lblAlterarQuantidade;
		private: System::Windows::Forms::Panel^ pnlRemover;
		private: System::Windows::Forms::TextBox^ txtNomeRemover;
		private: System::Windows::Forms::Label^ lblRemoverNome;
		private: System::Windows::Forms::Button^ btnRemoverPanel;
		private: System::Windows::Forms::Label^ lblRemover;
		private: System::Windows::Forms::Button^ btnRemoverSair;
		private: System::Windows::Forms::Panel^ pnlExibirProduto;
		private: System::Windows::Forms::GroupBox^ gpbExibirProduto;
		private: System::Windows::Forms::Label^ lblExibeQuantidade;
		private: System::Windows::Forms::Label^ lblExibePreco;
		private: System::Windows::Forms::Label^ lblExibeNome;
		private: System::Windows::Forms::Label^ lblQuantidadeGPBProduto;
		private: System::Windows::Forms::Label^ lblPrecoGPBProduto;
		private: System::Windows::Forms::Label^ lblNomeGPBProduto;
		private: System::Windows::Forms::TextBox^ txtNomeExibirProduto;
		private: System::Windows::Forms::Label^ lblNomeExibirProduto;
		private: System::Windows::Forms::Button^ btnExibirProdutoPanel;
		private: System::Windows::Forms::Label^ lblExibirProduto;
		private: System::Windows::Forms::Button^ btnExibirProdutoSair;
		private: System::Windows::Forms::Panel^ pnlExibirEstoque;
		private: System::Windows::Forms::Label^ lblExibirEstoque;
		private: System::Windows::Forms::Button^ btnExibeEstoqueSair;
		private: System::Windows::Forms::DataGridView^ dgvEstoque;
		private: System::Windows::Forms::Label^ lblResultado;
		private: System::Windows::Forms::Label^ lblResultadoQuantidade;
		private: System::Windows::Forms::Label^ lblResultadoRemover;
		private: System::Windows::Forms::Label^ lblResultadoProduto;
		private: System::Windows::Forms::Label^ lblEstoqueVazio;
		private: System::Windows::Forms::Label^ lblTotal;

#pragma endregion

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenu::typeid));
			this->lblEstoque = (gcnew System::Windows::Forms::Label());
			this->btnAdicionar = (gcnew System::Windows::Forms::Button());
			this->btnAlterarQuantidade = (gcnew System::Windows::Forms::Button());
			this->btnRemover = (gcnew System::Windows::Forms::Button());
			this->btnExibirProduto = (gcnew System::Windows::Forms::Button());
			this->btnExibirEstoque = (gcnew System::Windows::Forms::Button());
			this->btnSair = (gcnew System::Windows::Forms::Button());
			this->pnlAdicionar = (gcnew System::Windows::Forms::Panel());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->txtQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->txtPreco = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->lblPreco = (gcnew System::Windows::Forms::Label());
			this->lblQuantidade = (gcnew System::Windows::Forms::Label());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->btnAdicionarPanel = (gcnew System::Windows::Forms::Button());
			this->lblAdicionar = (gcnew System::Windows::Forms::Label());
			this->btnAdicionarSair = (gcnew System::Windows::Forms::Button());
			this->pnlAlterarQuantidade = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoQuantidade = (gcnew System::Windows::Forms::Label());
			this->txtNomeAlterar = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantidadeAlterar = (gcnew System::Windows::Forms::TextBox());
			this->lblQuantidadeAlterar = (gcnew System::Windows::Forms::Label());
			this->lblNomeAlterar = (gcnew System::Windows::Forms::Label());
			this->btnAlterarPanel = (gcnew System::Windows::Forms::Button());
			this->lblAlterarQuantidade = (gcnew System::Windows::Forms::Label());
			this->btnAlterarQuantidadeSair = (gcnew System::Windows::Forms::Button());
			this->pnlRemover = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoRemover = (gcnew System::Windows::Forms::Label());
			this->txtNomeRemover = (gcnew System::Windows::Forms::TextBox());
			this->lblRemoverNome = (gcnew System::Windows::Forms::Label());
			this->btnRemoverPanel = (gcnew System::Windows::Forms::Button());
			this->lblRemover = (gcnew System::Windows::Forms::Label());
			this->btnRemoverSair = (gcnew System::Windows::Forms::Button());
			this->pnlExibirProduto = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoProduto = (gcnew System::Windows::Forms::Label());
			this->gpbExibirProduto = (gcnew System::Windows::Forms::GroupBox());
			this->lblExibeQuantidade = (gcnew System::Windows::Forms::Label());
			this->lblExibePreco = (gcnew System::Windows::Forms::Label());
			this->lblExibeNome = (gcnew System::Windows::Forms::Label());
			this->lblQuantidadeGPBProduto = (gcnew System::Windows::Forms::Label());
			this->lblPrecoGPBProduto = (gcnew System::Windows::Forms::Label());
			this->lblNomeGPBProduto = (gcnew System::Windows::Forms::Label());
			this->txtNomeExibirProduto = (gcnew System::Windows::Forms::TextBox());
			this->lblNomeExibirProduto = (gcnew System::Windows::Forms::Label());
			this->btnExibirProdutoPanel = (gcnew System::Windows::Forms::Button());
			this->lblExibirProduto = (gcnew System::Windows::Forms::Label());
			this->btnExibirProdutoSair = (gcnew System::Windows::Forms::Button());
			this->pnlExibirEstoque = (gcnew System::Windows::Forms::Panel());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->lblExibirEstoque = (gcnew System::Windows::Forms::Label());
			this->btnExibeEstoqueSair = (gcnew System::Windows::Forms::Button());
			this->dgvEstoque = (gcnew System::Windows::Forms::DataGridView());
			this->lblEstoqueVazio = (gcnew System::Windows::Forms::Label());
			this->pnlAdicionar->SuspendLayout();
			this->pnlAlterarQuantidade->SuspendLayout();
			this->pnlRemover->SuspendLayout();
			this->pnlExibirProduto->SuspendLayout();
			this->gpbExibirProduto->SuspendLayout();
			this->pnlExibirEstoque->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstoque))->BeginInit();
			this->SuspendLayout();
			// 
			// lblEstoque
			// 
			this->lblEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstoque->Location = System::Drawing::Point(248, 54);
			this->lblEstoque->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEstoque->Name = L"lblEstoque";
			this->lblEstoque->Size = System::Drawing::Size(668, 53);
			this->lblEstoque->TabIndex = 0;
			this->lblEstoque->Text = L"Controle de Estoque - Supermercado";
			// 
			// btnAdicionar
			// 
			this->btnAdicionar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAdicionar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionar->Location = System::Drawing::Point(347, 148);
			this->btnAdicionar->Margin = System::Windows::Forms::Padding(4);
			this->btnAdicionar->Name = L"btnAdicionar";
			this->btnAdicionar->Size = System::Drawing::Size(471, 65);
			this->btnAdicionar->TabIndex = 1;
			this->btnAdicionar->Text = L"Adicionar produto";
			this->btnAdicionar->UseVisualStyleBackColor = false;
			this->btnAdicionar->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionar_Click);
			// 
			// btnAlterarQuantidade
			// 
			this->btnAlterarQuantidade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAlterarQuantidade->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAlterarQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAlterarQuantidade->Location = System::Drawing::Point(347, 220);
			this->btnAlterarQuantidade->Margin = System::Windows::Forms::Padding(4);
			this->btnAlterarQuantidade->Name = L"btnAlterarQuantidade";
			this->btnAlterarQuantidade->Size = System::Drawing::Size(468, 65);
			this->btnAlterarQuantidade->TabIndex = 2;
			this->btnAlterarQuantidade->Text = L"Alterar quantidade de um produto";
			this->btnAlterarQuantidade->UseVisualStyleBackColor = false;
			this->btnAlterarQuantidade->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarQuantidade_Click);
			// 
			// btnRemover
			// 
			this->btnRemover->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnRemover->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemover->Location = System::Drawing::Point(347, 293);
			this->btnRemover->Margin = System::Windows::Forms::Padding(4);
			this->btnRemover->Name = L"btnRemover";
			this->btnRemover->Size = System::Drawing::Size(471, 65);
			this->btnRemover->TabIndex = 3;
			this->btnRemover->Text = L"Remover produto";
			this->btnRemover->UseVisualStyleBackColor = false;
			this->btnRemover->Click += gcnew System::EventHandler(this, &frmMenu::btnRemover_Click);
			// 
			// btnExibirProduto
			// 
			this->btnExibirProduto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExibirProduto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirProduto->Location = System::Drawing::Point(347, 366);
			this->btnExibirProduto->Margin = System::Windows::Forms::Padding(4);
			this->btnExibirProduto->Name = L"btnExibirProduto";
			this->btnExibirProduto->Size = System::Drawing::Size(471, 65);
			this->btnExibirProduto->TabIndex = 4;
			this->btnExibirProduto->Text = L"Exibir produto";
			this->btnExibirProduto->UseVisualStyleBackColor = false;
			this->btnExibirProduto->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProduto_Click);
			// 
			// btnExibirEstoque
			// 
			this->btnExibirEstoque->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExibirEstoque->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExibirEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirEstoque->Location = System::Drawing::Point(347, 438);
			this->btnExibirEstoque->Margin = System::Windows::Forms::Padding(4);
			this->btnExibirEstoque->Name = L"btnExibirEstoque";
			this->btnExibirEstoque->Size = System::Drawing::Size(471, 65);
			this->btnExibirEstoque->TabIndex = 5;
			this->btnExibirEstoque->Text = L"Exibir estoque";
			this->btnExibirEstoque->UseVisualStyleBackColor = false;
			this->btnExibirEstoque->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirEstoque_Click);
			// 
			// btnSair
			// 
			this->btnSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSair->Location = System::Drawing::Point(999, 570);
			this->btnSair->Margin = System::Windows::Forms::Padding(4);
			this->btnSair->Name = L"btnSair";
			this->btnSair->Size = System::Drawing::Size(121, 46);
			this->btnSair->TabIndex = 6;
			this->btnSair->Text = L"Sair";
			this->btnSair->UseVisualStyleBackColor = false;
			this->btnSair->Click += gcnew System::EventHandler(this, &frmMenu::btnSair_Click);
			// 
			// pnlAdicionar
			// 
			this->pnlAdicionar->Controls->Add(this->lblResultado);
			this->pnlAdicionar->Controls->Add(this->txtQuantidade);
			this->pnlAdicionar->Controls->Add(this->txtPreco);
			this->pnlAdicionar->Controls->Add(this->txtNome);
			this->pnlAdicionar->Controls->Add(this->lblPreco);
			this->pnlAdicionar->Controls->Add(this->lblQuantidade);
			this->pnlAdicionar->Controls->Add(this->lblNome);
			this->pnlAdicionar->Controls->Add(this->btnAdicionarPanel);
			this->pnlAdicionar->Controls->Add(this->lblAdicionar);
			this->pnlAdicionar->Controls->Add(this->btnAdicionarSair);
			this->pnlAdicionar->Location = System::Drawing::Point(32, 81);
			this->pnlAdicionar->Margin = System::Windows::Forms::Padding(4);
			this->pnlAdicionar->Name = L"pnlAdicionar";
			this->pnlAdicionar->Size = System::Drawing::Size(177, 92);
			this->pnlAdicionar->TabIndex = 30;
			// 
			// lblResultado
			// 
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(320, 442);
			this->lblResultado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(589, 44);
			this->lblResultado->TabIndex = 25;
			this->lblResultado->Text = L"Resultado";
			this->lblResultado->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultado->Visible = false;
			// 
			// txtQuantidade
			// 
			this->txtQuantidade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuantidade->Location = System::Drawing::Point(467, 271);
			this->txtQuantidade->Margin = System::Windows::Forms::Padding(4);
			this->txtQuantidade->Name = L"txtQuantidade";
			this->txtQuantidade->Size = System::Drawing::Size(297, 34);
			this->txtQuantidade->TabIndex = 2;
			// 
			// txtPreco
			// 
			this->txtPreco->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPreco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPreco->Location = System::Drawing::Point(467, 214);
			this->txtPreco->Margin = System::Windows::Forms::Padding(4);
			this->txtPreco->Name = L"txtPreco";
			this->txtPreco->Size = System::Drawing::Size(297, 34);
			this->txtPreco->TabIndex = 1;
			// 
			// txtNome
			// 
			this->txtNome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(467, 156);
			this->txtNome->Margin = System::Windows::Forms::Padding(4);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(297, 34);
			this->txtNome->TabIndex = 0;
			// 
			// lblPreco
			// 
			this->lblPreco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreco->Location = System::Drawing::Point(353, 214);
			this->lblPreco->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPreco->Name = L"lblPreco";
			this->lblPreco->Size = System::Drawing::Size(105, 36);
			this->lblPreco->TabIndex = 21;
			this->lblPreco->Text = L"Preço:";
			this->lblPreco->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuantidade
			// 
			this->lblQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuantidade->Location = System::Drawing::Point(280, 272);
			this->lblQuantidade->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuantidade->Name = L"lblQuantidade";
			this->lblQuantidade->Size = System::Drawing::Size(179, 36);
			this->lblQuantidade->TabIndex = 20;
			this->lblQuantidade->Text = L"Quantidade:";
			this->lblQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNome
			// 
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(353, 156);
			this->lblNome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNome->Name = L"lblNome";
			this->lblNome->Size = System::Drawing::Size(105, 36);
			this->lblNome->TabIndex = 19;
			this->lblNome->Text = L"Nome:";
			this->lblNome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAdicionarPanel
			// 
			this->btnAdicionarPanel->BackColor = System::Drawing::Color::Cyan;
			this->btnAdicionarPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdicionarPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionarPanel->Location = System::Drawing::Point(488, 345);
			this->btnAdicionarPanel->Margin = System::Windows::Forms::Padding(4);
			this->btnAdicionarPanel->Name = L"btnAdicionarPanel";
			this->btnAdicionarPanel->Size = System::Drawing::Size(253, 49);
			this->btnAdicionarPanel->TabIndex = 3;
			this->btnAdicionarPanel->Text = L"Adicionar produto";
			this->btnAdicionarPanel->UseVisualStyleBackColor = false;
			this->btnAdicionarPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionarPanel_Click);
			// 
			// lblAdicionar
			// 
			this->lblAdicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdicionar->Location = System::Drawing::Point(332, 49);
			this->lblAdicionar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAdicionar->Name = L"lblAdicionar";
			this->lblAdicionar->Size = System::Drawing::Size(533, 74);
			this->lblAdicionar->TabIndex = 0;
			this->lblAdicionar->Text = L"Adicionar produto";
			this->lblAdicionar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAdicionarSair
			// 
			this->btnAdicionarSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAdicionarSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdicionarSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionarSair->Location = System::Drawing::Point(999, 570);
			this->btnAdicionarSair->Margin = System::Windows::Forms::Padding(4);
			this->btnAdicionarSair->Name = L"btnAdicionarSair";
			this->btnAdicionarSair->Size = System::Drawing::Size(121, 46);
			this->btnAdicionarSair->TabIndex = 4;
			this->btnAdicionarSair->Text = L"Voltar";
			this->btnAdicionarSair->UseVisualStyleBackColor = false;
			this->btnAdicionarSair->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionarSair_Click);
			// 
			// pnlAlterarQuantidade
			// 
			this->pnlAlterarQuantidade->Controls->Add(this->lblResultadoQuantidade);
			this->pnlAlterarQuantidade->Controls->Add(this->txtNomeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->txtQuantidadeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->lblQuantidadeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->lblNomeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->btnAlterarPanel);
			this->pnlAlterarQuantidade->Controls->Add(this->lblAlterarQuantidade);
			this->pnlAlterarQuantidade->Controls->Add(this->btnAlterarQuantidadeSair);
			this->pnlAlterarQuantidade->Location = System::Drawing::Point(32, 181);
			this->pnlAlterarQuantidade->Margin = System::Windows::Forms::Padding(4);
			this->pnlAlterarQuantidade->Name = L"pnlAlterarQuantidade";
			this->pnlAlterarQuantidade->Size = System::Drawing::Size(177, 92);
			this->pnlAlterarQuantidade->TabIndex = 30;
			// 
			// lblResultadoQuantidade
			// 
			this->lblResultadoQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoQuantidade->Location = System::Drawing::Point(333, 401);
			this->lblResultadoQuantidade->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResultadoQuantidade->Name = L"lblResultadoQuantidade";
			this->lblResultadoQuantidade->Size = System::Drawing::Size(535, 36);
			this->lblResultadoQuantidade->TabIndex = 29;
			this->lblResultadoQuantidade->Text = L"Resultado";
			this->lblResultadoQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoQuantidade->Visible = false;
			// 
			// txtNomeAlterar
			// 
			this->txtNomeAlterar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNomeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeAlterar->Location = System::Drawing::Point(449, 156);
			this->txtNomeAlterar->Margin = System::Windows::Forms::Padding(4);
			this->txtNomeAlterar->Name = L"txtNomeAlterar";
			this->txtNomeAlterar->Size = System::Drawing::Size(307, 34);
			this->txtNomeAlterar->TabIndex = 0;
			// 
			// txtQuantidadeAlterar
			// 
			this->txtQuantidadeAlterar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtQuantidadeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtQuantidadeAlterar->Location = System::Drawing::Point(449, 209);
			this->txtQuantidadeAlterar->Margin = System::Windows::Forms::Padding(4);
			this->txtQuantidadeAlterar->Name = L"txtQuantidadeAlterar";
			this->txtQuantidadeAlterar->Size = System::Drawing::Size(307, 34);
			this->txtQuantidadeAlterar->TabIndex = 1;
			// 
			// lblQuantidadeAlterar
			// 
			this->lblQuantidadeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuantidadeAlterar->Location = System::Drawing::Point(207, 209);
			this->lblQuantidadeAlterar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuantidadeAlterar->Name = L"lblQuantidadeAlterar";
			this->lblQuantidadeAlterar->Size = System::Drawing::Size(235, 36);
			this->lblQuantidadeAlterar->TabIndex = 28;
			this->lblQuantidadeAlterar->Text = L"Nova quantidade:";
			this->lblQuantidadeAlterar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNomeAlterar
			// 
			this->lblNomeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomeAlterar->Location = System::Drawing::Point(336, 156);
			this->lblNomeAlterar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomeAlterar->Name = L"lblNomeAlterar";
			this->lblNomeAlterar->Size = System::Drawing::Size(105, 36);
			this->lblNomeAlterar->TabIndex = 27;
			this->lblNomeAlterar->Text = L"Nome:";
			this->lblNomeAlterar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAlterarPanel
			// 
			this->btnAlterarPanel->BackColor = System::Drawing::Color::Aqua;
			this->btnAlterarPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAlterarPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAlterarPanel->Location = System::Drawing::Point(475, 295);
			this->btnAlterarPanel->Margin = System::Windows::Forms::Padding(4);
			this->btnAlterarPanel->Name = L"btnAlterarPanel";
			this->btnAlterarPanel->Size = System::Drawing::Size(265, 49);
			this->btnAlterarPanel->TabIndex = 2;
			this->btnAlterarPanel->Text = L"Alterar quantidade";
			this->btnAlterarPanel->UseVisualStyleBackColor = false;
			this->btnAlterarPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarPanel_Click);
			// 
			// lblAlterarQuantidade
			// 
			this->lblAlterarQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlterarQuantidade->Location = System::Drawing::Point(328, 47);
			this->lblAlterarQuantidade->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAlterarQuantidade->Name = L"lblAlterarQuantidade";
			this->lblAlterarQuantidade->Size = System::Drawing::Size(533, 74);
			this->lblAlterarQuantidade->TabIndex = 25;
			this->lblAlterarQuantidade->Text = L"Alterar quantidade";
			this->lblAlterarQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAlterarQuantidadeSair
			// 
			this->btnAlterarQuantidadeSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAlterarQuantidadeSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAlterarQuantidadeSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAlterarQuantidadeSair->Location = System::Drawing::Point(999, 570);
			this->btnAlterarQuantidadeSair->Margin = System::Windows::Forms::Padding(4);
			this->btnAlterarQuantidadeSair->Name = L"btnAlterarQuantidadeSair";
			this->btnAlterarQuantidadeSair->Size = System::Drawing::Size(121, 46);
			this->btnAlterarQuantidadeSair->TabIndex = 3;
			this->btnAlterarQuantidadeSair->Text = L"Voltar";
			this->btnAlterarQuantidadeSair->UseVisualStyleBackColor = false;
			this->btnAlterarQuantidadeSair->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarQuantidadeSair_Click);
			// 
			// pnlRemover
			// 
			this->pnlRemover->Controls->Add(this->lblResultadoRemover);
			this->pnlRemover->Controls->Add(this->txtNomeRemover);
			this->pnlRemover->Controls->Add(this->lblRemoverNome);
			this->pnlRemover->Controls->Add(this->btnRemoverPanel);
			this->pnlRemover->Controls->Add(this->lblRemover);
			this->pnlRemover->Controls->Add(this->btnRemoverSair);
			this->pnlRemover->Location = System::Drawing::Point(32, 281);
			this->pnlRemover->Margin = System::Windows::Forms::Padding(4);
			this->pnlRemover->Name = L"pnlRemover";
			this->pnlRemover->Size = System::Drawing::Size(177, 92);
			this->pnlRemover->TabIndex = 30;
			// 
			// lblResultadoRemover
			// 
			this->lblResultadoRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultadoRemover->Location = System::Drawing::Point(364, 366);
			this->lblResultadoRemover->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResultadoRemover->Name = L"lblResultadoRemover";
			this->lblResultadoRemover->Size = System::Drawing::Size(496, 36);
			this->lblResultadoRemover->TabIndex = 37;
			this->lblResultadoRemover->Text = L"Resultado";
			this->lblResultadoRemover->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoRemover->Visible = false;
			// 
			// txtNomeRemover
			// 
			this->txtNomeRemover->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNomeRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeRemover->Location = System::Drawing::Point(500, 171);
			this->txtNomeRemover->Margin = System::Windows::Forms::Padding(4);
			this->txtNomeRemover->Name = L"txtNomeRemover";
			this->txtNomeRemover->Size = System::Drawing::Size(297, 34);
			this->txtNomeRemover->TabIndex = 0;
			// 
			// lblRemoverNome
			// 
			this->lblRemoverNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemoverNome->Location = System::Drawing::Point(387, 171);
			this->lblRemoverNome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRemoverNome->Name = L"lblRemoverNome";
			this->lblRemoverNome->Size = System::Drawing::Size(105, 36);
			this->lblRemoverNome->TabIndex = 36;
			this->lblRemoverNome->Text = L"Nome:";
			this->lblRemoverNome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRemoverPanel
			// 
			this->btnRemoverPanel->BackColor = System::Drawing::Color::Cyan;
			this->btnRemoverPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemoverPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemoverPanel->Location = System::Drawing::Point(500, 245);
			this->btnRemoverPanel->Margin = System::Windows::Forms::Padding(4);
			this->btnRemoverPanel->Name = L"btnRemoverPanel";
			this->btnRemoverPanel->Size = System::Drawing::Size(265, 49);
			this->btnRemoverPanel->TabIndex = 1;
			this->btnRemoverPanel->Text = L"Remover produto";
			this->btnRemoverPanel->UseVisualStyleBackColor = false;
			this->btnRemoverPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnRemoverPanel_Click);
			// 
			// lblRemover
			// 
			this->lblRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemover->Location = System::Drawing::Point(335, 49);
			this->lblRemover->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRemover->Name = L"lblRemover";
			this->lblRemover->Size = System::Drawing::Size(533, 74);
			this->lblRemover->TabIndex = 0;
			this->lblRemover->Text = L"Remover produto";
			this->lblRemover->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRemoverSair
			// 
			this->btnRemoverSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnRemoverSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemoverSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemoverSair->Location = System::Drawing::Point(999, 570);
			this->btnRemoverSair->Margin = System::Windows::Forms::Padding(4);
			this->btnRemoverSair->Name = L"btnRemoverSair";
			this->btnRemoverSair->Size = System::Drawing::Size(121, 46);
			this->btnRemoverSair->TabIndex = 2;
			this->btnRemoverSair->Text = L"Voltar";
			this->btnRemoverSair->UseVisualStyleBackColor = false;
			this->btnRemoverSair->Click += gcnew System::EventHandler(this, &frmMenu::btnRemoverSair_Click);
			// 
			// pnlExibirProduto
			// 
			this->pnlExibirProduto->Controls->Add(this->lblResultadoProduto);
			this->pnlExibirProduto->Controls->Add(this->gpbExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->txtNomeExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->lblNomeExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->btnExibirProdutoPanel);
			this->pnlExibirProduto->Controls->Add(this->lblExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->btnExibirProdutoSair);
			this->pnlExibirProduto->Location = System::Drawing::Point(32, 380);
			this->pnlExibirProduto->Margin = System::Windows::Forms::Padding(4);
			this->pnlExibirProduto->Name = L"pnlExibirProduto";
			this->pnlExibirProduto->Size = System::Drawing::Size(177, 92);
			this->pnlExibirProduto->TabIndex = 30;
			// 
			// lblResultadoProduto
			// 
			this->lblResultadoProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultadoProduto->Location = System::Drawing::Point(329, 277);
			this->lblResultadoProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResultadoProduto->Name = L"lblResultadoProduto";
			this->lblResultadoProduto->Size = System::Drawing::Size(533, 36);
			this->lblResultadoProduto->TabIndex = 37;
			this->lblResultadoProduto->Text = L"Resultado";
			this->lblResultadoProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoProduto->Visible = false;
			// 
			// gpbExibirProduto
			// 
			this->gpbExibirProduto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gpbExibirProduto->Controls->Add(this->lblExibeQuantidade);
			this->gpbExibirProduto->Controls->Add(this->lblExibePreco);
			this->gpbExibirProduto->Controls->Add(this->lblExibeNome);
			this->gpbExibirProduto->Controls->Add(this->lblQuantidadeGPBProduto);
			this->gpbExibirProduto->Controls->Add(this->lblPrecoGPBProduto);
			this->gpbExibirProduto->Controls->Add(this->lblNomeGPBProduto);
			this->gpbExibirProduto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gpbExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbExibirProduto->Location = System::Drawing::Point(332, 332);
			this->gpbExibirProduto->Margin = System::Windows::Forms::Padding(4);
			this->gpbExibirProduto->Name = L"gpbExibirProduto";
			this->gpbExibirProduto->Padding = System::Windows::Forms::Padding(4);
			this->gpbExibirProduto->Size = System::Drawing::Size(531, 222);
			this->gpbExibirProduto->TabIndex = 21;
			this->gpbExibirProduto->TabStop = false;
			this->gpbExibirProduto->Text = L"Dados do produto";
			// 
			// lblExibeQuantidade
			// 
			this->lblExibeQuantidade->AutoSize = true;
			this->lblExibeQuantidade->Location = System::Drawing::Point(176, 162);
			this->lblExibeQuantidade->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblExibeQuantidade->Name = L"lblExibeQuantidade";
			this->lblExibeQuantidade->Size = System::Drawing::Size(143, 29);
			this->lblExibeQuantidade->TabIndex = 5;
			this->lblExibeQuantidade->Text = L"quantidade";
			// 
			// lblExibePreco
			// 
			this->lblExibePreco->AutoSize = true;
			this->lblExibePreco->Location = System::Drawing::Point(176, 113);
			this->lblExibePreco->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblExibePreco->Name = L"lblExibePreco";
			this->lblExibePreco->Size = System::Drawing::Size(80, 29);
			this->lblExibePreco->TabIndex = 4;
			this->lblExibePreco->Text = L"preço";
			// 
			// lblExibeNome
			// 
			this->lblExibeNome->AutoSize = true;
			this->lblExibeNome->Location = System::Drawing::Point(176, 59);
			this->lblExibeNome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblExibeNome->Name = L"lblExibeNome";
			this->lblExibeNome->Size = System::Drawing::Size(78, 29);
			this->lblExibeNome->TabIndex = 3;
			this->lblExibeNome->Text = L"nome";
			// 
			// lblQuantidadeGPBProduto
			// 
			this->lblQuantidadeGPBProduto->AutoSize = true;
			this->lblQuantidadeGPBProduto->Location = System::Drawing::Point(17, 162);
			this->lblQuantidadeGPBProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuantidadeGPBProduto->Name = L"lblQuantidadeGPBProduto";
			this->lblQuantidadeGPBProduto->Size = System::Drawing::Size(155, 29);
			this->lblQuantidadeGPBProduto->TabIndex = 2;
			this->lblQuantidadeGPBProduto->Text = L"Quantidade:";
			// 
			// lblPrecoGPBProduto
			// 
			this->lblPrecoGPBProduto->AutoSize = true;
			this->lblPrecoGPBProduto->Location = System::Drawing::Point(81, 112);
			this->lblPrecoGPBProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrecoGPBProduto->Name = L"lblPrecoGPBProduto";
			this->lblPrecoGPBProduto->Size = System::Drawing::Size(89, 29);
			this->lblPrecoGPBProduto->TabIndex = 1;
			this->lblPrecoGPBProduto->Text = L"Preço:";
			// 
			// lblNomeGPBProduto
			// 
			this->lblNomeGPBProduto->AutoSize = true;
			this->lblNomeGPBProduto->Location = System::Drawing::Point(79, 59);
			this->lblNomeGPBProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomeGPBProduto->Name = L"lblNomeGPBProduto";
			this->lblNomeGPBProduto->Size = System::Drawing::Size(90, 29);
			this->lblNomeGPBProduto->TabIndex = 0;
			this->lblNomeGPBProduto->Text = L"Nome:";
			// 
			// txtNomeExibirProduto
			// 
			this->txtNomeExibirProduto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNomeExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtNomeExibirProduto->Location = System::Drawing::Point(463, 137);
			this->txtNomeExibirProduto->Margin = System::Windows::Forms::Padding(4);
			this->txtNomeExibirProduto->Name = L"txtNomeExibirProduto";
			this->txtNomeExibirProduto->Size = System::Drawing::Size(297, 34);
			this->txtNomeExibirProduto->TabIndex = 0;
			// 
			// lblNomeExibirProduto
			// 
			this->lblNomeExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomeExibirProduto->Location = System::Drawing::Point(349, 137);
			this->lblNomeExibirProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomeExibirProduto->Name = L"lblNomeExibirProduto";
			this->lblNomeExibirProduto->Size = System::Drawing::Size(105, 36);
			this->lblNomeExibirProduto->TabIndex = 36;
			this->lblNomeExibirProduto->Text = L"Nome:";
			this->lblNomeExibirProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibirProdutoPanel
			// 
			this->btnExibirProdutoPanel->BackColor = System::Drawing::Color::Cyan;
			this->btnExibirProdutoPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExibirProdutoPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirProdutoPanel->Location = System::Drawing::Point(477, 201);
			this->btnExibirProdutoPanel->Margin = System::Windows::Forms::Padding(4);
			this->btnExibirProdutoPanel->Name = L"btnExibirProdutoPanel";
			this->btnExibirProdutoPanel->Size = System::Drawing::Size(265, 49);
			this->btnExibirProdutoPanel->TabIndex = 1;
			this->btnExibirProdutoPanel->Text = L"Exibir produto";
			this->btnExibirProdutoPanel->UseVisualStyleBackColor = false;
			this->btnExibirProdutoPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProdutoPanel_Click);
			// 
			// lblExibirProduto
			// 
			this->lblExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExibirProduto->Location = System::Drawing::Point(315, 37);
			this->lblExibirProduto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblExibirProduto->Name = L"lblExibirProduto";
			this->lblExibirProduto->Size = System::Drawing::Size(533, 74);
			this->lblExibirProduto->TabIndex = 34;
			this->lblExibirProduto->Text = L"Exibir produto";
			this->lblExibirProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibirProdutoSair
			// 
			this->btnExibirProdutoSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExibirProdutoSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExibirProdutoSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirProdutoSair->Location = System::Drawing::Point(999, 570);
			this->btnExibirProdutoSair->Margin = System::Windows::Forms::Padding(4);
			this->btnExibirProdutoSair->Name = L"btnExibirProdutoSair";
			this->btnExibirProdutoSair->Size = System::Drawing::Size(121, 46);
			this->btnExibirProdutoSair->TabIndex = 2;
			this->btnExibirProdutoSair->Text = L"Voltar";
			this->btnExibirProdutoSair->UseVisualStyleBackColor = false;
			this->btnExibirProdutoSair->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProdutoSair_Click);
			// 
			// pnlExibirEstoque
			// 
			this->pnlExibirEstoque->Controls->Add(this->lblTotal);
			this->pnlExibirEstoque->Controls->Add(this->lblExibirEstoque);
			this->pnlExibirEstoque->Controls->Add(this->btnExibeEstoqueSair);
			this->pnlExibirEstoque->Controls->Add(this->dgvEstoque);
			this->pnlExibirEstoque->Controls->Add(this->lblEstoqueVazio);
			this->pnlExibirEstoque->Location = System::Drawing::Point(32, 480);
			this->pnlExibirEstoque->Margin = System::Windows::Forms::Padding(4);
			this->pnlExibirEstoque->Name = L"pnlExibirEstoque";
			this->pnlExibirEstoque->Size = System::Drawing::Size(177, 92);
			this->pnlExibirEstoque->TabIndex = 30;
			// 
			// lblTotal
			// 
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(297, 81);
			this->lblTotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(607, 49);
			this->lblTotal->TabIndex = 36;
			this->lblTotal->Text = L"Total de produtos no estoque: 0";
			this->lblTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblExibirEstoque
			// 
			this->lblExibirEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExibirEstoque->Location = System::Drawing::Point(351, 22);
			this->lblExibirEstoque->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblExibirEstoque->Name = L"lblExibirEstoque";
			this->lblExibirEstoque->Size = System::Drawing::Size(499, 57);
			this->lblExibirEstoque->TabIndex = 0;
			this->lblExibirEstoque->Text = L"Exibir estoque";
			this->lblExibirEstoque->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibeEstoqueSair
			// 
			this->btnExibeEstoqueSair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExibeEstoqueSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExibeEstoqueSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibeEstoqueSair->Location = System::Drawing::Point(999, 570);
			this->btnExibeEstoqueSair->Margin = System::Windows::Forms::Padding(4);
			this->btnExibeEstoqueSair->Name = L"btnExibeEstoqueSair";
			this->btnExibeEstoqueSair->Size = System::Drawing::Size(121, 46);
			this->btnExibeEstoqueSair->TabIndex = 2;
			this->btnExibeEstoqueSair->Text = L"Voltar";
			this->btnExibeEstoqueSair->UseVisualStyleBackColor = false;
			this->btnExibeEstoqueSair->Click += gcnew System::EventHandler(this, &frmMenu::btnExibeEstoqueSair_Click);
			// 
			// dgvEstoque
			// 
			this->dgvEstoque->AllowUserToAddRows = false;
			this->dgvEstoque->AllowUserToDeleteRows = false;
			this->dgvEstoque->AllowUserToResizeColumns = false;
			this->dgvEstoque->AllowUserToResizeRows = false;
			this->dgvEstoque->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvEstoque->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvEstoque->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvEstoque->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvEstoque->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvEstoque->Location = System::Drawing::Point(161, 146);
			this->dgvEstoque->Margin = System::Windows::Forms::Padding(4);
			this->dgvEstoque->Name = L"dgvEstoque";
			this->dgvEstoque->ReadOnly = true;
			this->dgvEstoque->RowHeadersWidth = 51;
			this->dgvEstoque->Size = System::Drawing::Size(865, 400);
			this->dgvEstoque->TabIndex = 1;
			// 
			// lblEstoqueVazio
			// 
			this->lblEstoqueVazio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstoqueVazio->ForeColor = System::Drawing::Color::Magenta;
			this->lblEstoqueVazio->Location = System::Drawing::Point(347, 311);
			this->lblEstoqueVazio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEstoqueVazio->Name = L"lblEstoqueVazio";
			this->lblEstoqueVazio->Size = System::Drawing::Size(496, 71);
			this->lblEstoqueVazio->TabIndex = 35;
			this->lblEstoqueVazio->Text = L"Estoque vazio!";
			this->lblEstoqueVazio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEstoqueVazio->Visible = false;
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1136, 630);
			this->Controls->Add(this->pnlExibirEstoque);
			this->Controls->Add(this->pnlRemover);
			this->Controls->Add(this->pnlAlterarQuantidade);
			this->Controls->Add(this->pnlAdicionar);
			this->Controls->Add(this->pnlExibirProduto);
			this->Controls->Add(this->btnExibirProduto);
			this->Controls->Add(this->btnRemover);
			this->Controls->Add(this->btnAlterarQuantidade);
			this->Controls->Add(this->btnAdicionar);
			this->Controls->Add(this->lblEstoque);
			this->Controls->Add(this->btnSair);
			this->Controls->Add(this->btnExibirEstoque);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Controle de Estoque - Supermercado";
			this->Load += gcnew System::EventHandler(this, &frmMenu::frmMenu_Load);
			this->pnlAdicionar->ResumeLayout(false);
			this->pnlAdicionar->PerformLayout();
			this->pnlAlterarQuantidade->ResumeLayout(false);
			this->pnlAlterarQuantidade->PerformLayout();
			this->pnlRemover->ResumeLayout(false);
			this->pnlRemover->PerformLayout();
			this->pnlExibirProduto->ResumeLayout(false);
			this->pnlExibirProduto->PerformLayout();
			this->gpbExibirProduto->ResumeLayout(false);
			this->gpbExibirProduto->PerformLayout();
			this->pnlExibirEstoque->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstoque))->EndInit();
			this->ResumeLayout(false);

		}
		#pragma endregion

		private: System::Void frmMenu_Load(System::Object^ sender, System::EventArgs^ e) {
			this->ActiveControl = lblEstoque;
		}

		private: void habilitaBotoesMenu(bool habilita) {
			if (habilita) {
				btnAdicionar->Enabled = true;
				btnAlterarQuantidade->Enabled = true;
				btnRemover->Enabled = true;
				btnExibirProduto->Enabled = true;
				btnExibirEstoque->Enabled = true;
				btnSair->Enabled = true;
			} else {
				btnAdicionar->Enabled = false;
				btnAlterarQuantidade->Enabled = false;
				btnRemover->Enabled = false;
				btnExibirProduto->Enabled = false;
				btnExibirEstoque->Enabled = false;
				btnSair->Enabled = false;
			}
		}

		private: System::Void btnAdicionar_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(false);

			pnlAdicionar->Dock = DockStyle::Fill;
			pnlAdicionar->Show();

			txtNome->Focus();
		}

		private: void limpaAdicionar() {
			txtNome->Text = "";
			txtPreco->Text = "";
			txtQuantidade->Text = "";
		}

		private: System::Void btnAdicionarPanel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrWhiteSpace(txtNome->Text)) {
				MessageBox::Show("O nome do produto precisa ser informado!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtNome->Focus();
				return;
			}

			if (String::IsNullOrWhiteSpace(txtPreco->Text)) {
				MessageBox::Show("O preço do produto precisa ser informado!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtPreco->Focus();
				return;
			}

			if (String::IsNullOrWhiteSpace(txtQuantidade->Text)) {
				MessageBox::Show("A quantidade do produto precisa ser informada!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtQuantidade->Focus();
				return;
			}

			Produto produto;
			double preco;
			int quantidade;
			bool ok;

			if (Double::TryParse(txtPreco->Text, preco)) {
				produto.preco = preco;
			} else {
				MessageBox::Show("Preço de produto inválido!", "Controle de Estoque - Supermercado", 
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				txtPreco->Focus();
				return;
			}
			
			if (INT::TryParse(txtQuantidade->Text, quantidade)) {
				produto.quantidade = quantidade;
			} else {
				MessageBox::Show("Quantidade de produto inválida!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				txtQuantidade->Focus();
				return;
			}

			msclr::interop::marshal_context context;
			produto.nome = context.marshal_as<std::string>(txtNome->Text);
			
			insere(&estoque, produto, &ok);

			lblResultado->Visible = true;

			if (ok) {
				limpaAdicionar();
				txtNome->Focus();
				lblResultado->ForeColor = System::Drawing::Color::DarkCyan;
				lblResultado->Text = "Produto adicionado com sucesso!";
			} else {
				limpaAdicionar();
				txtNome->Focus();
				lblResultado->ForeColor= System::Drawing::Color::Magenta;
				lblResultado->Text = "Falha ao adicionar o produto";
			}
		}

		private: System::Void btnAdicionarSair_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(true);
			pnlAdicionar->Hide();
			limpaAdicionar();
			lblResultado->Visible = false;

			this->Show();
		}

		private: System::Void btnAlterarQuantidade_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(false);

			pnlAlterarQuantidade->Dock = DockStyle::Fill;
			pnlAlterarQuantidade->Show();

			txtNomeAlterar->Focus();
		}

		private: System::Void btnAlterarPanel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrWhiteSpace(txtNomeAlterar->Text)) {
				MessageBox::Show("O nome do produto precisa ser informado!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtNomeAlterar->Focus();
				return;
			}

			if (String::IsNullOrWhiteSpace(txtQuantidadeAlterar->Text)) {
				MessageBox::Show("A quantidade a ser alterada precisa ser informada!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtQuantidadeAlterar->Focus();
				return;
			}

			int quantidade;

			if (!INT::TryParse(txtQuantidadeAlterar->Text, quantidade)) {
				MessageBox::Show("Quantidade de produto inválida!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				txtQuantidadeAlterar->Focus();
				return;
			}

			msclr::interop::marshal_context context;
			std::string nome = context.marshal_as<std::string>(txtNomeAlterar->Text);
			bool ok;

			altera_quantidade(&estoque, nome, quantidade, &ok);

			lblResultadoQuantidade->Visible = true;

			if (ok) {
				txtNomeAlterar->Text = "";
				txtQuantidadeAlterar->Text = "";
				txtNomeAlterar->Focus();
				lblResultadoQuantidade->ForeColor = System::Drawing::Color::DarkCyan;
				lblResultadoQuantidade->Text = "Quantidade alterada com sucesso!";;
			} else {
				txtNomeAlterar->Text = "";
				txtQuantidadeAlterar->Text = "";
				txtNomeAlterar->Focus();
				lblResultadoQuantidade->ForeColor = System::Drawing::Color::Magenta;
				lblResultadoQuantidade->Text = "Falha ao alterar a quantidade";
			}
		}

		private: System::Void btnAlterarQuantidadeSair_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(true);
			pnlAlterarQuantidade->Hide();

			txtNomeAlterar->Text = "";
			txtQuantidadeAlterar->Text = "";
			lblResultadoQuantidade->Visible = false;

			this->Show();
		}

		private: System::Void btnRemover_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(false);
			
			pnlRemover->Dock = DockStyle::Fill;
			pnlRemover->Show();

			txtNomeRemover->Focus();
		}

		private: System::Void btnRemoverPanel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrWhiteSpace(txtNomeRemover->Text)) {
				MessageBox::Show("O nome do produto precisa ser informado!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtNomeRemover->Focus();
				return;
			}

			msclr::interop::marshal_context context;
			std::string nome = context.marshal_as<std::string>(txtNomeRemover->Text);
			bool ok;

			retira(&estoque, nome, &ok);

			lblResultadoRemover->Visible = true;

			if (ok) {
				txtNomeRemover->Text = "";
				txtNomeRemover->Focus();
				lblResultadoRemover->ForeColor = System::Drawing::Color::DarkCyan;
				lblResultadoRemover->Text = "Produto removido com sucesso!";;
			} else {
				txtNomeRemover->Text = "";
				txtNomeRemover->Focus();
				lblResultadoRemover->ForeColor = System::Drawing::Color::Magenta;
				lblResultadoRemover->Text = "Falha ao remover o produto";
			}
		}

		private: System::Void btnRemoverSair_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(true);
			pnlRemover->Hide();

			txtNomeRemover->Text = "";
			lblResultadoRemover->Visible = false;

			this->Show();
		}

		private: System::Void btnExibirProduto_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(false);

			pnlExibirProduto->Dock = DockStyle::Fill;
			pnlExibirProduto->Show();

			txtNomeExibirProduto->Focus();
		}

		private: System::Void btnExibirProdutoPanel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrWhiteSpace(txtNomeExibirProduto->Text)) {
				MessageBox::Show("O nome do produto precisa ser informado!", "Controle de Estoque - Supermercado",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				txtNomeExibirProduto->Focus();
				return;
			}

			msclr::interop::marshal_context context;
			std::string nome = context.marshal_as<std::string>(txtNomeExibirProduto->Text);
			bool ok;

			ProdutoPtr produto = retorna_produto(&estoque, nome, &ok);

			lblResultadoProduto->Visible = true;

			if (ok) {
				txtNomeExibirProduto->Text = "";
				txtNomeExibirProduto->Focus();

				gpbExibirProduto->Visible = true;
				lblResultadoProduto->ForeColor = System::Drawing::Color::DarkCyan;
				lblResultadoProduto->Text = "Produto econtrado no estoque!";

				lblExibeNome->Text = gcnew String(produto->nome.c_str());
				lblExibePreco->Text = Convert::ToString(produto->preco);
				lblExibeQuantidade->Text = Convert::ToString(produto->quantidade);
			} else {
				txtNomeExibirProduto->Text = "";
				txtNomeExibirProduto->Focus();
				
				gpbExibirProduto->Visible = false;
				lblResultadoProduto->ForeColor = System::Drawing::Color::Magenta;
				lblResultadoProduto->Text = "Produto não econtrado no estoque";
			}
		}

		private: System::Void btnExibirProdutoSair_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(true);
			pnlExibirProduto->Hide();

			txtNomeExibirProduto->Text = "";
			lblExibeNome->Text = "";
			lblExibePreco->Text = "";
			lblExibeQuantidade->Text = "";
			lblResultadoProduto->Visible = false;
			gpbExibirProduto->Visible = false;

			this->Show();
		}

		private: System::Void btnExibirEstoque_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(false);
			pnlExibirEstoque->Dock = DockStyle::Fill;
			pnlExibirEstoque->Show();
			lblExibirEstoque->Focus();

			if (vazio(&estoque)) {
				lblTotal->Text = "Total de produtos no estoque: 0";
				dgvEstoque->Visible = false;
				lblEstoqueVazio->Visible = true;
			} else {
				dgvEstoque->Visible = true;

				DataTable^ tabela = gcnew DataTable();
				tabela->Columns->Add("Nome");
				tabela->Columns->Add("Preço");
				tabela->Columns->Add("Quantidade");

				ProdutoPtr p_aux = estoque.primeiro;
				int total_produtos = 0;

				do {
					String^ nome = gcnew String(p_aux->nome.c_str());
					double preco = p_aux->preco;
					int quantidade = p_aux->quantidade;

					tabela->Rows->Add(nome, preco, quantidade);
					total_produtos++;

					p_aux = p_aux->proximo;
				} while (p_aux != NULL);

				lblTotal->Text = "Total de produtos no estoque: " + Convert::ToString(total_produtos);
				dgvEstoque->DataSource = tabela;
			}
		}

		private: System::Void btnExibeEstoqueSair_Click(System::Object^ sender, System::EventArgs^ e) {
			habilitaBotoesMenu(true);

			pnlExibirEstoque->Hide();
			this->Show();
		}

		private: System::Void btnSair_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Tem certeza que deseja finalizar o programa?", "Sair", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				this->Close();
				Application::Exit();
			}
		}
	};
}
