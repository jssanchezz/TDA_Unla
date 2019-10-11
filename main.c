#include <stdio.h>
#include <stdlib.h>
#include "Universidad.h"

int main()
{
    ///TESTING

    ///Crear una universidad>>>

    Universidad miUni = crearUniversidad("UNLa", "Lanus 1111", "unla.com.ar");

    ///Muestro universidad>>>

    mostrarUniversidad(miUni);

    ///Seteo variables>>>

    setNombre(miUni,"Universidad de Lanus");
    setDireccion(miUni,"Banfield 2222");
    setContacto(miUni,"nuevocorreo.unla.ar");

    //Obtengo datos mediante gets y muestro

    printf("%s\n", getNombre(miUni));
    printf("%s\n", getDireccion(miUni));
    printf("%s\n", getContacto(miUni));

    ///Guardo Archivo>>>

    guardarUniversidad(miUni);

    ///Elimino variable eUniversidad>>>

    destruirUniversidad(miUni);


    return 0;
}
