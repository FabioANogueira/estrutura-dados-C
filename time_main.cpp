#include <iostream>
#include "time.h"
using namespace std;

int main(){
/*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
*/

Time t1(23,59,59);
t1.print(); // Imprime 23:59:59
t1.setHour(12);
t1.setMinute(30);  
t1.setSecond(15); 

t1.print(); // Imprime 12:30:15
cout << "Hora: " << t1.getHour() << endl; // Imprime Hora: 12
cout << "Minuto: " << t1.getMinute() << endl; // Imprime Minuto: 30
cout << "Segundo: " << t1.getSecond() << endl; // Imprime Segundo

Time t2; // Neste segundo objeto, usamos os valores padrão do construtor
t2.print(); // Imprime 00:00:00

Time t3(23, 59 , 58);
t3.print(); // Imprime 23:59:58
t3.nextSecond(); // Avança um segundo   
t3.print(); // Imprime 23:59:59
t3.nextSecond(); // Avança mais um segundo
t3.print(); // Imprime 00:00:00 (avança para o próximo dia)

}