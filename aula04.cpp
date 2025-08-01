/*criar classe na extensão ".h" */

/*implementação da classe extensão '.cpp'*/

/*deverá IMPORTAR COM "include"*/

#ifndef /*se não definido - Pula o código se já tiver sido incluído*/
#define /*define um nome para eveitar duplicidade*/
#endif /*fim do if*/

#ifdef TIME_H //inclua esse bloco APENAS se TIME_H não está definido
#define TIME_H //na primeira inclusão, defina TIME_H para que este
               //bloco não seja incluído novamente

//...

#endif //fim do bloco #ifndef TIME_H