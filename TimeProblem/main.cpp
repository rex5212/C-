#include <bits/stdc++.h>

using namespace std;

// fazer o problema tempo base com a adição de pode escolhe se vai se de segundos || minutos para horas ou dia (ai tem o de horas tambem) !! e o inverso !! - não completado...

int main()
{
    string opcao, transformacao;
    // problema tempo

    int horas, minutos, segundos, dia, mes, semanas, ano, minutosT, resto;
    // levando mes como tendo 30 dias

    cout << "Escolha qual o tipo de dado que ira se transformado: " << endl;
    cout << "Versao 0.8, por enquanto esta fixo em segundo" << endl;
    //getline(cin, opcao);
    opcao = "segundos";

    if(opcao == "segundos"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        cout << "Quanto segundos voce que transformar: ";
        cin >> segundos;
        if(transformacao == "segundos"){
            cout << "Deu " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            if(segundos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 60 segundos: " <<  segundos << " Segundos";
            } else {
                minutos = segundos / 60;
                segundos = segundos % 60;
                cout << "Deu " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "horas"){
            if(segundos < 3600){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 3600 segundos: " <<  segundos << " Segundos";
            } else {
                horas = segundos / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                segundos = resto % 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if (transformacao == "dia"){
            if(segundos < 86400){
                cout << "Não da para transforma para dias, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 86400 segundos: " <<  segundos << " Segundos";
            } else {
                dia = segundos / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 604800){
                cout << "Não da para transforma para semanas, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 604800 segundos: " <<  segundos << " Segundos";
            } else {
                semanas = segundos / 604800;
                resto = segundos % 604800;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "mes"){
            if(segundos < 2592000){
                cout << "Não da para transforma para mes, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 2592000 (quando o mesmo for de 30 dias) segundos: " <<  segundos << " Segundos";
            } else {
                mes = segundos / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "ano"){
            if(segundos < 31104000){
                cout << "Não da para transforma para ano, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 31104000 segundos: " <<  segundos << " Segundos";
            } else {
                ano = segundos / 31104000;
                resto = segundos % 31104000;
                mes = resto / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        }
    }

/*
    if(opcao == "minutos"){
        cout << "Fale em qual tipo de dados voce que tranformar: ";
        getline(cin, transformacao);
        cout << "Quanto minutos voce que transformar: ";
        cin >> minutos;
        if(transformacao == "segundos"){
            segundos = minutos * 60;
            cout << "Dei " << segundos << " Segundos";
        } else if(transformacao == "minutos"){
            cout << "Deu " << minutos << " Minutos";
        } else if(transformacao == "horas"){
            if(minutos < 60){
                cout << "Não da para transforma para minutos, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 60 minutos: " <<  minutos << " Minutos";
            } else {
                horas = minutos / 60;
                minutos = minutos % 60;
                resto = minutos % 60;
                segundos = resto / 60;
                cout << "Deu " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if (transformacao == "dia"){
            if(segundos < 1440){
                cout << "Não da para transforma para dias, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 1440 minutos: " <<  minutos << " Minutos";
            } else {
                dia = minutos / 1440;
                resto = minutos % 1440;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "semana"){
            if(segundos < 604800){
                cout << "Não da para transforma para semanas, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 604800 segundos: " <<  minutos << " Minutos";
            } else {
                semanas = segundos / 604800;
                resto = segundos % 604800;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << semanas << " Semanas, " << dia << " Dias, " << horas << " Horas,  " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "mes"){
            if(segundos < 2592000){
                cout << "Não da para transforma para mes, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 2592000 (quando o mesmo for de 30 dias) segundos: " <<  segundos << " Segundos";
            } else {
                mes = segundos / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        } else if(transformacao == "ano"){
            if(segundos < 31104000){
                cout << "Não da para transforma para ano, ja que a quantidade de segundos e insuficiente, necessita de pelo menos 31104000 segundos: " <<  segundos << " Segundos";
            } else {
                ano = segundos / 31104000;
                resto = segundos % 31104000;
                mes = resto / 2592000;
                resto = segundos % 2592000;
                dia = resto / 86400;
                resto = segundos % 86400;
                horas = resto / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                resto = segundos % 60;
                segundos = resto % 60;
                cout << "Deu " << ano << " ano(s), "<< mes << " mes(es), " << dia << " Dias, " << horas << " Horas, " << minutos << " Minutos e " << segundos << " Segundos";
            }
        }
    }
*/

    return 0;
}
