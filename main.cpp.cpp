#include <iostream>

using namespace std;

class Categoria{
    // Preencher
    private:
    // ************* Dados *************
    int _codigo_categoria;
    double _valor_caixa;
    
    // *********************************
    public:
    // ************* Operações *************
    
    // Construtor
    Categoria(int codigo_categoria, double valor_caixa):
         _codigo_categoria(codigo_categoria), _valor_caixa(valor_caixa)
    {}
    
    // Recupera o código correspondente a uma categoria.
    int getCodigo(){
        return _codigo_categoria;
    }
    
    // Recupera o valor em caixa de uma categoria.
    double getValorCaixa(){
        return _valor_caixa;
    }
    
    // Adiciona uma quantia ao caixa de uma categoria.
    void adicionaCaixa(double valor){
        _valor_caixa += valor;
    }
    
    // Remove uma quantia ao caixa de uma categoria.
    void gastaCaixa(double valor){
        _valor_caixa -= valor;
    }
    // *********************************
};

class Orcamento {
    // Preencher
    private:
    // ************* Dados *************
    Categoria saude;
    Categoria educacao;
    Categoria seguranca;
    Categoria previdencia;
    Categoria administracao_publica;
    // *********************************
    
    // ************* Operações *************
    public:
    // Construtor do Orçamento que deve conter um objeto categoria para cada pasta.
    // Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento.
    // Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.
   
    Orcamento(double impostos):
    saude(0, impostos*0.15),
    educacao(1, impostos*0.15),
    seguranca(2, impostos*0.20),
    previdencia(3, impostos*0.35),
    administracao_publica(4, impostos*0.15)
    {}
    
    // -----------------------------------------------------
    
    // Reduz o valor no caixa da categoria especificada.
    void gastoCategoria(int codigo_categoria, double valor){
        switch(codigo_categoria){
            case 0:
                saude.gastaCaixa(valor);
                break;
            case 1:
                educacao.gastaCaixa(valor);
                break;
            case 2:
                seguranca.gastaCaixa(valor);
                break;
            case 3:
                previdencia.gastaCaixa(valor);
                break;
            case 4:
                administracao_publica.gastaCaixa(valor);
                break;
            default:
                break;
        }
    }
    
    // Retorna o valor em caixa da categoria especificada.
    double getSaldo(int codigo_categoria){
        switch(codigo_categoria){
            case 0:
                return saude.getValorCaixa();
                break;
            case 1:
                return educacao.getValorCaixa();
                break;
            case 2:
                return seguranca.getValorCaixa();
                break;
            case 3:
                return previdencia.getValorCaixa();
                break;
            case 4:
                return administracao_publica.getValorCaixa();
                break;
            default:
                break;
        }
    }
    
    // Retorna o ponteiro para o objeto da categoria especificada.
    Categoria* getCategoria(int codigo_categoria){
        switch(codigo_categoria){
            case 0:
                return &saude;
                break;
            case 1:
                return &educacao;
                break;
            case 2:
                return &seguranca;
                break;
            case 3:
                return &previdencia;
                break;
            case 4:
                return &administracao_publica;
                break;
            default:
                return nullptr;
        }
    }
    
    // *********************************
    
};

int main() {
  Orcamento *orcamento;

  char test = 0;
  while(cin >> test) {
      switch (test) {
        case 'o': { // Inicia novo orçamento
          double valor = 0;
          cin >> valor;
          
          // PREENCHER chamada de orçamento   
          
          orcamento = new Orcamento(valor);
          
        }
        break;
        case 'g': { // Gastar em uma categoria
          int categoria = 0;
          double valor = 0.0;
          cin >> categoria >> valor;
          orcamento->gastoCategoria(categoria, valor);
          
          // PREENCHER chamada de orçamento
          
          cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
        }
        break;
        case 'p': { // Imprimir todas as categorias e seus saldos
          for (int categoria = 0; categoria < 5; categoria++) {
            cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
          }
        }
        break;
        default: {
          cout << "----------" << endl;
        } break;
      }
  }
  return 0;
}