#ifndef TIME_H
#define TIME_H

class Time{
    private: //Seção Privada
        // Membros privados da classe
        int hour; //0-23
        int minute; //0-59
        int second; //0-59
    public: //Seção Pública
    Time(int hour = 0, int minute = 0, int second = 0); //Construtor com valores padrão
    int getHour() const; //Método para obter a hora
    void setHour(int hour); //Método para definir a hora
    int getMinute() const; //Método para obter os minutos   
    void setMinute(int minute); //Método para definir os minutos
    int getSecond() const; //Método para obter os segundos  
    void setSecond(int second); //Método para definir os segundos
    void print() const; //Método para imprimir o tempo
    void nextSecond(); //Método para avançar um segundo
};

#endif TIME_H // Fim do bloco #ifndef TIME_H