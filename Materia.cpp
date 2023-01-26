#include "Materia.h"

Materia::Materia(int Clave,string Nombre,string ProfesorTit,string LibroTexto)
{
    this->Clave=Clave;
    this->Nombre=Nombre;
    this->ProfesorTit=ProfesorTit;
    this->LibroTexto=LibroTexto;
}

void Materia::CambioClave(int nuevaClave)
{
    Clave=nuevaClave;
}

void Materia::CambioProfe(string Prof)
{
    ProfesorTit=Prof;
}

void Materia::Imprime()
{
    cout<<"Clave: "<<Clave<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Profesor: "<<ProfesorTit<<endl;
    cout<<"Libro de texto: "<<LibroTexto<<endl;
}
