/*Implementação da classe Time*/
#include<iostream> // Biblioteca para entrada e saída
#include "time.h" // Inclui o cabeçalho da classe Time

using namespace std; //Para escrever cout ao invés de std::cout

/*
    Getters
*/
int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}   
/*
    Nos métodos "set", a classe está recebendo como parâmetro uma
    variável com o mesmo nome do atributo. Esse fato faz com que o 
    atributo seja "escondido". Por exemplo, no método setHour, abaixo,
    quando usarmo a variável "hour", estamos nos referindo ao parâmetro
    e não ao atributo da classe.

    Para contornar esse problema, usamos a palavra reservada
    "this". Assim:

    this ->hour, this->minute, this->second se referem ao atributos.

    hour, minute e second se referem aos parâmetros dos métodos abaixo.
*/

/*
    
    Setters

*/
void Time::setHour(int hour) {
   this->hour = hour; // Atribui o valor do parâmetro ao atributo da classe
}

void Time::setMinute(int minute) {
   this->minute = minute; // Atribui o valor do parâmetro ao atributo da classe
}   

void Time::setSecond(int second) {
   this->second = second; // Atribui o valor do parâmetro ao atributo da classe
}

void Time::print() const {
    // Imprime a hora no formato HH:MM:SS
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond() {
    // Incrementa o segundo
    second += 1;
    
    // Se os segundos chegarem a 60, reseta para 0 e incrementa os minutos
    if (second >= 60) {
        second = 0;
        minute++;
        
        // Se os minutos chegarem a 60, reseta para 0 e incrementa as horas
        if (minute >= 60) {
            minute = 0;
            hour++;
            
            // Se as horas chegarem a 24, reseta para 0
            if (hour >= 24) {
                hour = 0;
            }
        }
    }
}
