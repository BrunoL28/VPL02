# VPL02

Neste exercício, devemos implementar dois TADs para auxiliar na resolução do seguinte problema: Lisarb é um país que possui orçamento restrito, e diversas demandas sociais. Desta forma, seus representantes nos solicitaram construir um sistema para auxiliar na gestão dos recursos provenientes de impostos. Segundo a lei vigente, cinco categorias de gastos devem ser consideradas, sendo que cada uma delas receberá um percentual dos impostos arrecadados. 

As categorias possuem identificadores numéricos, sendo elas:

0 - Saúde

1 - Educação

2 - Segurança

3 - Previdência

4 - Administração Pública

Os percentuais recebidos por cada categoria devem ser os seguintes:

0 - Saúde - 15%

1 - Educação - 15%

2 - Segurança - 20%

3 - Previdência - 35%

4 - Administração Pública - 15%


Para realizar esta tarefa, devemos criar os tipos de dados Categoria e Orcamento.

O TAD Categoria deve possuir um código (inteiro) e o valor que esta categoria de gasto possui em caixa (double).

O TAD Orcamento deve conter as cinco categorias.


Para manipular uma categoria, será preciso implementar os seguintes métodos:

Categoria

- Categoria(int codigo_categoria, double valor_caixa): Construtor que inicializa um objeto categoria com seu código e o valor que ela deve ter em caixa para gastos com sua pasta.
- int getCodigo(): Recupera o código correspondente a uma categoria.
- double getValorCaixa(): Recupera o valor em caixa de uma categoria.
- void adicionaCaixa(double valor): Adiciona uma quantia ao caixa de uma categoria.
- void gastaCaixa(double valor): Remove uma quantia ao caixa de uma categoria.


Orcamento

- Orcamento(double impostos): Construtor que inicializa um objeto Orçamento, sendo que ele deve conter um objeto categoria para cada pasta. Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento. Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.
- void gastoCategoria(int codigo_categoria, double valor): Reduz o valor no caixa da categoria especificada.
- double getSaldo(int codigo_categoria): Retorna o valor em caixa da categoria especificada.
- Categoria* getCategoria(int codigo_categoria): Retorna o ponteiro para o objeto da categoria especificada.


Importante: Uma categoria pode ter dívidas, ou seja, seu caixa pode ser menor que zero.
