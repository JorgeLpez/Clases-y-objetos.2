#include <iostream>
#include <locale.h>
#include "Materia.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int nuevaClave,opc,opc2;
    string ModProf;
    Materia Programacion(89789,"Programación","Jairo Cain","Introducción a la Programación");
    Materia BasesDatos(78689,"Bases de Datos","Luis López","Estructura de Datos I");

    do{
        system("cls");
        cout<<"\n\t**MENU DE OPCIONES**"<<endl;
        cout<<"1. Cambiar la clave de la materia."<<endl;
        cout<<"2. Cambiar el nombre del maestro que imparte la materia."<<endl;
        cout<<"3. Imprimir todos los datos de la materia ."<<endl;
        cout<<"4. Salir."<<endl;
        cout<<"Ingrese una opción:";
        cin>>opc;

        switch(opc){

            case 1: system("cls");
                    cout<<"¿Qué materia deseas modificar?\n1. Programación. \n2. Bases de datos."<<endl;
                    cout<<"Ingresa la opción:";
                    cin>>opc2;

                    if(opc2==1){
                        system("cls");
                        cout<<"Ingrese la nueva clave:";
                        cin>>nuevaClave;
                        Programacion.CambioClave(nuevaClave);
                        cout<<"Clave cambiada exitosamente!"<<endl;
                        system("pause");
                    }else{
                        system("cls");
                        cout<<"Ingrese la nueva clave:";
                        cin>>nuevaClave;
                        BasesDatos.CambioClave(nuevaClave);
                        cout<<"Clave cambiada exitosamente!"<<endl;
                        system("pause");
                    }
                    break;

            case 2: system("cls");
                    cout<<"¿Qué materia deseas modificar?\n1. Programación. \n2. Bases de datos."<<endl;
                    cout<<"Ingresa la opción:";
                    cin>>opc2;

                    if(opc2==1){
                        system("cls");
                        fflush(stdin);
                        cout<<"Ingrese el nombre del nuevo Profesor: ";
                        getline(cin,ModProf);
                        Programacion.CambioProfe(ModProf);
                    }else{
                        system("cls");
                        fflush(stdin);
                        cout<<"Ingrese el nombre del nuevo Profesor: ";
                        getline(cin,ModProf);
                        BasesDatos.CambioProfe(ModProf);
                    }
                    break;

            case 3: system("cls");
                    cout<<"¿Qué materia deseas modificar?\n1. Programación. \n2. Bases de datos."<<endl;
                    cout<<"Ingresa la opción:";
                    cin>>opc2;

                    if(opc2==1){
                        system("cls");
                        cout<<"\t\n***Imprimiendo todos los datos de la materia***\n"<<endl;
                        Programacion.Imprime();
                        system("pause");
                    }else{
                        system("cls");
                        cout<<"\t\n***Imprimiendo todos los datos de la materia***\n"<<endl;
                        BasesDatos.Imprime();
                        system("pause");
                    }
                    break;
        }

    }while(opc!=4);

    return 0;
}
