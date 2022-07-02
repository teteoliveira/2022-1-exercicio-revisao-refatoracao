**Alterações gerais:**
 - [X] Remoção da instrução:
    ```
    using namespace std
    ``` 
    não é considerado uma boa prática por possibilitar a ocorrência conflitos de nomes ao importar o namespace inteiro para o código-fonte
  - [X] Correção na formatação da definição do header para manter a padronização 
  - [X] Correção na identação, espaçamento e organização lógica dos arquivos 
  - [X] Alteração do modificador de acesso dos atributos, pois é uma boa prática mantê-los privados para evitar manipulação direta sem métodos auxiliares
  - [X] Criação de arquivos .cpp para separar a especificação das classes de sua implementação
  - [X] Método print:
    - [X] Modificações na formatação do cout
  - [X] Alteração na formatação do nome dos atributos e métodos para manter uma padronização
  - [X] Implementação de construtores para inicialização dos atributos das classe
  - [X] Remoção de includes desnecessários

**Alimentacao.hpp:**
  - [X] Correção do nome do header de Alimentacao na definição 
  - [X] Remoção dos trechos de código com comentários, pois não se adequavam ao contexto da classe em questão
  - [X] Definição dos métodos:
    ```
    Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid,
    std::string _nomeAnimal);

    void setComida(std::string _comida);
    void setPorcao(int _porcao);

    int getPorcao();
    std::string getDescricao();
    ```
    - os métodos auxiliares setComida(), setPorcao(), getPorcao() e getDescricao() evitam a manipulação direta dos atributos

**Alimentacao.cpp**
  - [X] Correção do método print: 
    - [X] Remoção do código comentado
  - [X] Implementação dos métodos adicionados ao header

**Animal.hpp**
  - [X] Remoção do método print_oi(), pois não faz sentido no contexto da classe Animal
  - [X] Alteração do modificador de acesso dos atributos para protected para que seja acessível pelas classes que herdam de Animal
  
**Animal.cpp**
  - [X] Mudança do tipo da variável idade para int
  - [X] Método print:
    - [X] Definição do método como um método virtual para que seu comportamento possa ser sobrescrito nas classes que herdam de Animal

**Cuidador.hpp**
  - [X] Inclusão da biblioteca iostream 
  - [X] Remoção do comentário do método print
  - [X] Definição do método getNome() para possibilitar o acesso ao nome do cuidador na classe Animal

**Cuidador.cpp**
  - [X] Implementação do construtor de Cuidador e do método getNome()

**Animal.hpp, Herpestidae.hpp, Ursidae.hpp**
  - [X] Definição da herança entre a superclasse Animal e as subclasses Herpestiadae.hpp e Ursidade.hpp

**Herpestidae.hpp**
  - [X] Remoção de modificadores de acesso desnecessários
  - [X] Definição do atributo quantPorcao como estático, pois esse valor não está associado a instância (objeto)

**Herpestidae.cpp**
  - [X] Criação do arquivo Herpestidae.cpp para separar a especificação da classe alimentação de sua implementação
  - [x] Mudança no nome da variável que armazena a informação da quantidade em kg consumidos de ração

**Ursidae.hpp**
  - [X] Definição do atributo peixesPorPorcao como estático, pois esse valor não está associado a instância (objeto) 

**Main.cpp**
  - [X] Remoção de variáveis que não são utilizadas:
    ```
        double kgPeixeConsumidos02 = 0;
        double kgPeixeConsumidos04 = 0;
        double kgPeixeConsumidos05 = 0;

        double kgRacaoConsumidos01 = 0;
        double kgRacaoConsumidos02 = 0;

        int numAtendimentos02 = 0;
        double comissao02 = 0;

        int numAtendimentos03 = 0;
        double comissao03 = 0;
    ```  
  - [X] Agrupamento das variáveis que armazenam os dados de um mesmo tipo em vectors
  - [X] Impressão dos dados em um foreach para evitar a repetição de código
