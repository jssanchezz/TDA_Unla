#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Universidad.h"

struct eUniversidad{
    char nombre[30];
    char direccion[30];
    char contacto[30];

    //VECTOR DE DEPARTAMENTOS
};


///Constructor

Universidad crearUniversidad(char nombre[30], char direccion[30], char contacto[30])
{
    Universidad miUniversidad = malloc(sizeof(struct eUniversidad));

    strcpy(miUniversidad->direccion,direccion);
    strcpy(miUniversidad->nombre,nombre);
    strcpy(miUniversidad->contacto,contacto);

    return miUniversidad;
}

Universidad crearUniversidadDesdeChar(char a[100])
{

    int posDelimitador1 = 0, posDelimitador2 = 0;
    int i, j = 0;
    char auxNombre[30] = " ", auxDireccion[30]= " ", auxContacto[30]= " ";
    char delimitador = '+';

    ///Determino posicion del primer delimitador

    for(i=0;i<100;i++)
    {
        if(a[i]==delimitador)
        {
            posDelimitador1 = i;
            i=100;
        }
    }

    ///Determino posicion del segundo delimitador

    for(i=posDelimitador1+1;i<100;i++)
    {
        if(a[i]==delimitador)
        {
            posDelimitador2 = i;
            i=100;
        }
    }

    ///Copio en auxNombre el contenido hasta el primer delimitador

    for(i=0;i<posDelimitador1;i++)
    {
        auxNombre[j]=a[i];
        j++;
    }

    ///Copio en auxDireccion el contenido hasta el segundo delimitador

    j = 0;
    for(i=posDelimitador1+1;i<posDelimitador2;i++)
    {
        auxDireccion[j]=a[i];
        j++;
    }

    ///Copio en auxContacto el contenido hasta el final de a
    ///EL PROBLEMA ESTÁ ACAAAAAAAA

    j = 0;
    for(i=posDelimitador2+1;i<100;i++)
    {
        auxContacto[j]=a[i];
        j++;
    }

    return crearUniversidad(auxNombre,auxDireccion,auxContacto);
}

///Destructor

void destruirUniversidad(Universidad miUniversidad)
{
    free(miUniversidad);
}

///Setters y getters

char* getNombre(Universidad miUniversidad)
{
    return miUniversidad->nombre;
}

char* getDireccion(Universidad miUniversidad)
{
    return miUniversidad->direccion;
}

char* getContacto(Universidad miUniversidad)
{
    return miUniversidad->contacto;
}

void setNombre(Universidad miUniversidad, char nombre[])
{
    strcpy(miUniversidad->nombre, nombre);
}

void setDireccion(Universidad miUniversidad, char direccion[])
{
    strcpy(miUniversidad->direccion, direccion);
}

void setContacto(Universidad miUniversidad, char contacto[])
{
    strcpy(miUniversidad->contacto, contacto);
}

///Funciones y/o procedimientos

void agregarDepartamento(Universidad miUniversidad)
{

}

void mostrarUniversidad(Universidad miUniversidad)
{
    printf("%s\n", miUniversidad->nombre);
    printf("%s\n", miUniversidad->direccion);
    printf("%s\n", miUniversidad->contacto);
}

void mostrarDepartamentos(Universidad miUniversidad)
{

}

///FUNCIONE ARCHIVOS

Universidad cargarUniversidad()
{
    char texto[100]=" ";
    Universidad miUni;

    FILE *arc = fopen("Universidad.txt","r");

    if(arc==NULL)
        printf("EL ARCHIVO NO EXISTE");
    else
    {
        fflush(stdin);
        fgets(texto,100,arc);
        printf("%s", texto);
        miUni = crearUniversidadDesdeChar(texto);

        fclose(arc);
    }

    return miUni;
}


void guardarUniversidad(Universidad miUni)
{
    FILE *arc = fopen("Universidad.txt", "w");

    fprintf(arc, "%s+%s+%s",getNombre(miUni),getDireccion(miUni),getContacto(miUni));

    fclose(arc);
}
