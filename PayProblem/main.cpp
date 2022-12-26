#include <bits/stdc++.h> // Biblioteca universal!!!

using namespace std;

// fazer o problema pagamento base e adiciona a verificação de horas trabalhadas (para fica mais exato coloca com segundos)
// terminar especificação de cada cargo (bonus do cargo) e criar a opcao de voce fazer o seu cargo

int main()
{

    string nome;

    int opcao, horas, minutos, segundos, horasF, minutosF, segundosF;

    double salario, salario1H, salario1M, salario1S, pagamento;

    cout << fixed << setprecision(2);

    cout << "Escreva qual o seu nome: ";
    getline(cin, nome);

    cout << "Selecione seu cargo: " << endl << "1 - Estagiario\n2 - Coordenador\n3 - Tercerizado\n4 - Diretor" << endl;
    cin >> opcao;

    switch(opcao){
        case 1:
            cout << "Qual o seu Salario: ";
            cin >> salario;
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            if(horas >= 660){
                cout << "Sua hora cota de horas foi cumprida funcionario(a) "<< nome << "." << endl << "seu salario foi R$ " << salario;
            } else {
                cout << "Quantos minutos voce trabalhou: ";
                cin >> minutos;
                cout << "Quantos segundos voce trabalhou: ";
                cin >> segundos;


                // ve certinho como usar if e else ternario
                if (horas != 0){
                    horasF = 660 - horas;
                } else {
                    horasF = 0;
                }

                if(minutos != 0){
                    minutosF = 60 - minutos;
                } else {
                    minutosF = 0;
                }

                if (segundos != 0){
                    segundosF = 60 - segundos;
                } else {
                    segundosF = 0;
                }

                salario1H = (1 * salario) / 660;
                salario1M = salario1H / 60;
                salario1S = salario1M / 60;
                pagamento = salario - ((salario1H * horasF) + (salario1M * minutosF) + (salario1S * segundosF));
                cout << "Falta " << horasF << ":" << minutosF << ":" << segundosF << " para comprir a carga horaria mensal, " << nome << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
        case 2:
            cout << "Qual o seu Salario: ";
            cin >> salario;
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            if(horas >= 660){
                cout << "Sua hora cota de horas foi cumprida funcionario(a) "<< nome << "." << endl << "seu salario foi R$ " << salario;
            } else {
                cout << "Quantos minutos voce trabalhou: ";
                cin >> minutos;
                cout << "Quantos segundos voce trabalhou: ";
                cin >> segundos;


                // ve certinho como usar if e else ternario
                if (horas != 0){
                    horasF = 660 - horas;
                } else {
                    horasF = 0;
                }

                if(minutos != 0){
                    minutosF = 60 - minutos;
                } else {
                    minutosF = 0;
                }

                if (segundos != 0){
                    segundosF = 60 - segundos;
                } else {
                    segundosF = 0;
                }

                salario1H = (1 * salario) / 660;
                salario1M = salario1H / 60;
                salario1S = salario1M / 60;
                pagamento = salario - ((salario1H * horasF) + (salario1M * minutosF) + (salario1S * segundosF));
                cout << "Falta " << horasF << ":" << minutosF << ":" << segundosF << " para comprir a carga horaria mensal, " << nome << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
        case 3:
            cout << "Qual o seu Salario: ";
            cin >> salario;
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            if(horas >= 660){
                cout << "Sua hora cota de horas foi cumprida funcionario(a) "<< nome << "." << endl << "seu salario foi R$ " << salario;
            } else {
                cout << "Quantos minutos voce trabalhou: ";
                cin >> minutos;
                cout << "Quantos segundos voce trabalhou: ";
                cin >> segundos;


                // ve certinho como usar if e else ternario
                if (horas != 0){
                    horasF = 660 - horas;
                } else {
                    horasF = 0;
                }

                if(minutos != 0){
                    minutosF = 60 - minutos;
                } else {
                    minutosF = 0;
                }

                if (segundos != 0){
                    segundosF = 60 - segundos;
                } else {
                    segundosF = 0;
                }

                salario1H = (1 * salario) / 660;
                salario1M = salario1H / 60;
                salario1S = salario1M / 60;
                pagamento = salario - ((salario1H * horasF) + (salario1M * minutosF) + (salario1S * segundosF));
                cout << "Falta " << horasF << ":" << minutosF << ":" << segundosF << " para comprir a carga horaria mensal, " << nome << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
        case 4:
            cout << "Qual o seu Salario: ";
            cin >> salario;
            cout << "Quantas horas voce trabalhou: ";
            cin >> horas;
            if(horas >= 660){
                cout << "Sua hora cota de horas foi cumprida funcionario(a) "<< nome << "." << endl << "seu salario foi R$ " << salario;
            } else {
                cout << "Quantos minutos voce trabalhou: ";
                cin >> minutos;
                cout << "Quantos segundos voce trabalhou: ";
                cin >> segundos;


                // ve certinho como usar if e else ternario
                if (horas != 0){
                    horasF = 660 - horas;
                } else {
                    horasF = 0;
                }

                if(minutos != 0){
                    minutosF = 60 - minutos;
                } else {
                    minutosF = 0;
                }

                if (segundos != 0){
                    segundosF = 60 - segundos;
                } else {
                    segundosF = 0;
                }

                salario1H = (1 * salario) / 660;
                salario1M = salario1H / 60;
                salario1S = salario1M / 60;
                pagamento = salario - ((salario1H * horasF) + (salario1M * minutosF) + (salario1S * segundosF));
                cout << "Falta " << horasF << ":" << minutosF << ":" << segundosF << " para comprir a carga horaria mensal, " << nome << endl;
                cout << "Seu salario desse mes é R$" << pagamento << endl;
            }
                break;
    }

    return 0;
}
