#ifndef MATERIA_H
#define MATERIA_H
#include<iostream>

using namespace std;

class Materia
{
    private:
        int Clave;
        string Nombre,ProfesorTit,LibroTexto;

    public:
        Materia(int,string,string,string);
        void Imprime();
        void CambioClave(int);
        void CambioProfe(string);

};

#endif // MATERIA_H
