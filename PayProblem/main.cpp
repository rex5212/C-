#include <bits/stdc++.h> // Biblioteca universal!!!

using namespace std;

// fazer o problema pagamento base e adiciona a verificação de horas trabalhadas (para fica mais exato coloca com segundos)
// terminar

int main()
{

    string nome;

    int opcao, horas, minutos, segundos;

    cout << "Escreva qual o seu nome: ";
    getline(cin, nome);

    cout << "Selecione seu cargo: " << endl << "1 - Estagiario\n2 - Coordenador\n3 - Tercerizado\n4 - Diretor" << endl;
    cin >> opcao;

    switch(opcao){
        case 1:
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            cout << "Quantos minutos voce trabalhou: ";
            cin >> minutos;
            cout << "Quantos segundos voce trabalhou: ";
            cin >> segundos;
            if(horas > 660){
                pagamento = salario;
            }
            if(horas < 660){
                horasF = 660 - horas;
                minutosF = 60 - minutos;
                segundosF = 60 - segundos;
                pagamento = salario - (((horasF * salario) / horas) + ((minutosF * (salario / 60)) / minutos) + ((segundosF * (salario % 60) / segundos));
                cout << "Falta " << horas << ":" << minutos << ":" << segundos << " para comprir a carga horaria mensal" << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
        case 2:
            cout << "Coordenador";
                break;
        case 3:
            cout << "Tercerizado";
                break;
        case 4:
            cout << "Diretor";
                break;
    }

    return 0;
}
