#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    int op;
      while (1) {
        cout << "1- Insira um novo funcionario;\n2- Consultar salario;\n3- Calcula valor total das folhas;\n"
                "0- Para finalizar\n";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Digite (1) para Assalariado;\n(2) Para Comissionado;\n(3) Para Horista\n";
                cin >> tb;
                setFuncionario(tb);
                break;
            case 2:
                int indice;
                cout << "Informe o indice do funcionario que esta procurando:\n";
                cin >> indice;
                cout << "Valor do salario: " << consultaSalarioFuncionario(indice) << "\n";

                break;
            case 3:
                cout << "\nSoma de todos os salarios: ";
                cout << calculaValorTotalFolha() << "\n";
                break;
            case 0:
                cout << "ENCERRANDO\n";
                return ;
                break;
        }
    }
}

SistemaGerenciaFolha::~SistemaGerenciaFolha(){

}

void SistemaGerenciaFolha::setFuncionario(int worker){
    this->nome;
    this->salario;
    this->matricula;
    this->indice;
    this->hora;
    this->valorDeVendas;
    this->percentual;

    cout << "1-Informe o indice:\n";
    cin >> this->indice;
    switch (this-> tb){
        case 1:
            this->f[this->indice] = new Assalariado();

            cout << "Digite o nome, salario e matricula:\n";
            cin >> nome;
            cin >> salario;
            cin >> matricula;

            this->f[this->indice]->setNome(nome);
            this->f[this->indice]->setSalario(salario);
            this->f[this->indice]->setMatricula(matricula);
            break;

        case 2:
            f[this->indice] = new Comissionado();// recebe porcentagem por venda

            cout << "Digite o nome, salario, matricula, percentual e valor de vendas:\n";
            cin >> nome;
            cin >> salario;
            cin >> matricula;
            cin >> percentual;
            cin >> valorDeVendas;

            f[this->indice]->setNome(nome);
            f[this->indice]->setSalario(salario);
            f[this->indice]->setMatricula(matricula);
            f[this->indice]->setValorDeVendas(valorDeVendas);
            f[this->indice]->setPercentual(percentual);
            break;

        case 3:
            f[this->indice] = new Horista();// recebe bonus por hora extra

            cout << "Digite o nome, salario, matricula e hora:\n";
            cin >> nome;
            cin >> salario;
            cin >> matricula;
            cin >> hora;

            f[this->indice]->setNome(nome);
            f[this->indice]->setSalario(salario);
            f[this->indice]->setMatricula(matricula);
            f[this->indice]->setHora(hora);

            break;
    }
}

double SistemaGerenciaFolha::calculaValorTotalFolha() {//
    this->indice;

    for(this->indice = 0; this->indice < 50; this->indice++){
        return f[this->indice]->calcularSalario();
    }
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int indice){

    cout << "Funcionario : " << f[this->indice]->getNome() << "\n";
    cout << "Matricula : " << f[this->indice]->getMatricula() << "\n";
    return this->f[this->indice]->calcularSalario();
}
